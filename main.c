#include <stdio.h>
#include <stdlib.h>

void insertionSort(int* array, int arraySize){
    int key, j;
    for(int i=0; i<arraySize; i++){
        key = array[i];
        j = i -1;
        while( j >= 0 && array[j] > key){
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = key;
    }

}
void arrayPrint(int* array ,int arraySize){
    for(int i=0; i<arraySize ; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
}
int main()
{
    int array[] ={25, 28, 11 ,5};
    int arraySize  = 4;
    printf("Unsorted array is :");
    arrayPrint(array, arraySize);
    insertionSort(array, arraySize);
    printf("Sorted array is :");
    arrayPrint(array, arraySize);
    return 0;
}
