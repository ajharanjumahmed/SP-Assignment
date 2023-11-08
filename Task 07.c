#include<stdio.h>

void reverseArray(int arr[], int n)
{
    for(int i=n-1; i>=0; i--){
        printf("%d ", arr[i]);
    }
}
int main()
{
    int size;
    scanf("%d", &size);
    int arr[size];
    for(int i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }
    reverseArray(arr, size);
    return 0;
}

