    char nonRepeatingChar(string &s)
    {
        unordered_map<char, int> charCount;
        for (char c : s) charCount[c]++;
        for (char c : s) 
        {
            if (charCount[c] == 1) 
            return c;
              
        }
        return '$';
    }
