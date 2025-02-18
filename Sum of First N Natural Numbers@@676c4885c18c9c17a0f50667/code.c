#include<stdio.h>
int main(){
    int num,sum;
    scanf("%d",&num);
    for(int i=1; i<=num;i++){
        sum+=i;
        printf("%d ",i);
    }
    return 0;
}