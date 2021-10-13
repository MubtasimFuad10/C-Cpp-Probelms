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

                                        ///Switch-Case:



        ///a program using switch structure that will take an integer as input and will determine whether the number is odd or even.
      int main()
        {
            int n;
            cin >> n;
            switch(n%2)
            {
            case 0:
                printf("It is Even");
                break;


            case 1:
                printf("It is ODD");
                break;

            }
        }


        
        ///a program using switch structure that will take an integer as input and will determine whether the number is multiple of 3 or not


        int main()
        {
            int n;
            cin >> n;
            switch(n%3)
            {
            case 0:
                printf("It is Multiple of 3");
                break;
            case 1:
                printf("No it's not");
                break;

            case 2:
                printf("No it's not");
                break;

            }
        }






        int main()
        {
            int n;
            cin >> n;
            switch(n%3)
            {
            case 0:
                printf("It is Multiple of 3");
                break;
           default:  //jodi duita case ekoi e hoi tahole default: use kora jai.
                printf("No it's not");
                break;



            }
        }









       int main()
        {
            char ch;
            cin >> ch;
            switch(ch)
            {
            case 'a':
            case 'e':

            case 'i':

            case 'o':
            case 'u':
                printf("It is vowel");
                break;
                default: printf("It is consonant");
                            break;

            }
        }