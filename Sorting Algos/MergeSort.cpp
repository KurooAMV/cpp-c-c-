#include<iostream>
using namespace std;

void merge(int arr[], int l, int r, int mid){
    int n1 = mid - l + 1;
    int n2 = r - mid;

    int a[n1];
    int b[n2];

    for(int i = 0; i < n1; i++){
        a[i] = arr[l + i]; // Corrected the index to copy elements from arr to a
    }

    for(int j = 0; j < n2; j++){
        b[j] = arr[mid + 1 + j];
    }

    int i = 0, j = 0, k = l;

    while(i < n1 && j < n2){
        if(a[i] < b[j]){
            arr[k] = a[i];
            k++;
            i++;
        }
        else{
            arr[k] = b[j];
            k++;
            j++;
        }
    }

    while(i < n1){
        arr[k] = a[i];
        k++;
        i++;
    }

    while(j < n2){
        arr[k] = b[j];
        k++;
        j++;
    }
}

void mergesort(int arr[], int l, int r){
    if(l < r){
        int mid = l + (r - l) / 2;
        mergesort(arr, l, mid);
        mergesort(arr, mid + 1, r);

        merge(arr, l, r, mid);
    }
}

int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int l = 0, r = n - 1; // Corrected the upper bound
    mergesort(arr, l, r);

    cout << "Sorted array: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
