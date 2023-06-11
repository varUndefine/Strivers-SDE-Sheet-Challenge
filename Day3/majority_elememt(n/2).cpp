#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n) {
	// Write your code here.
	int majInd=0;
	int count=1;
	for(int i=1;i<n;i++){
		if(arr[majInd]==arr[i])count++;
		else count--;
		if(count==0){
			majInd=i;
			count=1;
		}
	}
	count =0;
	for(int i=0;i<n;i++){
         if(arr[majInd]==arr[i]){
			 count++;
		 }
		 if(count>n/2)return arr[majInd];
	}
	return -1;
}