#include<stdio.h>
int main(void){
    int n;
    int count = 0;
    printf("input:");
    scanf("%d",&n);
    printf("---------\n");
    while(1){
        if(n==1){
            break;
        }else if(n%2==0){
            n/=2;
            count++;
            printf("%d/%d\n---------\n",n,count);
        }else{
            n = n*3+1;
            count++;
            printf("%d/%d\n---------\n",n,count);
        }
    }
    printf("count:%d",count);
}