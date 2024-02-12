#include<stdio.h>
#include<string.h>
int main(){
  int n, m, l,r;
  scanf("%d %d",&n, &m);
  fflush(stdin);
  char str[2*m+1];
  
  fgets(str, 2*n,stdin);
  for(l=1; l < n+1;l = r+1){
    r = l;
    for(int i = 0; i < 2*m-1; i+=2){
        if(r == str[i]-'0'){
            r += 1;
        } 
    }
    for(int k = r; k > l-1; k--){
                printf("%d ",k);
             }
    
  }
  printf("\n");


}
