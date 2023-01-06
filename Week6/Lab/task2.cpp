class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> qu;
        for(int i=0;i<stones.size();i++)
        {
            qu.push(stones[i]);
        }
        while(qu.size()>1)
        {
            int one=qu.top();
            qu.pop();
            int two=qu.top();
            qu.pop();
            int num=abs(one-two);
            if(num!=0)
            {
                qu.push(num);
            }
        }
        if(qu.empty())
        {
            return 0;
        }
        return qu.top();
    }
};