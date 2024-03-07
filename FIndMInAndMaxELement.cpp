#include<iostream>
using namespace std;
int maximum(int arr[], int n){
    int maxNo=INT_MIN;
    for(int i=0; i<n; i++){
        if(arr[i]>maxNo){
            maxNo=arr[i];
        }
    }
    return maxNo;
}
int minimum(int arr[], int n){
    int minNo=INT_MAX;
    for(int i=0; i<n; i++){
        if(arr[i]<minNo){
            minNo=arr[i];
        }
    }
    return minNo;
}
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int h;
    cout<<"Enter '1' for maximum element and '2' for minimum element: ";
    cin>>h;

    switch(h){
        case 1:
            cout<<"THe maximum element of the array is: "<<maximum(arr,n);
            break;
        
        case 2:
            cout<<"THe minimum element of the array is: "<<minimum(arr,n);
            break;

        default:
            cout<<"Wrong entry!!";
    }

    return 0;
}