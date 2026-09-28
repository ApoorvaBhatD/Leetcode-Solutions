#import <string.h>
int maxDepth(char* s) {
    int count=0,maximum=0;
    for (int i=0;i<strlen(s)+1;i++){
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