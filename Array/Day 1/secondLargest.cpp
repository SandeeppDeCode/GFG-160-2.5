
/*
Day 1: Second Largest element in array
Time : O(N);
Space : O(1);
*/
#include<bits/stdc++.h>
using namespace std;

int secondLargest(vector<int> arr){
    int firstLargest = INT_MIN;
    int secondLargest = firstLargest;
    for(int i = 0; i < arr.size();i++){
        if(arr[i] > firstLargest){
            secondLargest = firstLargest;
            firstLargest = arr[i];
        }else if(arr[i] > secondLargest && arr[i] < firstLargest ){
            secondLargest = arr[i];
        }
    }
    return secondLargest == INT_MIN ? -1 : secondLargest;
}   
int main(){
    vector<int>nums = {1,1,2,4,5,-1};
    cout<<secondLargest(nums)<<endl;
}