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
    if(a>=90 && a<= 100)
        printf("A+");
    else if(a>=80 && a<= 90)
        printf("A");
    else if(a>=70 && a<=80)
        printf("A-");
    else if(a>=60 && a<=70)
        printf("B+");
    else if(a>=50 && a<=60)
        printf("C");
    else if(a>=40 && a<=50)
        printf("D");
    else
        printf("F");
    return 0;

}
    //better approach
int main()
{
    int a;
    cin >> a;
    char g;
    if(a>=90 )
      
        g='A';
    else if(a>=80)
      
       g='B';
    else if(a>=70)
     
       g='C';
    else if(a>=60)
     
      g='D';
      else
        g='F';

      printf("Your grade is: %c", g);
    return 0;

}
