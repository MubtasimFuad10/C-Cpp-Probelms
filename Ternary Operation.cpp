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

                                        ///Ternary Operator:


                        ///**** condition ? expression1 : expression2


                //If the condition is true, expression1 is    evaluated; if it is false, expression2 is evaluated


        //conditional operator:
        int main()
        {
           int a;
           cin >> a;
           int abst;
           abst=a<0 ? a*=-1 : a;
          printf("%d", abst);

        }


                         ///Example of using ternary operation 

        //Finding max,min and second largest)
        int main()
        {
            int a, b, c, max,min;
            scanf("%d%d%d", &a, &b, &c);
            max=a>b ? a : b;
            max=(max>c) ? max : c;

            min=a<b ? a : b;
            min=(min<c) ? min : c;

            int s=(a+b+c)-max-min;

            printf("maximum: %d\n", max);
              printf("Second Largest: %d\n", s);
             printf("minimum: %d", min);



        }