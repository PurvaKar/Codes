#include<bits/stdc++.h>
#include<iostream>
#include <vector>
using namespace std;

int main()
{
    int N,Q,K,i,l,j,pl,M;
    cin>>N>>Q>>K;
    vector <int> A;

    for(i=0;i<N;i++)
        {
            cin>>M;
            A.push_back(M);
        }
    vector <int>::iterator it=A.begin();
    char S[Q];
    scanf("%s",S);
    for(i=0;i<Q;i++)
    {
        if(S[i]=='?')
        {
            l=0;pl=0;
            for(j=0;j<N;j++)
            {
                if(A[j]==1)
                {
                    l++;
                    if(l==K)
                    {
                        break;
                    }
                }

                else
                {
                    if(l>pl)
                        pl=l;
                    l=0;
                }
            }
            if(l>pl)
                pl=l;
            if(pl>K)
                cout<<K<<"\n";
            else
                cout<<pl<<"\n";
        }
        else if(S[i]=='!')
        {
            A.insert(it,A[N-1]);
            A.pop_back();
        }
    }
    return 0;
}
