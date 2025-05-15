// Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.

 

// Example 1:

// Input: nums = [1,2,3,4,5,6,7], k = 3
// Output: [5,6,7,1,2,3,4]
// Explanation:
// rotate 1 steps to the right: [7,1,2,3,4,5,6]
// rotate 2 steps to the right: [6,7,1,2,3,4,5]
// rotate 3 steps to the right: [5,6,7,1,2,3,4]
// Example 2:

// Input: nums = [-1,-100,3,99], k = 2
// Output: [3,99,-1,-100]
// Explanation: 
// rotate 1 steps to the right: [99,-1,-100,3]
// rotate 2 steps to the right: [3,99,-1,-100]
 

//My solution but its brute force
void rotate(vector<int>& nums, int k) {
    int length = nums.size() - 1;
    k = k% nums.size();
    for(int i=0; i<k; i++){
        int temp = nums[length];
        for(int i = length ; i> 0; i--){
            nums[i] = nums[i-1];
        }
        nums[0] = temp;
    }
}

// Best possible solution, reverse the entire array, reverse k elements and then reverse the remaining elements

void rotate(vector<int>& nums, int k) {
    k = k % nums.size();  // Step 0
    reverse(nums.begin(), nums.end());               // Step 1
    reverse(nums.begin(), nums.begin() + k);         // Step 2
    reverse(nums.begin() + k, nums.end());
}