/**
     *******  *     *     * *    * * *
     *MFT10   *     *    *   *   *     *
     *******  *     *   * * * *  *     *
     *        *     *   *     *  *     *
     *        * * * *   *     *  * * *
**/


#define     lol             long long int //(positive,zero and negative)
#define     ulol            unsigned long long int //(positive and zero)
#define     sonic           ios_base::sync_with_stdio(false);cin.tie(NULL)
#define     sf              scanf
#define     pf              printf
#define     PI              acos(-1)
#define     rep(i,k,n)      for(long long int i=k;i<n;i++)
#define     rep2(i,l,n)      for(long long int i=l;i<=n;i++)
#define     max(a,b)        ((a) > (b) ? (a) : (b))
#define     min(a,b)        ((a) < (b) ? (a) : (b))
#define     end             "\n"



#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
  if(a%2==0 || a%5==0) cout << "YES" << endl;
  else cout << "NO" << endl;

}


///*** Using Logical NOT (!) operator
int main()
{
    float marks;
    cin >> marks;
    if(!(marks<60)) //important
    {
        printf("Passed\n");
    }
    else
    {
        printf("Failed");
    }
}
