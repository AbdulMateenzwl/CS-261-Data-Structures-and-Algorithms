class FoodRatings {
public:
   unordered_map<string,int> fmp;
    unordered_map<string,set<pair<int,string>> > cmp;
    unordered_map<string,string> f_c;
    FoodRatings(vector<string>& foods, vector<string>& cu, vector<int>& rat) {
        int n = rat.size();
        for(int i=0;i<n;i++)
        {
            fmp[foods[i]]=rat[i];
            cmp[cu[i]].insert({-rat[i],foods[i]});
            
            f_c[foods[i]]=cu[i];
        }
        
    }

    void changeRating(string food, int newRating) {
        int oldrat = fmp[food];
        fmp[food] = newRating;
        string cus = f_c[food];
        
        cmp[cus].erase({-oldrat,food});
        cmp[cus].insert({-newRating,food});
        
        return ;
        
    }

    string highestRated(string cuisine) {
        auto it= cmp[cuisine].begin();
        // auto [x,ans] = *it;
        return it->second;
        // return ans;
        
    }
    

};

/**
 * Your FoodRatings object will be instantiated and called as such:
 * FoodRatings* obj = new FoodRatings(foods, cuisines, ratings);
 * obj->changeRating(food,newRating);
 * string param_2 = obj->highestRated(cuisine);
 */