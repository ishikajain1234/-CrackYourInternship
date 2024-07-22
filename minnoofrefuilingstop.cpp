#define pp pair<int,int>

class Solution {
public:
    int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {
        if(target<=startFuel)return 0;
        if(target>startFuel && stations.size()==0)return -1;
        if(startFuel<stations[0][0])return -1;

        int n=stations.size();
       sort(stations.begin(),stations.end());
         int count=0;
         int sf=startFuel;
         int i=0;
         priority_queue<int>pq;
         while(sf<target){

             while( i<n && stations[i][0]<=sf){
                pq.push(stations[i][1]);
                i++;
             }
             if(pq.size()<=0){
                return -1;
             }
             int x=pq.top();
             pq.pop();
             sf+=x;
             count++;
             if(sf>=target)return count;

               
         }
         
         return count;

    }
};