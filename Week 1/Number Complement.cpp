class Solution {
public:
    int findComplement(int num) {
        int x =1 ; // this x will be used to reach the 111 
        while(num > x) {x = x * 2 +1; } // this loop will break at 111 or 1111 11111....
        return  x-num;
    }
};
