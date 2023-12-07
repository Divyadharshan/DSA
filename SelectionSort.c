/* Time Complexity O(n^2) */

#include<stdio.h>
void SelectionSort(int a[], int n){
    int i, j, min, temp;
    for(i=0; i<n-1; i++){
        min=i;
        for(j=i+1; j<n; j++){
            if(a[j]<a[min]){
                min=j;
            }
        }
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;
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
    SelectionSort(arr,n);
    printf("Sorted Array in Ascending Order:\n");
    print(arr,n);
}
