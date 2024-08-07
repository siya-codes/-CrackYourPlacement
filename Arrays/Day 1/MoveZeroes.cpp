class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = 0; // Index for placing non-zero elements

       // Iterate through the array, placing non-zero elements at the beginning
       for (int i = 0; i < nums.size(); i++) {
           if (nums[i] != 0) {
               // Swap the current non-zero element with the element at index j
               swap(nums[i], nums[j]);
               j++; // Increment j to point to the next position for a non-zero element
           }
       }
   }
};
    
