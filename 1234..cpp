#include <iostream>

using namespace std;

int fnon(int n)
{
    int x;
    if (n>2)
    {
        x=n+1;  
        return x;   
    }
    else
    {
        
        return   0;
    }
     
}


int main()
{
    int x;
    while(cin>>x)
    {
        cout<<fnon(x)+3;
    }
    return 0;
    
}