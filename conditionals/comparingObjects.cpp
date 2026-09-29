#include<iostream>
#include<string>
using namespace std;

enum class ThreatLevel {SAFE, WILD, HOSTILE, DANGEROUS};
class MonsterEntry {
    private:
        string name;
        int id;
        ThreatLevel threatLevel;
        bool isContained;
        int count;
        float height; // in feet
        float weight; // in lb
    public:
        MonsterEntry(string name, int id, ThreatLevel threatLevel, bool isContained, int count, float height, float weight) {
            this->name = name;
            this->id = id;
            this->threatLevel = threatLevel;
            this->isContained = isContained;
            this->count = count;
            this->height = height;
            this->weight = weight;
        }

        MonsterEntry(): MonsterEntry("Vampire", 67, ThreatLevel::WILD, true, 1, 6, 170){}

        MonsterEntry(string name, int id, float height, float weight);

        string getName() {
            return name;
        }

        int getId() {
            return id;
        }

        ThreatLevel getThreatLevel() {
            return threatLevel;
        }

        bool getIsContained() {
            return isContained;
        }

        int getCount() {
            return count;
        }

        float getHeight() {
            return height;
        }

        float getWeight() {
            return weight;
        }

        // Setters
        void setName(string name) {
            this->name = name;
        }

        void setId(int id) {
            this->id = id;
        }

        void setThreatLevel(ThreatLevel threatLevel) {
            this->threatLevel = threatLevel;
        }

        void setIsContained(bool isContained) {
            this->isContained = isContained;
        }

        void setCount(int count) {
            this->count = count;
        }

        void setHeight(float height) {
            this->height = height;
        }

        void setWeight(float weight) {
            this->weight = weight;
        }

        string toString() {
            return "Name: " + name + ", ID: " + to_string(id) + ", Threat Level: " + getThreatLevelString() + ", Is Contained: " + (isContained ? "Yes" : "No") + ", Count: " + to_string(count) + ", Height: " + to_string(height) + ", Weight: " + to_string(weight);
        }

        string getThreatLevelString();
};

/*
  Assign the received parameters and set the following default values:
  - isContained: false
  - count: 1
  - threatLevel: 
     > if height is greater than 30 feet or weight is greater than 300 then set level to WILD
     > If height is greater than 50 feet or weight is greater than 500 then set level to HOSTILE
     > If height is 80 or more set to DANGEROUS
     > otherwise set to SAFE    
*/
MonsterEntry::MonsterEntry(string name, int id, float height, float weight){
    this->name = name;
    this->id = id;
    this->height = height;
    this->weight = weight;
    isContained = false;
    count = 1;
    if(height > 80) 
        threatLevel = ThreatLevel::DANGEROUS;
    else if(height > 50 || weight > 500)
        threatLevel = ThreatLevel::HOSTILE;
    else if(height > 30 || weight > 300) {
        threatLevel = ThreatLevel::WILD;
    } 
    else 
        threatLevel = ThreatLevel::SAFE;
    
    
}

/*
    Print the name of the threat level using a switch
*/
string MonsterEntry::getThreatLevelString() {
    string levelStr = "";
    switch (threatLevel)
    {
    case ThreatLevel::SAFE:
        levelStr = "SAFE";
        break;
    case ThreatLevel::WILD:
        levelStr =  "WILD";
        break;
    case ThreatLevel::HOSTILE:
        levelStr =  "HOSTILE";
        break;
    default:
        levelStr =  "DANGEROUS";
    }
    return levelStr;
}

/*
    Check if the monster is contained.
    If so, do nothing
    Otherwise, if thread level is SAFE set to WILD
*/
void increaseSeverityLevel(MonsterEntry &monster) {
    if(!monster.getIsContained() && monster.getThreatLevel() == ThreatLevel::SAFE){
            monster.setThreatLevel(ThreatLevel::WILD);
    }
}
/*
    Provide a danger score, the socre is calculated as follows:
    - If the monster's threat level is:
        > SAFE: 0
        > WILD: + 5
        > HOSTILE: + 10
        > DANGEROUS: + 20
    - If they are HOSTILE or DANGEROUS and have a height of 80 or more: +50
    - If they weight at least 500: +20
    return the final score
*/
int assesDanger(MonsterEntry monster) {
    return 123;
}

/*
    Compare both mosters and return the heaviest of the two.
*/
MonsterEntry getHeaviestMonster(MonsterEntry mon1, MonsterEntry mon2) {
    return MonsterEntry();
}

int main() {

    MonsterEntry m1;
    //string name, int id, float height, float weight
    MonsterEntry m2 = MonsterEntry("Werewolf", 12, 7, 250);

    cout << m1.toString() << endl;
    cout << m2.toString() << endl;

    cout << "Threat level m1: " << m1.getThreatLevelString() << endl; 
    cout << "Threat level m2: " << m2.getThreatLevelString() << endl; 

    increaseSeverityLevel(m2);
    cout << m2.toString() << endl;


}