class Solution {

public:

    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>> res;
        vector<int> tmp;
        tmp.push_back(0);
        helper(graph, 0, graph.size() - 1, res, tmp);
        return res;
    }
    void helper(vector<vector<int>>& graph, int node, int goal, vector<vector<int>>& res, vector<int>& tmp) {
        vector<int>& reach = graph[node];
        if (reach.size() == 0)
            return;
        for (int i: reach) {
            tmp.push_back(i);
            if (i == goal) {
                res.push_back(tmp);
            }
            else {
                helper(graph, i, goal, res, tmp);
            }
            tmp.pop_back();
        }
        
    } 
};