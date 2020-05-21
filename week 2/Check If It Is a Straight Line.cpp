class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {   
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        int x1 = coordinates[0][0];
        int y1 = coordinates[0][1];
        int x2 = coordinates[1][0];
        int y2 = coordinates[1][1];
        
        int dY = y2-y1;
        int dX = x2-x1;
        
        for(int i=1; i<coordinates.size()-1;i++){
            
            if(dX * (coordinates[i+1][1] - coordinates[i][1]) != 
               dY* (coordinates[i+1][0] - coordinates[i][0]) )
              return false;
        }
    return true;
    }

};
