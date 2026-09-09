#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter your character: ";
    cin>>ch;
    if (ch <= 65 &&ch <= 90)
    {
        cout<<"The character is a lowercase letter."<<endl;
    }
    else{
        cout<<"The character is not a UPPER case letter."<<endl;
    }

return 0;
    
}