#include<stdio.h>
int main(){

    int n; 
    printf("enter the number");
    scanf("%d",&n);
    for(int i=0; i<=n; i++){
        int count=65;
        for(int j=0; j<=n; j++){
            if(i+j<=n){
                printf(" ");    
            }
            else{
                printf("%c",count);
                count++;
            }
             
          } printf("\n");
              
        }
     

    return 0;
}