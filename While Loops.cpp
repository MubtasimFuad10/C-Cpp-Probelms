
  /**
     *******  *     *     * *    * * *
     *MFT10   *     *    *   *   *     *
     *******  *     *   * * * *  *     *
     *        *     *   *     *  *     *
     *        * * * *   *     *  * * *
**/

#include<bits/stdc++.h>

#include<windows.h>


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
using namespace std;



                            ///***LOOPS***\\\


                            //While Loops:\\




///Example program that continuously asks for positive number as input:

               int main()
                         {
                             int n;
                             printf("Please enter a positive number:\n");
                             cin >> n;
                             while(n<0)
                             {
                                   printf("Please enter a positive number,Be POsitive\n");
                                   cin >> n;
                             }
                             return 0;
                         }


///Print "The sky is the limit!" 10 times:

            int main()
                {
                    int n;
                    cin >> n;
                    int cn=1;
                    while(cn<=n)
                    {
                        printf("The sky is the  limit!\n");
                       cn++;

                    }
                }


            int main()
                {
                    int i;
                        for(i=0;i<10;i++)
                        pf("The sky is the limit!\n", i);
                }

///Print first n natural number:(upward)
            int main()
                 {
                     int n;
                     cin >> n;
                     int cn=1;
                     while(cn<=n)
                     {
                         printf("%d\n", cn);
                         cn++;
                     }
                 }
///Print first n natural number:(Downward)
                int main()
                    {
                        int n;
                        cin >> n;
                        int cn=n;
                        while(cn>=0)
                        {
                            printf("%d\n", cn);
                            cn--;
                        }
                    }
///Print Odd numbers up to n.
                int main()
                    {
                        int n;
                        cin >> n;
                        int cn=1;
                        while(cn<=n)
                        {
                            printf("%d\n", cn);
                            cn+=2;
                        }

                    }
///Print Even numbers up to n.

                int main()
                    {
                        int n;
                        cin >> n;
                        int cn=2;
                        while(cn<=n)
                        {
                            printf("%d\n", cn);
                            cn+=2;
                        }

                    }
/// Print summation of first n numbers.
                int main()
                   {
                       int n;
                       cin >> n;
                       int cn=1;
                       int sum=0;
                       while(cn<=n)
                       {
                           sum+=cn;
                            cn++;
                       }
                         printf("%d", sum);
                         return 0;
                   }

///Print summation of all odd numbers up to n.
                   int main()
                        {
                            int n;
                            scanf("%d", &n);
                            int cn=1;
                            int sum=0;
                            while(cn<=n)
                            {
                                sum += cn;
                                cn += 2;
                            }
                            printf("%d", sum);
                            return 0;
                        }


///Print summation of all Even numbers up to n.

                    int main()
                        {
                            int n;
                            scanf("%d", &n);
                            int cn=2;
                            int sum=0;
                            while(cn<=n)
                            {
                                sum += cn;
                                cn += 2;
                            }
                            printf("%d", sum);
                            return 0;
                        }
///****print second largest of a series of natural numbers(at least two) given as input(IMPORTANT)
                            

                    int main() 
                        {
                            int a, b, c;
                            scanf("%d %d", &a, &b);
                            int max,smax;
                            if(a>b) {max=a;smax=b;}
                            else {max=b;smax=a;}
                            while(1)
                               {
                                   scanf("%d", &c);
                                   if(c==0) break;
                                   if(c>max){smax=max;max=c;}
                                   else if(c>smax) {smax=c;}

                                    printf("Largest: %d and Second Largest: %d\n", max,smax);
                                 }

                            return 0;
                            }
 




