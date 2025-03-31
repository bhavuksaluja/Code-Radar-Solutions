#include <stdio.h>
void prime();
int main(){
    
    void prime();
}
void prime(){
    int a, count=0;
    scanf("%d",&a);
    for (int i=1;i<=a;i++){
        if (a%i==0){
            count++;
        }

    }
    if (count==2){
        return 1;
    }else{
        return 0;
    }
}
