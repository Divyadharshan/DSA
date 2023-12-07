/* Time Complexity O(n^2) */

#include<stdio.h>
void bubbleSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if (arr[j]>arr[j+1]){ 
                int t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
            }
        }
    }
}
void print(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
}
int main(){
    int arr[] = {45,38,63,61,56,7};
    int n = sizeof(arr)/sizeof(int);
    bubbleSort(arr,n);
    printf("Sorted Array in Ascending Order:\n");
    print(arr,n);
}
