#include<iostream>
#include<string>
using namespace std;
void permutes(string s, string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    for(int i=0; i<s.length(); i++){
        char ch=s[0];
        string ros=s.substr(0,i)+s.substr(i+1);
        permutes(ros,ans+ch);
    }
}
int main(){
    string s, ans="";
    cout<<"Enter the string: ";
    cin>>s;

    permutes(s,ans);
    return 0;
}