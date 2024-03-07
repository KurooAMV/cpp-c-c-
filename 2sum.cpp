//finding sum of 2 elements that is equal to given sum
#include<iostream>
#include<algorithm>
using namespace std;

bool sumOf2_naive(int arr[], int n, int sum){
    cout<<"The elements with sum same as "<<sum<<" are: "<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(arr[i]+arr[j]==sum){
                //cout<<arr[i]<<" "<<arr[j]<<endl;
                return 1;
            }
        }
    }
    return 0;
}

bool pointerMethod(int arr[], int n, int sum){
    sort(arr,arr+n);
    int l=0, r=n-1;
    while(l<r){
        if(arr[l]+arr[r]==sum){return 1;}
        else if(arr[l]+arr[r]<sum){l++;}
        else{r--;}
    }
    return 0;
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

    int sum;
    cout<<"Enter the sum to be searched for: ";
    cin>>sum;
    
    //if(sumOf2_naive(arr,n,sum)==1){
    //    cout<<"Yes"<<endl;
    //}

    if(pointerMethod(arr,n,sum)==1){cout<<"Yes, there exists a pair with sum equivalent to "<<sum<<"."<<endl;}
    else{
        cout<<"No, there exists no such pair."<<endl;
    }
    return 0;
}