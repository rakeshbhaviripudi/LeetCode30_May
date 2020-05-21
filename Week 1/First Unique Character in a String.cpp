class Solution {
public:
    int firstUniqChar_1(string s) {
        unordered_map<char,int> frequency;
        for(int i=0; i<s.size();i++){
            frequency[s[i]]++;
        }
        for(int i=0; i< s.size();i++){
            if(frequency[s[i]] == 1) return i;
        }
        return -1;
    }
    
     int firstUniqChar(string s) {
         int frequency[26] = {0};
         for(int i=0; i<s.size();i++){
             frequency[s[i]-'a']++;
         }
         for(int i=0; i<s.size();i++){
             if(frequency[s[i]-'a'] == 1) return i;
         }
         return -1;
     }
};
