#include<stdio.h>
void print(int arr[], int n){ 
    for(int i=0; i<n; i++){ 
        printf("%d ", arr[i]);
    }
}
void insertionSort(int arr[], int n){ 
    for(int i = 1; i < n; i++){
        int tmp=arr[i];
        int j=i-1;
        while(tmp<arr[j] && j>=0){ 
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=tmp;
    }
}
int main(){
    int arr[]={99,-5,4,5,2,12};
    int n = sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr, n);
    printf("Elements after sorting:\n");
    print(arr, n);
}
