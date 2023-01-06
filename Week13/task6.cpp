class Solution {
public:
    bool isPossible(string recipe, unordered_map<string, vector<string>>& ingre, unordered_map<string, bool>& isSupply, unordered_map<string, bool>& visNode) {
        if(visNode[recipe]) return false;
        if(isSupply[recipe]) return true;
        if(!ingre[recipe].size()) return isSupply[recipe];
        visNode[recipe] = 1;
        for(auto &ingredient: ingre[recipe]) {
            if(!isSupply[ingredient] and !isPossible(ingredient, ingre, isSupply, visNode))
                return false;
        }
        isSupply[recipe]=1;
        return 1;
    }
    vector<string> findAllRecipes(vector<string>& recipes, vector<vector<string>>& ingredients, vector<string>& supplies) {
        unordered_map<string, bool> isSupply;
        unordered_map<string, vector<string>> ingre;
        int n=recipes.size();
        for(int i=0;i<n;i++) {
            ingre[recipes[i]] = ingredients[i];
        }
        for(auto &supply: supplies)
            isSupply[supply]=1;
        vector<string> res;
        for(auto &itr: recipes) {
            unordered_map<string, bool> visNode;
            if(isPossible(itr, ingre, isSupply, visNode)) 
                res.push_back(itr);
        }
        return res;
    }
};