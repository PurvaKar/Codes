#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    int T,N,M,i,j,k,m,n;
    cin>>T;
    do
    {
        cin>>N;
        vector <int> A[N+1];
        for(i=1;i<=N;i++)
        {
            cin>>M;
            A[M].push_back(i);
        }
        n=0;
        for(i=1;i<=N;i++)
        {
                if(A[i].size()>1)
                {
                    for(j=0;j<A[i].size();j++)
                    {
                        m=A[i][j];
                        if(A[m].size()!=0)
                        {
                            n++;
                        }
                    }
                    if(n>1)
                    {
                        cout<<"Truly Happy \n";
                        break;
                    }
                    else
                        n=0;
                }

        }
        if(n==0)
            cout<<"Poor Chef \n";
        T--;
    }while(T>0);
    return 0;
}
