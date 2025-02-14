#include<stdio.h>
#include<math.h>
int main(){
    int a,isPrime =1;
    scanf("%d",&a);
    if(a<=1){
        printf("Not Prime");
    }
    else{
        for(int i =2; i <= sqrt(a);i++){
            if(a%1 == 0){
                isPrime=0;
                break;
            }
        }
    }
    if(isPrime)printf("Prime");
    else printf("Not Prime");
}