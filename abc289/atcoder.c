#include<stdio.h>
#include<string.h>
int main(){
    char s[10];
    scanf("%s", s);
    int n = strlen(s);
    for(int i = 0; i < n; i++){
        char a = s[i];
        if(a == '1'){
            printf("0");    
        } else{
            printf("1");
        }
        
    }
    printf("\n");
    return 0;
}