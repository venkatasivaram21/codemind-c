#include<stdio.h>
int main(){
    int fac,a,b,i=1;
    scanf("%d %d",&a,&b);
    fac=a>b?a:b;
    while(i){
        if(fac%a==0&&fac%b==0){
        printf("%d",fac);
        i=0;}
        fac++;
    }
}