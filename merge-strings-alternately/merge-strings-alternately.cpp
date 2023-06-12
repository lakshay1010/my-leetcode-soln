class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string res;
        int m=word1.size(), n=word2.size();
        int i=0, j=0;
        while(i<m || j<n){
            if(i<m) res+=word1[i++];
            if(j<n) res+=word2[j++];
        }
        return res;
    }
};