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
            int a, b, c, d,max,min;int smax;int smin;
            scanf("%d %d %d %d", &a, &b, &c, &d);
            cin >> a >> b >> c >> d;
            int max1 =  a>b ? a : b;
            int max2= c>d ? c : d;
            max= max1>max2 ? max1 : max2;

            smax = max1<max2 ? max1 : max2;



            int min1 = a<b ? a : b;
            int min2 = c<d ? c : d;
            min=min1<min2 ? min1 : min2;

            smin=min1>min2 ? min1 : min2;



            int sl = smax>smin ? smax : smin;
            int tl = smax<smin ? smax : smin;



            printf("maximum: %d\n", max);
             printf("Second Largest: %d\n", sl);
              printf("Third Largest: %d\n", tl);
             printf("minimum: %d", min);





        }
