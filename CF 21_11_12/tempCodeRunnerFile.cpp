//        ** Sumonta Saha Mridul **                                    SWE - SUST
/*

 *        ######    ##     ##  ##     ##   #######   ##    ##   ########      ###
 !       ##    ##   ##     ##  ###   ###  ##     ##  ###   ##      ##        ## ##
 ?       ##         ##     ##  #### ####  ##     ##  ####  ##      ##       ##   ##
 *        ######    ##     ##  ## ### ##  ##     ##  ## ## ##      ##      ##     ##
 !             ##   ##     ##  ##     ##  ##     ##  ##  ####      ##      #########
 ?       ##    ##   ##     ##  ##     ##  ##     ##  ##   ###      ##      ##     ##
 *        ######     #######   ##     ##   #######   ##    ##      ##      ##     ##

*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define sp " "
#define enter cout << endl;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

int main()
{
    fast;

    int t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;

        ll highest = 0;
        vector<ll> arrs;

        set<ll> ar;

        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;

            arrs.push_back(x);

            ar.insert(x);
        }

        ll p = ar.size();

        ll arr[p];
        ll j = 0;

        for (auto it : ar)
        {
            arr[j] = it;
            j++;
        }

        ll a = arr[p - 1];
        ll b;
        if (p > 1)
            b = arr[p - 2];
        else
            b = a;

        // cout << a << sp << b << endl;

        for (auto it : arrs)
        {
            if (it != a)
                cout << it - a;
            
            else cout << it - b  ;

            cout << sp ;
        }

        cout << endl;
    }
}

//* char a = 'A';   int num = (int) a;
//* char a = '2';   int num = a-48;
//* char a = '8';   int num = a - '0' ;  (  s[i]-'0' == 8 )
