// solution 1

class Solution {
  public:
    vector<int> intersectionWithDuplicates(vector<int>& a, vector<int>& b) 
    {
         unordered_set<int> setA(a.begin(), a.end());// Store unique elements from array a
         unordered_set<int> ans; // To store intersection elements
        for (const int& num : b)
        {
            if (setA.find(num) != setA.end()){
                ans.insert(num); // Add common elements to the result set
            }
        }
        return vector<int>(ans.begin(), ans.end()); // Convert set to vector
    }
};

// Solution 2
class Solution {
  public:
    vector<int> intersectionWithDuplicates(vector<int>& a, vector<int>& b) 
    {
        unordered_map<int, int> mpp;
        vector<int> ans;
        for(int i=0; i<a.size(); i++) mpp[a[i]]++;
        
        for(int i=0; i<b.size(); i++)
        {
            if(mpp[b[i]]>0) ans.push_back(b[i]);
            mpp[b[i]]=-1;
        }
        return ans;
        
    }
};
