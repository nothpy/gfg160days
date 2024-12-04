    bool areRotations(string &s1, string &s2) 
    {
        string str = s2+s1+s1;
        int m = s2.size();
        int n= str.size();
        int pre=0, suff=1;
        vector<int>lps(n,0);
        while(suff<n)
        {
            if(str[pre]==str[suff])
            {
                lps[suff] = pre+1;
                suff++, pre++;
                if(pre==m) return true;
            }
            else if(pre) pre = lps[pre-1];
            else suff++;
        }
        return false;
    }
