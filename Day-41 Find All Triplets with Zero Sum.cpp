// Solution 1st
class Solution {
  public:
    vector<vector<int>> findTriplets(vector<int> &arr)
    {
       int n = arr.size();
       vector<vector<int>>ans;
       for(int i=0; i<n; i++)
       {
           int first = arr[i];
           unordered_map<int, vector<int>> mpp;
           for(int j=i+1; j<n; j++)
           {
               int second = arr[j];
               int rem = 0-(first+second);
               if(mpp.find(rem) != mpp.end())
               {
                   for (int idx : mpp[rem]){
                    ans.push_back({i, idx, j});
                   }  
               }
               mpp[second].push_back(j);
           }
       }
       return ans;
    }
};

// Solution 2nd
// User function Template for C++
class Solution {
  public:
    vector<vector<int>> findTriplets(vector<int> &arr)
    {
        set<vector<int>>resSet;
        int n = arr.size();
        unordered_map<int, vector<pair<int, int>>> mp;
        for(int i=0 ; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                mp[arr[i]+arr[j]].push_back({i, j});
            }
        }
        for(int i=0; i<n; i++)
        {
            int rem=-arr[i];
            if(mp.find(rem) != mp.end())
            {
                vector<pair<int, int>> pairs = mp[rem];
                for(auto p : pairs)
                {
                    if(p.first != i && p.second !=i )
                    {
                        vector<int> curr = {i, p.first, p.second};
                        sort(curr.begin(), curr.end());
                        resSet.insert(curr);
                    }
                }
            }
        }
        vector<vector<int>> res(resSet.begin(), resSet.end());
        return res;
        
    }
};

// Solution 1st and 2nd are perfect to large input 
//Solution 3rd # this solution not perfect for large input 

// User function Template for C++
class Solution {
  public:
    vector<vector<int>> findTriplets(vector<int> &arr)
    {
       int n = arr.size();
       vector<vector<int>>ans;
       for(int i=0; i<n; i++)
       {
           int first = arr[i];
           unordered_map<int, int> mpp;
           for(int j=i+1; j<n; j++)
           {
               int second = arr[j];
               int rem = 0-(first+second);
               if(mpp.find(rem) != mpp.end())
               {
                   ans.push_back({i, mpp[rem], j}); 
               }
               mpp[second] = j;
           }
       }
       return ans;
    }
};

