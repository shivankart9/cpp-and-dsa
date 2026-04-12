// this program prints which container can store highest water
// leetcode-code 11 container with most water
// brute force approach
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int maxwater(vector<int>& height) {
    int maxwater = 0;
    int width,length,area;
    for(int i = 0; i < height.size(); i++) {
        for(int j = i+1; j < height.size(); j++) {
            width = j-i;
            length = min(height[i],height[j]);
            area = width*length;
            maxwater = max(maxwater,area);
        }
    }
    return maxwater;
}

int main() {
    vector<int> height = {1,8,6,2,5,4,8,3,7};

    cout << "the max water of water that a container can store is " << maxwater(height) << endl;

    return 0;
}