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
    float a;
    scanf("%f", &a);
    float dis;
    if(a>=0 && a<=5000)
        dis=(a-0)*0.05;
    else if(a>5000 && a<=10000)
        dis=(5000*0.05)+(a-5000)*0.1;
    else if(a>10000)
        dis=(5000*0.05)+(5000*0.1)+(a-10000)*0.2;
    printf("Agora Discount: %0.2f/=", dis);
    return 0;
}

