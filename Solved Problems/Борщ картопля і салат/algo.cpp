#include <iostream>
#include <math.h>
using namespace std;
void qsort(int *array, int low, int high)
{
    int i = low;
    int j = high;
    int pivot = array[(i + j) / 2];
    int temp;

    while (i <= j)
    {
        while (array[i] < pivot)
            i++;
        while (array[j] > pivot)
            j--;
        if (i <= j)
        {
            temp = array[i];
            array[i] = array[j];
            array[j] = temp;
            i++;
            j--;
        }
    }
    if (j > low)
        qsort(array, low, j);
    if (i < high)
        qsort(array, i, high);
}
int main() {
    int N;
    cin >> N;
    int array[N][3];
    int med1=0,med2=0,med3=0;
    int sum = 0;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < 3; j++){
            cin >> array[i][j];
        }
    }
    int arr1[N],arr2[N],arr3[N];
    for(int i = 0; i < N; i++){
        for(int j = 0; j < 3; j++){
            arr1[i] = array[i][0];
            arr2[i] = array[i][1];
            arr3[i] = array[i][2];
        }
    }
    qsort(arr1,0,N-1);
    qsort(arr2,0,N-1);
    qsort(arr3,0,N-1);
    if(N != 0 && N != 1) {
        if (N % 2 == 0) {
            for (int i = 0; i < N; i++) {
                med1 = (arr1[(sizeof(arr1) / sizeof(arr1[0])) / 2] + arr1[(sizeof(arr1) / sizeof(arr1[0])) / 2 - 1]) / 2;
                med2 = (arr2[(sizeof(arr2) / sizeof(arr2[0])) / 2] + arr2[(sizeof(arr2) / sizeof(arr2[0])) / 2 - 1]) / 2;
                med3 = (arr3[(sizeof(arr3) / sizeof(arr3[0])) / 2] + arr3[(sizeof(arr3) / sizeof(arr3[0])) / 2 - 1]) / 2;
            }
        } else {
            for (int i = 0; i < N; i++) {
                med1 = arr1[(sizeof(arr1) / sizeof(arr1[0])) / 2];
                med2 = arr2[(sizeof(arr2) / sizeof(arr2[0])) / 2];
                med3 = arr3[(sizeof(arr3) / sizeof(arr3[0])) / 2];
            }
        }
    }
    for(int i = 0; i < N; i++){
            sum += (abs(med1 - array[i][0]) + abs(med2 - array[i][1]) + abs(med3 - array[i][2]));
    }
    cout << sum << endl;
    return 0;
}
