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

const ll base = 301;

ll n, k;
ll arr[base][base];
ll banana[base][base];

ll trackBanana(ll i, ll j)
{
    if (arr[i][j] == 0)
        return 0;
    if (i == k - 1)
        return arr[i][j];

    if (banana[i][j] != -1)
        return banana[i][j];

    ll r1 = 0, r2 = 0;
    r1 = arr[i][j] + trackBanana(i + 1, j);     
    r2 = arr[i][j] + trackBanana(i + 1, j + 1);

    banana[i][j] = max(r1, r2); 
    return banana[i][j];        
}

int main()
{
    fast;

    ll t;
    cin >> t;

    for (ll p = 1; p <= t; p++)
    {

        // initialization
        memset(banana, -1, sizeof(banana));
        memset(arr, 0, sizeof(arr));

        scanf("%lld", &n);

        k = 2 * n - 1;

        for (ll i = 0; i < n; i++)       
            for (ll j = 0; j <= i; j++) 
                scanf("%lld", &arr[i][j]); 

        ll l = 1;
        for (ll i = n; i < k; i++)      
        {                                
            for (ll j = l; j < n; j++)   
                scanf("%lld", &arr[i][j]); 
            l++;                        
        }                                

        printf("Case %lld: %lld\n", p, trackBanana(0, 0));
    }

    return 0;
}