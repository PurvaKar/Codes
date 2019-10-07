#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int Y,Z;
    int X=(rand()%3) +1;
    cout<<X<<endl;
    cout<<"    \t \t ";
    cin>>Y;
    if(X==1 && Y==2 || X==2 && Y==1)
        cout<<"3"<<endl;
    else if(X==3 && Y==2 || X==2 && Y==3)
        cout<<"1"<<endl;
    else
        cout<<"2"<<endl;
        return 0;

}
