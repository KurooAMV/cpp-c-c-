#include<iostream>
#include<string>
using namespace std;
string repitition(string s){
    if(s.length()==0){return "";}
    char ch=s[0];
    string ans=repitition(s.substr(1));
    if(ch==ans[0]){return ans;}
    return ch+ans;
}
int main(){
    string s;
    cout<<"Enter the string: ";
    cin>>s;
    
    string ans=repitition(s);
    cout<<"The string after duplication removal is: "<<ans<<" ";
    
    return 0;
}