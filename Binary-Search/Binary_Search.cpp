#include <iostream>
using namespace std;

int binarySearch(int n, int array[], int key){
    int start = 0;
    int end = n - 1;

    while (start <= end){
        int middle = start + (end - start) / 2;
        if (array[middle] == key){
            return middle;
        }
        else if (array[middle] < key){
            start = middle + 1;
        }
        else{
            end = middle - 1;
        }
    }
    return -1;
}

int main(){
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int array[n];
    cout << "Enter elements of array (sorted): ";
    for (int i = 0; i < n; i++){
        cin >> array[i];
    }

    int key;
    cout << "Enter key: ";
    cin >> key;
    int result = binarySearch(n, array, key);
    if (result != -1){
        cout << "Element found at index: " << result << endl;
    }
    else{
        cout << "Element not found" << endl;
    }
    return 0;
}