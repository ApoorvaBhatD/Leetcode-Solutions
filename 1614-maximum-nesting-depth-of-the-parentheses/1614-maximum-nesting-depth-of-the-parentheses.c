#import <string.h>
int maxDepth(char* s) {
    int count=0,maximum=0;
    int len=strlen(s);
    for (int i=0;i<len+1;i++){
        if (s[i]=='('){
            count++;
            if (count>maximum) maximum=count;
        }
        if (s[i]==')'){
            count--;
        }  
    }
    return maximum;
}