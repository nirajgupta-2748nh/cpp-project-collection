#include<iostream>
using namespace std;

int main() {
    int n, search_element, i;
    int found = 0; // Flag to indicate if the element is found

    cout<<"Enter the number of elements in the array: ";
    cin>>n;

    int arr[n]; // Declare a variable-length array

    cout<<"Enter "<<n<<" elements:\n";
    for (i = 0; i < n; i++) {
        cin>>arr[i];
    }

    cout<<"Enter the element to search: ";
    cin>>search_element;

      // Perform linear search
    for (i = 0; i < n; i++) {
        if (arr[i] == search_element) {
            cout<<"Element "<<search_element<<" found at index "<<i<<".\n";
            found = 1; // Set flag to true
            break;     // Exit the loop once found
        }
    }
    if (found == 0) {
        cout<<"Element "<<search_element<<" not found in the array.\n";
    }
    return 0;
}











