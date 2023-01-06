class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        unordered_map m = convert(edges);
        map<int,bool> visited;
        queue<int> q;
        int i=1;
        q.push(source);
        while(!q.empty()){
            int num=q.front();
            q.pop();
            if(num==destination){
                return true;
            }
            if(visited[num])    
                continue;
            visited[num]=true;
            for(auto a: m[num]){
                q.push(a);
            }
        }
        return false;
    }
    unordered_map<int, vector<int>> convert(vector<vector<int>> edges)
    {
        unordered_map<int, vector<int>> m;
        for (auto a : edges)
        {
            m[a[0]].push_back(a[1]);
            if (a[0] == a[1])
                continue;
            m[a[1]].push_back(a[0]);
        }
        return m;
    }
};