class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> s_count(26,0), p_count(26,0);
        vector<int> ans;
        
        if(s.size() < p.size()) return ans;
        
        for(int i =0; i< p.size(); i++){
            s_count[s[i] -'a']++;
            p_count[p[i]- 'a']++;
        }
        
        if(s_count == p_count) ans.push_back(0);

        for(int i = p.size(); i< s.size(); i++){
            s_count[s[i] -'a']++;
            s_count[s[i- p.size()]-'a']--;
            
            if(s_count == p_count) ans.push_back(i-p.size()+1);
        }
    return ans;
    }
};
