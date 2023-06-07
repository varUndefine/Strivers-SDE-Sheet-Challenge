#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    long long int maxi=INT_MIN;
    long long int sum=0;
    for(int i=0;i<n;i++){
        if(sum+arr[i]<=0)sum=0;
        else sum+=arr[i];
        if(maxi<sum)maxi=sum;
    }
    return maxi; 
}