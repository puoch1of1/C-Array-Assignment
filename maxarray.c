// algorithmn to find the maximum element in an array

/* 
1. Initialize max_element to arr[0] (the first element of the array).
2. Loop through the array starting from index 1 to the end:
    a. If arr[i] > max_element:
        i. Set max_element = arr[i]
3. After the loop ends, max_element will contain the largest value in the array.
4. Return max_element.
*/



#include<stdio.h>

int maxArr(int arr[], int size){
    int maximum_array = arr[0];  // we assume the first number in the array is the biggest
    
    // we go through the list one by one
    for (int i = 1; i < size; i++){
        // in case of a bigger number, we update maximum_array
        if (arr[i] > maximum_array){
            maximum_array = arr[i]; // the biggest number in the array
        }
    }
    // after going through all the numbers we return the biggest one
    return maximum_array;
}

int main(){
    // create an array
    int arr[] = {56, 89, 9, 66, 33, 12, 30}; 
    // find how many numbers are in the array
    int size = sizeof(arr) / sizeof(arr[0]);
    // use the maxArr to get the biggest number
    int max_value = maxArr(arr, size);
    // print the result of the biggest number
    printf("The maximum element in the array is: %d\n", max_value);
    return 0;
}
