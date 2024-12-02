 vector<int> search(string& pat, string& txt)
    {
        int m = pat.size(), n = txt.size();
        vector<int> lps(m, 0), res;

        for (int i = 1, len = 0; i < m;) 
        {
            if (pat[i] == pat[len]) lps[i++] = ++len;
            else if (len) len = lps[len - 1];
            else  lps[i++] = 0;
        } 
        
        for (int i = 0, j = 0; i < n;) 
        {
            if (txt[i] == pat[j])
            {
                i++, j++;
                if (j == m)
                {
                    res.push_back(i - j);
                    j = lps[j - 1];  
                }
            } 
            else if (j)j = lps[j - 1];
            else  i++;
        }
        return res;
    }
