#include <string.h>
bool isAnagram(char* s, char* t) {
    int sLen=strlen(s), tLen=strlen(t);
    if (sLen!=tLen) return false;
    int hash[26]={0};
   
    for (int i=0;i<sLen;i++){
        hash[s[i]-'a']++;
        hash[t[i]-'a']--;
    }
    for (int i=0;i<26;i++){
        if (hash[i]!=0){
            return false;
        }
    }
    return true;
}