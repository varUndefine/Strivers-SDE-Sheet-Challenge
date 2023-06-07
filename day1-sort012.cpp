#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   //   Write your code here
   int low=0;
   int mid=0;//iterator 
   int high=n-1;
   while(mid<=high){//The idea is to sweep all 0s to the left and all 2s to the right, then all 1s are left in the middle.
      if(arr[mid]==0){
         swap(arr[low++],arr[mid++]);
      }
      else if(arr[mid]==2){
         swap(arr[mid],arr[high--]);
      }
      else mid++;
   }
}