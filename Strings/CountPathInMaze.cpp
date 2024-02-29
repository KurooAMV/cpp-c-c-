#include<iostream>
using namespace std;
int countPathMaze(int n, int i, int j){
    if(i==n-1 && j==n-1){return 1;}
    if(i>n || j>n){return 0;}
    return countPathMaze(n,i+1,j) + countPathMaze(n,i,j+1);
}
int main(){
    int n,i,j;
    cout<<"Enter the size of the maze: ";
    cin>>n;
    cout<<"Enter the starting psition in (x,y) oordinates: ";
    cin>>i>>j;

    cout<<"The total number of paths in a maze are: "<<countPathMaze(n,i,j);
    return 0;
}