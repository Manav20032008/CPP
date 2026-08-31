#include<bits/stdc++.h>

using namespace std;
int maxSubArray(int nums[],int n){
	int currSum = 0, maxSum = 0;
	
	for(int i=0; i<n; i++){
		currSum += nums[i];
		maxSum = max(maxSum,currSum);
		if(currSum < 0) {
			currSum = 0;
		}
	}
	return maxSum;
}
int main(){
	int nums[]= {5,-1,-5,4,1,-2,1,5};
	cout<< maxSubArray(nums,8);
}
