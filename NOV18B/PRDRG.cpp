#include<iostream>
using namespace std;
int main()
{
    int T,N,i;
    int a[25];
    int b[25];
    a[0]=1;a[1]=1;
    b[0]=2;b[1]=4;
    for(i=2;i<25;i++)
    {
        a[i]=a[i-1]+(a[i-2]*2);
        b[i]=b[i-1]*2;
    }
    cin>>T;
    do
    {
        cin>>N;
        cout<<a[N-1]<<" "<<b[N-1]<<"\n";
        T--;
    }while(T>0);
    return 0;
}
