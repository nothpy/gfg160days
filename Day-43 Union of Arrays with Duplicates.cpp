class Solution {
  public:
    int findUnion(vector<int>& a, vector<int>& b) {
        vector<int> ans;
        unordered_map<int, int> mpp;
        for(int i=0; i<a.size(); i++){
            mpp[a[i]]++;
        }
        for(int i=0; i<b.size(); i++){
            mpp[b[i]]++;
        }
        
        for(auto x : mpp){
            if(x.second>=1) ans.push_back(x.first);
        }
        return ans.size();
    }
};
