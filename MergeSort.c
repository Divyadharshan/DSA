/* Time Complexity O(n*logn) */

#include <stdio.h>
void MergeSort(int arr[], int left, int right){
    if(left < right)
    {
        int center = (left + right)/2;
        MergeSort(arr,left,center);
        MergeSort(arr,center + 1,right);
        Merge(arr, left,center,right);
    }
}
void Merge(int arr[], int left, int center, int right){
    int a[20], b[20], n1, n2, aptr, bptr, cptr, i, j;
    n1 = center - left + 1;
    n2 = right - center;
    for(i = 0; i < n1; i++){
        a[i] = arr[left + i];
    }
    for(j = 0; j < n2; j++){
        b[j] = arr[center + 1 + j];
    }
    aptr = 0;
    bptr = 0;
    cptr = left;
    while (aptr < n1 && bptr < n2)
    {
        if (a[aptr] <= b[bptr]){
            arr[cptr] = a[aptr++];
        }
        else{
            arr[cptr] = b[bptr++];
        }
        cptr++;
    }
    while (aptr < n1){
        arr[cptr++] = a[aptr++];
    }
    while (bptr < n2){
        arr[cptr++] = b[bptr++];
    }
}
int main(){
    int i, n, arr[20];
    printf("Enter the limit : ");
    scanf("%d", &n);
    printf("Enter the elements : ");
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    MergeSort(arr, 0, n - 1);
    printf("The sorted elements are : ");
    for (i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
