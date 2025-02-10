#include <stdio.h>
// #include<math.h>
int main() {
 int a,b;
 char d;
 scanf("%d%d%c",&a,&b,&c);
 sum=a+b;
 multiply=a*b;
 subtraction =a-b;
 division = a%b;
 if(a&&b&&+'){
    printf("%d",sum);
 }else if(a&&b&&"-"){
    printf("%d",subtraction);
 }else if(a&&b&&"*") {
    printf("%d",multiply);
 }else{printf("%d",division);
 } 
    return 0;
}