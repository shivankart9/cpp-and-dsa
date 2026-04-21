// this program prints which container can store highest water
// leetcode-code 11 container with most water
// two pointer approach
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int maxwater(vector<int>& height) {
    int lp = 0, rp = height.size() - 1;
    int width,length,currwater,maxwater = 0;

    while(lp < rp) {
        width = rp - lp;
        length = min(height[lp],height[rp]);
        currwater = width*length;
        maxwater = max(maxwater,currwater);

        height[lp] < height[rp] ? lp++ : rp--;
    }
    return maxwater;
}

int main() {
    vector<int> height = {1,8,6,2,5,4,8,3,7};

    cout << "max water in a container is : " << maxwater(height) <<endl;

    return 0;
}