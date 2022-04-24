#include<iostream>
using namespace std;

int main()
{
    int a,b,c,d,e,largest;
    cin>>a>>b>>c>>d>>e;
    if(a>b)
        largest=a;
    else if(b>c)
        largest=b;
    else if(c>d)
        largest=c;
    else if(d>e)
        largest=d;
    else
        largest=e;
    cout<<"Largest is"<<largest<<endl;
    return 0;
}

//It took nearly a compilation time of 3sec
