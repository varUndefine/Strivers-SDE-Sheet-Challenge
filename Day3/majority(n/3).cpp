#include <bits/stdc++.h>

vector<int> majorityElementII(vector<int> &nums)
{
    // Write your code here.

    int maj1=0,maj2=0,cnt1=0,cnt2=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==nums[maj1]){
                cnt1++;
            }
            else if(nums[i]==nums[maj2]){
                cnt2++;
            }
            else if(cnt1==0){
                maj1=i;
                cnt1=1;
            }
            else if(cnt2==0){
                maj2=i;
                cnt2=1;
            }
            else{
                cnt1--;
                cnt2--;
            }
        }
        cnt1=0;
        cnt2=0;
        vector<int>res;
        for(int i=0;i<n;i++){
            if(nums[i]==nums[maj1])cnt1++;
            else if(nums[i]==nums[maj2])cnt2++;
        }
        if(cnt1>n/3)res.push_back(nums[maj1]);
        if(cnt2>n/3)res.push_back(nums[maj2]);
        return res;
}