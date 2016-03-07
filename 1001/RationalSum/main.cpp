#include <iostream>
#include <cstdio>
using namespace std;

typedef long long int ll;

ll gcd(ll x,ll y)
{
    if (y == 0) return x;
    else return gcd(y, x%y);
}

ll  lcm(ll x, ll y)
{
    return x / gcd(x, y) *y;
}

int main()
{
    int n;
    ll a[100],b[100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        scanf("%lld/%lld", &a[i], &b[i]);
    }
    ll lcmofdeno = 1;
    for(int i = 0; i < n; i++)
    {
        lcmofdeno = lcm(lcmofdeno,b[i]);
    }
    ll nume = 0;
    for(int i =0; i < n; i++)
    {
        nume = nume + a[i] * (lcmofdeno / b[i]);
    }

    ll pre = nume / lcmofdeno;
    nume = nume - pre * lcmofdeno;
    ll temp = gcd(nume, lcmofdeno);
    nume = nume / temp;
    lcmofdeno = lcmofdeno / temp;

    if(lcmofdeno < 0)
    {
        lcmofdeno = -lcmofdeno;
        nume = -nume;
    }
    if (pre == 0 && nume == 0)
        printf("0\n");
    else if (pre != 0 && nume == 0)
        printf("%lld\n", pre);
    else if (pre == 0 && nume != 0)
        printf("%lld/%lld\n", nume, lcmofdeno);
    else
        printf("%lld %lld/%lld\n", pre, nume, lcmofdeno);


    return 0;
}
