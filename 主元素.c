class Solution {
public:
    /*
     * @param nums: a list of integers
     * @return: find a  majority number
     */
    int majorityNumber(vector<int> &nums) {
        // write your code here
        int n = 1;  
        int temp = nums[0];  
        for(int i = 1 ;i < nums.size();i++){  
            if(temp == nums[i])  
                n++;  
            if(temp != nums[i])  
                n--;  
            if(n==0){  
                temp = nums[i];  
                n = 1;  
            }  
        }  
        return temp; 
    }
};