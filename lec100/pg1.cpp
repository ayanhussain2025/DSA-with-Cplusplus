// Q1.(leetcode) : 239. Sliding Window Maximum  - brute force  tc(on^2)
// class Solution {
// public:
//     vector<int> maxSlidingWindow(vector<int>& nums, int k) {
//         vector<int>ans;
//         for(int i=0;i<nums.size()-k+1;i++)
//         {
//             int maxi=INT_MIN;
//             for(int j=i;j<i+k;j++)
//             {
//                 if(maxi<nums[j])
//                 maxi=nums[j];
//             }
//             ans.push_back(maxi);
//         }
//         return ans;
//     }
// };

                    //optimized approach