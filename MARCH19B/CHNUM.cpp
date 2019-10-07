#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    for(int i=0; i<T; i++)
    {
        int N;
        cin>>N;
        int arr[100000];
        int lar;
        int small;
        lar = 0;
        small = 0;
        for(int j=0; j<N; j++)
        {
            cin>>arr[j];
        }
        for(int j=0; j<N; j++)
        {
            if(arr[j] >= 0)
            {
                lar = lar+1;
            }
            else
            {
                small = small+1;
            }
        }
        if(small>=1)
        {
            cout<<lar<<" "<<small<<endl;
        }
        if(small==0)
        {
            cout<<lar<<" "<<lar<<endl;
        }
    }
}
