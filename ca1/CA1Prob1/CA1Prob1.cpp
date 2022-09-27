#include <iostream>

int dotProduct(int a[], int b[], int n);
void bubbleSort(int a[], int n);
using namespace std;

int main()
{
    int a[] = {-1,0,2,15,7,6,-4,8,21,-13 };
    int b[] = { 5,9,-18,16,0,1,-4,18,-2,12 };
    int n = sizeof(a) / sizeof(a[0]);

    // sort array
    bubbleSort(a, n);
    bubbleSort(b, n);

    // compute dot product
     int res = dotProduct(a, b, n);
     cout << res;
}

int dotProduct(int a[], int b[], int n)
{
    int res = 0;

    for (int i = 0; i < n; n++) {
        res += a[i] * b[i];
    }

    return res;
}

void bubbleSort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j+1] = temp;
            }
        }
    }
}


