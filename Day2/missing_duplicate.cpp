#include <bits/stdc++.h> 
#include <bits/stdc++.h> 

pair<int,int> missingAndRepeating(vector<int> &v, int n)
{
	// Write your code here
	pair<int,int>res;
    sort(v.begin(),v.end());
    int duplicate=-1;
    int sum=v[0];
    for(int i=1;i<n;i++){
        sum+=v[i];
        if(v[i-1]==v[i]){
            duplicate=v[i];
        }
    }
    int originalSum=(n*(n+1))/2;
    int missing=originalSum-(sum-duplicate);
    res=make_pair(missing,duplicate);
    return res;
}
