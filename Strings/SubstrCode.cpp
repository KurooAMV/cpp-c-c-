#include<iostream>
using namespace std;
void substrCode(string s, string ans){
    if(s.length()==0){cout<<ans<<endl;return;}
    char ch=s[0];
    int code=ch;
    string ros=s.substr(1);
    substrCode(ros,ans);
    substrCode(ros, ans+ch);
    substrCode(ros, ans+to_string(code));
}

int main(){
    string s;
    string ans="";
    cout<<"Enter the string: ";
    cin>>s;

    substrCode(s,ans);
    return 0;
}