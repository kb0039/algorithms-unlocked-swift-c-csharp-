#include <iostream>

using namespace std;

void insertionSort(int A[], int n) {
    
    //Inputs:
    //    A : an array.
    //    n : the value being searched for
    
    int key; //key sorter
    int j; // indicies to delineate subarray
    
    //Step 1 -  For i = 2 to n (adjust i to 1 for arrays)
    
    for (int i = 1; i < n; i++){

        //Step 1A - Set key to A[i], and set j to (i - 1)
        key = A[i];
        j = i - 1;
        //Step 1B -  While j > 0 and A[j] > key, do the following: (make sure to adjust j > 0 to j>=0 since i has been adjust to 1...n)
        while (j >= 0 && A[j] > key) {
            //Step 1B-i - Set A[j+1] to A[j]
            A[j+1] = A[j];
            //Step 1B-ii - Decrement j (i.e, set j to j - 1)
            j = j - 1;
        }
        //Step 1C - Set A[j+1] to key
        A[j+1] = key;
        
    }
    
}


void printArray(int * A, int length) {

for (int i = 0; i < length; i++) {

cout <<  A[i] << endl;

	}

}


int main () {


int A[] = {12,9,3,7,14,11}; //Test Array A ranging from A[0]-A[9]

int arrayLength = sizeof(A)/sizeof(A[0]); //Test array length

insertionSort(A,arrayLength); //Test example

printArray(A,arrayLength); //Test print sorted array

}
