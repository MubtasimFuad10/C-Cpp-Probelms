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
            int a, b, c, max,min;
            cin >> a >> b >> c;
            max=a>b ? a : b;
            max=(max>c) ? max : c;

            min=a<b ? a : b;
            min=(min<c) ? min : c;

            int s=(a+b+c)-max-min;

            printf("maximum: %d\n", max);
              printf("Second Largest: %d\n", s);
             printf("minimum: %d", min);



        }
