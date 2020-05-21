
class Solution {
public:
    int singleNonDuplicate_1(vector<int>& nums) {
            for(int i=1; i<nums.size();i++){
                    nums[0] ^= nums[i];
            }
            return nums[0];
    }
//Havent read the question properly.. 
//
    int singleNonDuplicate(vector<int>& nums) {
            int start=0;
            int end = nums.size()-1;
            int mid;
            while(start < end){
                    mid = start + (end-start)/2;
                    if(nums[mid] == nums[mid ^ 1]) start = mid+1;
                    else end= mid;
            }
            return nums[start];
    }
};
