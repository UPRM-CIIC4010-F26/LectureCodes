#include<iostream>
#include<vector>

using namespace std;

bool binarySearcAux(vector<int> &nums, int target, int start, int end) {
    // Not found
    if(start > end) 
        return false;
    // Found
    int mid = (start + end)/2;
    if(nums[mid] == target) {
        return true;
    }
    else if(nums[mid] > target) {
        return binarySearcAux(nums, target, start, mid - 1);
    }
    else {
        return binarySearcAux(nums, target, mid + 1, end);
    }
}

bool binarySearch(vector<int> &nums, int target) {
    if(nums.empty()) return false;
    return binarySearcAux(nums, target, 0, nums.size());
}

bool binarySearch2(vector<int> nums, int target) {
    if(nums.empty()) return false;
    int mid = nums.size() /2;
    if(nums[mid] == target) return true;
    else if(nums[mid] > target)
        return binarySearch2(vector<int>(nums.begin(), nums.begin() + mid), target);
    else 
        return binarySearch2(vector<int>(nums.begin() + mid, nums.end() + mid), target);
}


int main() {
    vector<int> nums = {1, 2, 3, 67, 89, 90};

    int target = 900;
    cout << boolalpha;
    cout << "Is " << target <<" in the vector? " << binarySearch(nums, target);
    

}