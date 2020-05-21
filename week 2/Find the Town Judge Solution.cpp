class Solution {
public:
//     int findJudge_1(int N, vector<vector<int>>& trust) {
        
//         vector<int>trusts(N+1), trusted(N+1);
        
//         for(auto t: trust) ++trusts[t[0]], ++trusted[t[1]];
        
//         for(auto i=1; i<= N; i++) if((trusts[i] == 0) && (trusted[i] == N-1)) return i;
    
//     return -1;
//    }
    
     int findJudge(int N, vector<vector<int>>& trust) {
         ios_base::sync_with_stdio(0);
         cin.tie(0);
         unordered_map<int,pair<int,int>> mp;
         
         for(int i= 1; i<= N; i++){
             pair<int, int> p;
             p.first = 0;
             p.second = 0;
             mp.insert(make_pair(i, p));
         }
         
         for(int i=0; i< trust.size(); i++){
             auto it = mp.find(trust[i][0]);
             it->second.second++;
             it = mp. find(trust[i][1]);
             it->second.first++;
         }
         
         for(auto i=mp.begin(); i != mp.end();i++){
             if(i->second.first >= N-1 && i->second.second == 0) return i->first;
         }
         
     return -1;
     }
    
};
