class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        vector<bool> map(rooms.size(),false);
        queue<int> q;
        q.push(0);
        while(!q.empty()){
            int size=q.size();
            for(int i=0;i<size;i++){
                int room=q.front();
                q.pop();
                map[room]=true;
                for(auto a: rooms[room]){
                    if(map[a]==false){
                        q.push(a);
                    }
                }
            }
        }
        return count(map.begin(),map.end(),true ) == rooms.size();
    }
};