//Thids program generates all the sub-strings of the string provided to us
#include<iostream>
#include<string>
using namespace std;
void allSubstr(string s, string ans){
    if(s.length()==0){cout<<ans<<endl; return;}
    char ch=s[0];
    string ros=s.substr(1);
    allSubstr(ros,ans);
    allSubstr(ros,ans+ch);
}
int main(){
    string s;
    cout<<"Enter the string: ";
    cin>>s;
    string ans="";
    allSubstr(s,ans);
    return 0;
}