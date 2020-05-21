class Solution {
    
    public:
    int numJewelsInStones_1(string J, string S) {
        set<char> jewels;
        int count=0;
        for(int i=0; i< J.size();i++){
            jewels.insert(J[i]);
        }
        for(char s: S){
            if(jewels.find(s) != jewels.end()){
                count++;
            }
        }
    return count;      
    }
       
   int numJewelsInStones(string J, string S){
       int count=0;
       for(int i=0; i< S.size(); i++){
           if(J.find(S[i]) != std::string::npos)    count++;
       }
       return count;
   }
    
    int numJewelsInStones_2(string J, string S) {
        int res = 0;
        unordered_set<char> setJ(J.begin(), J.end());
        for (char s : S)
            if (setJ.count(s)) res++;
        return res;
    }

   };
