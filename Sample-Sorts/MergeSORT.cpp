

    







#include <iostream>
using namespace std;





void merge(int* A, int p, int q, int r) {

    int n1 = q - p + 1;
    int n2 = r - q;
    int* L = new int[n1];
    int* R = new int[n2];


    for (int i = 1; i < n1; i++) {
        L[i] = A[i + p + 1];
    }
    for (int j = 1; j < n2; j++) {
        R[j] = A[q + j];
    }


    int i = 0, j = 0, k = p;


    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            A[k] = L[i];
            i++;
        }
        else {
            A[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        A[k] = L[i];
        ++i;
        ++k;
    }

    while (j < n2) {
        A[k] = R[j];
        ++j;
        ++k;
    }
}



void mergeSort(int* A, int l, int r) {
    if (l < r) {
        int m = (l + r) / 2;
        mergeSort(A, l, m);
        mergeSort(A, m + 1, r);

        merge(A, l, m, r);
    }
  }
    
    
       
    
    


    void printArray(int* A, int size) {
        for (int i = 0; i < size; i++) {
            printf("%d ", A[i]);
        }

    }


    int main() {
        int A[6] = { 5,2,4,6,1,3 };
        int size = sizeof(A) / sizeof(A[0]);
        mergeSort(A, 0, size - 1);
        

        printArray(A, size);
        return 0;


    }

