vector<int> computeLPS(const string& str) 
   {
        int n = str.size();
        vector<int> lps(n, 0);
        int len = 0; 
        int i = 1;
        while (i < n)
        {
            if(str[i] == str[len])
            {
                len++;
                lps[i] = len;
                i++;
            } 
            else
            {
               if (len != 0) len = lps[len - 1];
                else{
                    lps[i] = 0;
                    i++;
                }
            }
        }
        return lps;
    }
    
    int minChar(string& s) {
        string rev = s;
        reverse(rev.begin(), rev.end());
        string combined = s + "#" + rev; 
        vector<int> lps = computeLPS(combined);
        return s.size() - lps.back();
    }
