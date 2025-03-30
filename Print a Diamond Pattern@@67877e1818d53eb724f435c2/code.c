#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if (n%2==0){
        n++;
    }
    for(i =1 ; i<n; i+=2){
        for(j = (n-i)/2 ; j>0 ; j--){
            printf(" ");
        }
        for(k = 1;k<=i ; k++){
            printf("*");
        }
        for (i = n - 2; i >= 1; i -= 2) {
        for (j = (n - i) / 2; j > 0; j--)  
            printf(" ");
        for (k = 1; k <= i; k++)  
            printf("*");
    }
}
return 0;
}