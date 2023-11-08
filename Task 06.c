#include<stdio.h>

int countOccurences(int arr[], int size, int given)
{
    int count=0;
    for(int i=0; i<size; i++){
        if(arr[i]==given){
            count++;
        }
    }
    return count;
}

int main()
{
    int size;
    printf("size: ");
    scanf("%d", &size);
    int arr[size];
    for(int i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }
    int given;
    printf("no to search: ");
    scanf("%d", &given);
    printf("%d appeared %d times", given, countOccurences(arr,size,given));
    return 0;
}

