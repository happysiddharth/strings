#include<iostream>
#include<ctype.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int hashmap[s.length()]={};
    for(char a:s){
        hashmap[a-'a']++;
    }
    int flag=0;
    for(int a:hashmap){
        if(a>1){
            flag=1;
            break;
        }
    }
    if(flag==0){
       cout<<"String consists of all unique characters";

    }else{
       cout<<"String don't consists of unique characters";
    }

}
