auto speedup=[](){
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return nullptr;
    }();


class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {       
        map<char,int>mp;
        
        for(int i =0; i< magazine.size();i++) mp[magazine[i]]++;
        
        for(int i =0; i< ransomNote.size();i++){
            if(mp[ransomNote[i]] > 0) mp[ransomNote[i]]--;
            else return false;
        }
        return true;
    }
    
};
