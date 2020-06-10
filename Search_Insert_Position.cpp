#include <bits/stdc++.h>

using namespace std;

int main()
{
     vector<int> nums={1,3,5,6};
     int target = 0;
     int l=0;
     int h=nums.size()-1;
     bool flag=true;
     int mid;
     while(l<=h){
        mid=(l+h)/2;
        if(nums[mid]==target){
            cout<<"At Index:"<<mid<<endl;
            flag=false;
            break;
        }
        else if(nums[mid]<target){
            l=mid+1;
        }
        else{
            h=mid-1;
        }
     }
    cout<<"Insert At Index:"<<l<<endl;
    return 0;
}
