#include<iostream>
using namespace std;

//in this prorgam we have to find the total number of paths to reach from 0 to 3 or any number defined by the user
int boardGame(int s, int e){
    if(s==e){
        return 1;
    }
    if(s>e){return 0;}
    int count=0;
    for(int i=1; i<=6; i++){
        count += boardGame(s+i,e);
    }
    return count;
}

int main(){
    int s,e;
    cout<<"Enter the starting point:";
    cin>>s;
    cout<<"Enter the ending point: ";
    cin>>e;

    int count=boardGame(s,e);
    cout<<"The total number of paths possible to be taken are: "<<count<<endl;
    return 0;
}