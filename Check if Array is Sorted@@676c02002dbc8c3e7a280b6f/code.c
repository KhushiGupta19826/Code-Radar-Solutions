#include<stdio.h>
int issorted(int arr[], int n){
    for(int i =0 ; i<n;i++){
        if(arr[i] > arr[i+1]){
            return 0;
        }
    }
    return 1;
}
int main(){
    int n;
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    if( issorted(arr,n)){
        printf("Not Sorted");
    }
    else{
        printf("Sorted");
    }
}