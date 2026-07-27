#include <string.h>
bool isAnagram(char* s, char* t) {
    int sLen=strlen(s), tLen=strlen(t);
    if (sLen!=tLen) return false;
    int hash1[26]={0};
    int hash2[26]={0};
    for (int i=0;i<sLen;i++){
        hash1[s[i]-'a']++;
        hash2[t[i]-'a']++;
    }
    for (int i=0;i<26;i++){
        if (hash1[i]!=hash2[i]){
            return false;
        }
    }
    return true;
}