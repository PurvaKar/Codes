#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int T,N,K,i,counter;
    float diff;
    cin>>T;
    do
    {
        cin>>N>>K;
        int H[N+1];
        H[0]=0;
        counter=0;
        for(i=1;i<=N;i++)
            cin>>H[i];
        for(i=0;i<N;i++)
        {
            diff=H[i+1]-H[i];
            if(diff>K)
                counter=counter+ceil(diff/K)-1;
        }
        cout<<counter<<endl;
        T--;
    }while(T>0);
    return 0;
}
