#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a<0){
        printf("positive");
    }elif(a=0){
        printf("zero");
    }else{
        printf("negative");
    }
    return 0;
}