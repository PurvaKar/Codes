#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{
	int T;
	cin>>T;
	for(int j = 0; j<T; j++)
	{
        char N[20];
        char D;
        cin>>N>>D;
        int len;
        len = strlen(N);
        int p;
        p = 0;
        char c;
        string str="";
        while(p!=len)
        {
            c=N[p];
            for(int i=p+1; i<len; i++)
                if(c>N[i])
                {
                    c = N[i];
                    p = i;
                }
                if(c<D)
                {
                    str = str+c;
                    p = p+1;
                }
                else
                    break;
        }
        int len2;
        len2=str.length();
        cout<<str;
        for(int k=0; k<(len-len2); k++)
        {
            cout<<D;
        }
        cout<<"\n";
	}

}
