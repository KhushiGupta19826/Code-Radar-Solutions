#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if (n%2==0){
        n++;
    }
    for( int i =1 ; i<n; i+=2){
        for(int j = (n-i)/2 ; j>0 ; j--){
            printf(" ");
        }
        for(int k = 1;k<=i ; k++){
            printf("*");
        }
        for (int i = n - 2; i >= 1; i -= 2) {
        for (int j = (n - i) / 2; j > 0; j--)  
            printf(" ");
        for (int k = 1; k <= i; k++)  
            printf("*");
    }
}
return 0;
}