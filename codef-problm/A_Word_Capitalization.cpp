#include<iostream>
using namespace std;

int main(){
    string str;
    cin>>str;
    if(int(str[0])>=97 && str[0]<=122)
        str[0]=(char)((int)str[0]-32);
    cout<<str;
    return 0;
}