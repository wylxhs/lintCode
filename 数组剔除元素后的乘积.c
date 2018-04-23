class Solution {
public:
    /*
     * @param nums: Given an integers array A
     * @return: A long long array B and B[i]= A[0] * ... * A[i-1] * A[i+1] * ... * A[n-1]
     */
    vector<long long> productExcludeItself(vector<int> &nums) {
        // write your code here
        const int n = nums.size();
        vector<long long> left(n, 1);
        vector<long long> right(n, 1);
        vector<long long> res(n, 1);
        for (int i = 1; i < n; ++i)
            left[i] = left[i-1] * nums[i-1];
        for (int i = n-2; i >= 0; --i)
            right[i] = right[i+1] * nums[i+1];
        for(int i = 0; i != nums.size(); ++i)
            res[i] = left[i] * right[i];
        return res;
    }
};