#include<stdio.h>

int maxValue(int arr[], int size){
    // int size = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < size; i++)
    {
        int compElement = arr[i];
        int j = i-1;
        while (j >= 0 && compElement < arr[j])
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = compElement;
    }
    
    return arr[size-1];
}

int main(){
    int array[] = {1,54,32,87,12,98,23,45,67,89};
    int size = sizeof(array)/sizeof(array[0]);
    printf("max value: %d", maxValue(array, size));
}