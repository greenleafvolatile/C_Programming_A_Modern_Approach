/* Write a program that asks the user to enter a series of integers (which it stores in an array), 
   then sorts the integers by calling the function selection_sort. When given an array
   with n elements, selection_sort must do the following:
   1. Search the array to find the largest element, then move it to the last position in the array.
   2. Call itself recursively to sort the first n-1 elements of the array."*/

#include <stdio.h>
#include <ctype.h>

#define SIZE 50

void selectionSort(int anArray[], int actualSize);
void printArray(int anArray[], int arraySize);

int
main(void) {
    int numbers[SIZE];
    int i, actualSize = 0;printf("Enter a series of up to 30 space separated integers: ");
    int number = 0;
    char ch;
    scanf("%c", &ch);
    for(i = 0; i < SIZE ; i++) {
        if(isdigit(ch)){
            number = (number * 10) + ch - '0'; 
            scanf("%c", &ch);
        }
        else{
            numbers[actualSize] = number;
            actualSize++;
            number = 0;
            if(ch == '\n')
                break;
            else
                scanf(" %c", &ch);
        }
    }

    printf("Unsorted array: ");
    printArray(numbers, actualSize);
    printf("\n");
    printf("Sorted array: ");
    selectionSort(numbers, actualSize);
    printArray(numbers, actualSize);

    return 0;

}

void selectionSort(int anArray[], int actualSize) {
    if(actualSize <= 1)
        return;
    int maxPos = actualSize - 1;
    for(int i = 0;i < actualSize - 1; i++){
        if(anArray[i] > anArray[maxPos]){
            maxPos = i;
        }
    }
    int temp = anArray[maxPos];
    anArray[maxPos]=anArray[actualSize - 1];
    anArray[actualSize - 1] = temp;
    selectionSort(anArray, actualSize - 1);
}

void printArray(int anArray[], int arraySize){
    int i;
    for(i = 0; i < arraySize; i++){
        printf("%d ", anArray[i]);
    }
    printf("\n");
}


