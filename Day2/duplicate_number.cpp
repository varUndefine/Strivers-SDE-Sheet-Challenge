#include <bits/stdc++.h>

int findDuplicate(vector<int> &nums, int n){
	// Write your code here.

	for(int i=0;i<n;i++){
		int idx=nums[i];
		if(nums[i]<0)idx=-nums[i];//value becomes index
		if(nums[idx]<0)return idx;//it means,we got same value again that's why we got negative element
		else nums[idx]=-nums[idx];
	}
}
