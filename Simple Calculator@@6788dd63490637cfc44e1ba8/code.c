#include <stdio.h>
#include<math.h>
int main() {
 int a,b,sum,multiply, subtraction;
 float division;
 char d;
 scanf("%d%d%c",&a,&b,&d);
 sum = a+b;
 multiply= a*b;
 subtraction = a-b;
 division = (float)a/b;
 if(d == '+'){
    printf("%d",sum);
 }else if(d == '+'){
    printf("%d",subtraction);
 }else if(d == '*') {
    printf("%d",multiply);
 }else{printf("%d",division);
 } 
    return 0;
}