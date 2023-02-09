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
        int check[1000] = {0};
        // cout << check[10] <<endl;
        int m, sum;
        cin >> m >> sum;

        int high = 0 ;

        for (int i = 1; i <= m; i++)
        {
            int x;
            cin >> x;

            high = max(high,x) ;

            check[x] = 1;
        }

        int i = 1;

        while (1)
        {
            if (check[i] == 0)
            {
                if (sum >= i)
                {
                    sum = sum - i;
                    check[i] = 1;
                    
                    if(sum == 0) break;
                }
                else
                    break;

                i++;
            }

            else
            {
                i++;
                continue;
            }
        }

        if (sum > 0)
            cout << "NO" << endl;
        else
        {
            int status = 1;

            for (int j = 1; j <= max(high , i-1); j++)
            {
                //cout << check[j] << endl;
                if(check[j] != 1) 
                {
                    status = 0 ;
                    break;
                }
            }

            if(status) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
}

//* char a = 'A';   int num = (int) a;
//* char a = '2';   int num = a-48;
//* char a = '8';   int num = a - '0' ;  (  s[i]-'0' == 8 )
