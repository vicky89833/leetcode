class Solution {
public:
    int minSteps(string s, string t) {
        int n=s.size();
         
        
        vector<int> freqChar(26,0);

        for(int i=0;i<n;i++){
            freqChar[s[i]-'a']++;
        }

        for(int i=0;i<n;i++){
            if(freqChar[t[i]-'a']>0){
              freqChar[t[i]-'a']--;
            }  
        }
        
        return accumulate(freqChar.begin(), freqChar.end(), 0);

    }
};
// c->1 -1=0
// d->1
// e->3-1=3
// l ->1
// o->1
// t->1-1=0