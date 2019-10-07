#include <iostream>
#define MOD 1000000007
using namespace std;
long long power(long long b, long long p)
{
    long long res = 1;
    while(p > 0) {

        if(p % 2 == 1) {
            res = (res*b) % MOD;
        }
        b = (b * b) % MOD;
        p = p / 2;
    }
    return res;
}
int main()
{
    unsigned long long int T,K,cnt;
    cin>>T;
    while(T>0)
    {
        cin>>K;
        cnt = power(2,K-1);
        cout<<(cnt*10)%MOD<<endl;
        T--;
    }
    return 0;
}
