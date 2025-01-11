class Solution {
  public:
    int longestUniqueSubstr(string &s) 
    {
        unordered_map<char, int> lastIndex;
        int maxLength = 0, start = 0;
        for(int i=0; i<s.length(); i++)
        {
            char currChar = s[i];
            
            if(lastIndex.find(currChar) != lastIndex.end() && lastIndex[currChar] >= start){
                start = lastIndex[currChar]+1;
            }
            lastIndex[currChar] = i;
            maxLength = max(maxLength, i-start+1);
        }
        return maxLength;
    }
};
