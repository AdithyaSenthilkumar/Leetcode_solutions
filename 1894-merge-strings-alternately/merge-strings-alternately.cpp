class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans;
        int n,m;
        n=word1.length();
        m=word2.length();
        if(n>m){
            for(int i=0;i<n;i++){
                ans+=word1[i];
                if(i<m){ans+=word2[i];
                }
            }
        }else{for(int i=0;i<m;i++){
                if(i<n){ans+=word1[i];}
                ans+=word2[i];
                
            }

        }
        
        
        
        
        return ans;
    }
};