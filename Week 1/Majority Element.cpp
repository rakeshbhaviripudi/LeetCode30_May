class Solution {
public:
    Solution() {ios::sync_with_stdio(false); std::cin.tie(nullptr); std::cout.tie(nullptr);}
    
    int majorityElement_2(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> mp;
        for(int i=0; i<n;i++){
            mp[nums[i]]++;
        }
        for(auto i: mp){
            if(i. second > n/2) return i.first;
        }
    return -1;
    }
    
    
    int majorityElement_1(vector<int>& nums)
    {
        sort(nums.begin(),nums.end());
        return nums[(nums.size())/2];
    }
    
    
    int majorityElement(vector<int>& nums) {
        int count =0, ans;
        for(int i= 0; i<nums.size();i++){
            if(count ==0){
                ans = nums[i];
                count++;
            }
            else
                count += (nums[i]==ans)? 1: -1;

        }
    return ans;
     }
};
