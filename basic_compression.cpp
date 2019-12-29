#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int c=0;
    for(int i=0;s[i]!='\0';i++){
        if(s[i]!=s[i+1]){
            cout<<s[i]<<c+1;
           c=0;
        }else{
            c++;
        }
    }
}
