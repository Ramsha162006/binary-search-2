#include<iostream>
#include<vector>
using namespace std;

int BS(vector<int>nums,int x,int n){
    
    int ans = n;
    int low = 0,high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(nums[mid] > x){ 
            ans = mid;
            high = mid-1;
        }
        else {
            low = mid+1;
        }
    }
    return ans;
}
int main(){
    vector<int> nums = {20,21,22,28,30};
    int x = 22;
    int n = 5;
    int ind = BS(nums,x,n);
    cout<<ind;
}