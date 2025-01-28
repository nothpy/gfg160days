class Solution {
  public:
    void generatePermutations(string s, int index, set<string>& up){
        if(index== s.size()){
            up.insert(s);
            return;
        }
        for(int i=index; i<s.size();i++){
            swap(s[index], s[i]);
            generatePermutations(s, index+1, up);
            swap(s[index], s[i]);
        }
    }
    vector<string> findPermutation(string &s) {
        set<string>up;
        generatePermutations(s, 0, up);
        return vector<string>(up.begin(), up.end());
    }
};
