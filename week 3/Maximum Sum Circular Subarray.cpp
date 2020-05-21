class Solution {
public:
    int kadane(vector<int>& A){

        int max_sum = INT_MIN;
        int current_sub_array_sum = 0;
        for(int i =0; i< A.size(); i++){
            current_sub_array_sum += A[i];
            if(current_sub_array_sum > max_sum) max_sum = current_sub_array_sum;
            if(current_sub_array_sum < 0) current_sub_array_sum= 0;
        }
    return max_sum; 
    }
    
    
    int maxSubarraySumCircular(vector<int>& A) {
        int nonCircularSum = kadane(A);
        int totalSum =0;

        for(int i =0; i< A.size(); i++){
            totalSum += A[i];
            A[i] = -A[i];
        }
       
        
        int minArraySum = kadane(A);

        int CircularSum = totalSum + minArraySum;
        if (CircularSum <= 0) return nonCircularSum;
    return max(nonCircularSum, CircularSum);
    }
};
