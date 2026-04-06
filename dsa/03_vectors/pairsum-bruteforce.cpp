// this is vectors program to print the pairsum 
#include<iostream>
#include<vector>
using namespace std;

vector<int> pairsum(vector<int>& nums, int target) {
    for(int i = 0; i < nums.size(); i++) {
        for(int j = i+1; j < nums.size(); j++) {
            if(nums[i] + nums[j] == target) {
                cout << nums[i] << " " << nums[j];
            }
        }
    }
    
}

int main() {
    vector<int> nums = {2,7,11,15} ;
    int target = 9;
    

    cout << "the pair is : " <<endl;
    pairsum(nums,target);

    return 0;
}