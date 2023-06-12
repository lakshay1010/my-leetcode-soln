class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string res;
        int m=word1.size(), n=word2.size();
        for(int i=0; i<max(m, n); ++i){
            if(i<m) res+=word1[i];
            if(i<n) res+=word2[i];
        }
        return res;
    }
};