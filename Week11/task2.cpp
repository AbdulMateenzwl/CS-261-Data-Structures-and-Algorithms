int rC,cC;
bool arrange(vector<int> vtr1,vector<int> vtr2 )
    {
        int distance1 = abs(vtr1[0] - rC ) + abs(vtr1[1] - cC);
        int distance2 = abs(vtr2[0] - rC ) + abs(vtr2[1] - cC);
        return distance1 < distance2;
    }
class Solution {
public:

    vector<vector<int>> allCellsDistOrder(int rows, int cols, int rCenter, int cCenter) {
        rC=rCenter;
        cC=cCenter;
        vector<vector<int>> vtr;
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<cols;j++)
            {
                vector<int> vtree{i,j};
                vtr.push_back(vtree);
            }
        }
        sort(vtr.begin(),vtr.end(),arrange);
        return vtr;
    }
    
};