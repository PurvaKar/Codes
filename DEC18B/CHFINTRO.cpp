#include<iostream>
int main()
{
    int N,r,R;
    cin>>N>>r;
    do
    {
        cin>>R;
        if(R>=r)
            cout<<"Good boi"<<endl;
        else
            cout<<"Bad boi"<<endl;
        N--;
    }while(N>0);
    return 0;
}
