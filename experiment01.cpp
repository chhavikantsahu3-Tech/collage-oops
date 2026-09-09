#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter your number:";
    cin>>a;
    cout<<"Enter your number:";
    cin>>b;
    cout<<"Enter your number:";
    cin>>c;


    if (a>b&&a>c)
    {
      cout<<"A is greatest";
    }
    else if (b>a&&b>c)
    {
        cout<<"B is the greatest";
    }
    else{
        cout<<"C is the greatest";
    }
    
    

    return 0;
}