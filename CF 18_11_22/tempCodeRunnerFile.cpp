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
    
    while(t--)
    {
        string s ;
        cin >> s ;

        bool status = 1 ;

        if(s.size() == 1 ) status = 0 ;
        
        for(int i = 1; i < s.size(); i++)
        {
            if(s[i] == 's' && (s[i+1] == 'Y' || s[i-1] == 'e')) continue;
            else if(s[i] == 'e' && (s[i+1] == 's' || s[i-1] == 'Y')) continue;
            else if(s[i] == 'Y' && (s[i+1] == 'e' || s[i-1] == 's')) continue;
            else 
            {
                status = 0 ;
                //cout << i << endl;
                break;
            }
            
        }

        if( status == 0 ) cout << "No" << endl;
        else cout << "Yes" << endl;
    
    }
    
}

//* char a = 'A';   int num = (int) a;
//* char a = '2';   int num = a-48;
//* char a = '8';   int num = a - '0' ;  (  s[i]-'0' == 8 )
