#include<stdio.h>
int main(){
int n;
    printf("enter the number");
    scanf("%d",&n);
    for(int i=0; i<=n; i++){
    for(int j=i; j<=n-1; j++){
           printf(" ");  
    }
    for(int k=0; k<= n-1; k++){
       printf("* ");
    }
     printf("\n");
    }
    return 0;
}