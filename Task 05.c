#include<stdio.h>

int findMax(int arr[], int n)
{
    int max = arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]>max){
            max = arr[i];
        }
        else{
            continue;
        }
    }
    return max;
}
int findMin(int arr[], int n)
{
    int min = arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]<min){
            min = arr[i];
        }
        else{
            continue;
        }
    }
    return min;
}

int main()
{
    int size;
    scanf("%d", &size);
    int arr[size];
    for(int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Max is %d\n", findMax(arr,size));
    printf("Min is %d\n", findMin(arr,size));
    return 0;
}
