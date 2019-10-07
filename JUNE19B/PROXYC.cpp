#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
int main()
{
    int T,D,i,j,c;
    double proxy,d;
    cin>>T;
    while(T>0)
    {
        cin>>D;
        char S[D];
        cin>>S;
        c=0;d=0.0;
        for(i=0;i<D;i++)
        {
            /*S[i]=toupper(S[i]);*/
            if(S[i]=='P')
                c++;
        }
        proxy = ceil(.75 * D) - c;
        if(proxy<0)
            proxy =0;
        for(i=2;i<D-2;i++)
        {
            if(S[i]=='A' && (S[i-1]=='P' || S[i-2]=='P') && (S[i+1]=='P' || S[i+2]=='P'))
                d++;
        }
        if(d>=proxy)
            cout<<proxy<<endl;
        else
            cout<<"-1"<<endl;
        T--;
    }
    return 0;
}
