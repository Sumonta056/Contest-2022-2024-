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

        vector<ll> arrs;
        vector<ll> arr;
        set<ll> dis ;

        ll large = 0;

        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;

            arrs.push_back(x);
            arr.push_back(x);
            dis.insert(x) ;

            large = max(large, x);
        }

        sort(arr.begin(), arr.end());

        ll secondlarge = 0 ;

        for(ll  i = n - 1 ; i >= 0 ; i--)
        {
            if( arr[i] == large) continue;
            else
            {
                secondlarge = arr[i];
                break;
            }
        }

        if( dis.size() == 1 ) secondlarge = large ;

        ll count = true ;

        if ( arr[n-1] == arr[n-2]) count = false;



        for (ll j = 0 ; j < n ; j++)
        {
            if (arrs[j] != large)
                cout << (ll)(arrs[j] - large);

            else
            {
                if ( !count ) cout << (ll)(arrs[j] - large);
                else cout << (ll)(arrs[j] - secondlarge);
            }
                

            cout << sp;
        }

        cout << endl;
    }
}

//* char a = 'A';   int num = (int) a;
//* char a = '2';   int num = a-48;
//* char a = '8';   int num = a - '0' ;  (  s[i]-'0' == 8 )
