#include<iostream>
#include<vector>
using namespace std;

int BS(vector<int>nums,int target){
    int n = nums.size();
    int low = 0,high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(nums[mid] == target) return mid;
        else if(target>nums[mid]) low = mid+1;
        else{
            high = mid-1;
        }
    }
    return -1;
}
int main(){
    vector<int> nums = {20,21,22,28,30};
    int target = 30;
    int ind = BS(nums,target);
    if(ind == -1) cout<<"target is not present"<<endl;
    else cout<< ind <<endl;
}