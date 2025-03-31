#include<stdio.h>
void bubbleSort(int arr[], int n){
    for(int i = 0; i<n;i++){
        for(int j = 0 ; j<n-i-1 ; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
void printArray(int arr[], int n){
    for(int a = 0 ; a<n; a++){
        printf("%d",arr[a]);
    }
}
// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for(int k =0 ;k<n; k++){
//         scanf("%d",&arr[k]);
//     }
//     bubbleSort(arr,n);
//     printArray(arr,n);
//     return 0;
    
    
}