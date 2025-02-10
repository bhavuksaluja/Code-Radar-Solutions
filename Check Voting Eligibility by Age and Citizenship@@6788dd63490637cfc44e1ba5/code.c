#include <stdio.h>
int main() {
    int a,b;
    scanf("%d%d",&a,&b);
    if(a<17 && a==0){
        printf("Not Eligible");
    }else{
        printf("Eligible");
    }
    return 0;
}