class Solution {
public:
    bool isAnagram(string s, string t) {
        int a[26] = {0};
        int b[26] = {0};    
    for(int i=0;i<s.length();i++){
            int value = s[i]-'a';
            a[value]++;
        }
    for(int i=0;i<t.length();i++){
            int value = t[i]-'a';
            a[value]--;
        }
        for(int i=0;i<25;i++){
            if(a[i]!=0 ){
                return false;
            }
        }
        return true;
    }
};
