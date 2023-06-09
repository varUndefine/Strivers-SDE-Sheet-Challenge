#include <bits/stdc++.h> 
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    // Write your code here.
    if(intervals.size()==0)return intervals;
    sort(intervals.begin(),intervals.end());
    vector<vector<int>>output;
    output.push_back(intervals[0]);
    for(int i=1;i<intervals.size();i++){
        if(output.back()[1]>=intervals[i][0])output.back()[1]=max(output.back()[1],intervals[i][1]);
        else output.push_back(intervals[i]);
    }
    return output;
}
