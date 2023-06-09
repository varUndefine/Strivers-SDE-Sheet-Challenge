#include <bits/stdc++.h> 
#include <bits/stdc++.h> 
vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
    vector<vector<long long int>>res;
    for(int i=0;i<n;i++){
        vector<long long int>temp(i+1,1);//As we are starting from 0 and size should be 1 so i+1 
           // and first and last value will be 1 so initilize all value of vector with 1.
        for(int j=1;j<i;j++){
            temp[j]=res[i-1][j]+res[i-1][j-1];//from 2nd row, we need to add upper left corner and upper right corner.
        }
        res.push_back(temp);
    }
    return res;
}
