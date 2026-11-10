#include<iostream>
#include<vector>

using namespace std;

bool linearSearchAux(vector<int> nums, int target, int position) {
    if(position >= nums.size())
        return false;
    if(nums[position] == target)
        return true;
    return linearSearchAux(nums, target, position+1);
}

bool linearSearchRec(vector<int> nums, int target) {
    if(nums.empty()) return false;
    return linearSearchAux(nums, target, 0);

}

bool linearSearchRec2(vector<int> nums, int target) {
    if(nums.empty()) return false;
    if(nums[0] == target)
        return true;
    // [1, [2,3,4]] -> [2, [3, 4]]
    return linearSearchRec2(vector<int>(nums.begin() + 1, nums.end()), target);

}



bool linearSearchIt(vector<int> nums, int target) {
    for(size_t i = 0; i < nums.size(); i++) {
        if(nums[i] == target)
            return true;
    }
    return false;
}

int main() {
    vector<int> nums = {3, 5, 7, 9, 2, 1};

    int target = 1;
    cout << boolalpha;
    cout << "Is " << target <<" in the vector? " << linearSearchRec2(nums, target);
    

}