// InsertionSORT.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;



void insertionSort(int* A, int n);

int main() {
    int A[6] = { 5,2,4,6,1,3 };
    int n = sizeof(A) / sizeof(int);

    insertionSort(A, n);

    for (int i = 0; i < n; i++) {
        printf("%d", A[i]);
       
    }

    

    
 }
 


        void insertionSort(int* A, int n) {
        int key = 0;
        int i = 0;
        for (int j = 1; j < n; j++) {
            key = A[j];
            i = j - 1;
            while ((i >= 0) && (A[i] > key)) {
                A[i + 1] = A[i];
                i = i - 1;
                A[i + 1] = key;
            }
        }


    


    
    
    
    }


    


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
