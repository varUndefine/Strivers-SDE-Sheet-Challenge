#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    // Write your code here.
    int n=prices.size();
    int least=INT_MAX;
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        least=min(least,prices[i]);
        maxi=max(maxi,prices[i]-least);
    }
    return maxi;
}