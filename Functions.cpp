 /**
 *******  *     *     * *    * * *
 *MFT10   *     *    *   *   *     *
 *******  *     *   * * * *  *     *
 *        *     *   *     *  *     *
 *        * * * *   *     *  * * *
 **/

#include <bits/stdc++.h>

#include <windows.h>

#define lol long long int           //(positive,zero and negative)
#define ulol unsigned long long int //(positive and zero)
#define sonic ios_base::sync_with_stdio(false);cin.tie(NULL)
#define sf scanf
#define pf printf
#define PI acos(-1)

#define rep(i, k, n) for (long long int i = k; i < n; i++)
#define rep2(i, l, n) for (long long int i = l; i <= n; i++)

#define max(a, b) ((a) > (b) ? (a) : (b))
#define min(a, b) ((a) < (b) ? (a) : (b))
#define end "\n"
using namespace std;                           



                                     ///***FUNCTIONS***\\\


///Write down a function that will take a year as a parameter and will return number of days in that year. In your main function take user input for year and use this function, to print two things:

/// Qs. --> (1) number of days in the year and (2) whether the year is a leap year or not

                     int numberofdays(int year)
                             {
                                 int days;
                                 if(year%400==0 || year%4==0 && year%100!=0)
                                 {
                                     days=366;
                                 }
                                 else{days=365;}
                                 return days;
                             }
                    int main()
                             {
                                 int n;
                                 scanf("%d", &n);
                                 int L=numberofdays(n);
                                 printf("Number of days: %d\n", L);
                                 if(L==366)printf("LEAP YEAR");
                                 else printf("Not a LEAP YEAR");
                             }



///Prime or not
                int PrimeNumber(int n)
                        {
                            int i,cn=0;
                            for(i=1;i<=n;i++)
                            {
                                if(n%i==0)
                                {
                                    cn++;
                                }
                            }
                            if(cn==2) return 1;
                            else return 0;

                        }
                int main()
                        {
                           int a;
                           scanf("%d", &a);
                           int prime=PrimeNumber(a);
                           if(prime==1) printf("YES,It's a prime number.");
                           else printf("NO,It's not a prime number.");
                        }

//Another Approach--> 
                int PrimeNumber(int n)
                        {
                            bool prime=true;
                            int i;
                            for(i=2;i<=sqrt(n);i++)
                            {
                                if(n%i==0)
                                {
                                    prime=false;
                                    break;
                                }
                            }
                            return prime;
                        }
                int main()
                        {
                            bool prime;
                            int a, b, n;
                            scanf("%d", &b);
                            for(n=2;n<=b;n++)
                            {
                                prime=PrimeNumber(n);
                                if(prime==true)
                                    printf("\t%d", n);
                            }
                        }
//Again Another Approach-->
                int pn(int n)
                     {
                         int a,i;
                         int cn;
                         if(a%n==0)
                         {
                             cn=0;
                             for(i=0;i<n;i++)
                             {
                                 if(n%i==0)
                                 {
                                     cn++;
                                 }
                             }
                         }
                         return cn;
                     }
                int main()
                     {
                         int n,a;
                         cin >> a;
                         int p=pn(a);
                         if(p==2)
                            printf("%d", n);
                     }

///Write down a function that will take a set of numbers as a parameter and will find and return maximum value within the set.

                int findmax(int arr[], int n)
                      {
                          int i,max;
                           max=arr[0];
                          for( i=1;i<n;i++)
                          {
                              if(max<arr[i])
                                max=arr[i];
                          }
                          return max;
                      }
                int main()
                      {
                         int a[] = {34, 21, 65, 78, 90};
                        int b[] = {4, 2, 8};
                        int r;
                        r=findmax(a,5);
                        printf("%d\n", r);
                        r=findmax(b,3);
                        printf("%d\n", r);

                      }

 ///Write down a program that will print all prime factors of a number N given as input. Modularize your program by implementing following three functions:
                int isfactor(int n, int x)
                     {
                         return (n%x==0);
                     }

                     int isprime(int n)
                     {
                         int i;
                         for(i=2;i<n;i++)
                         {
                             if(n%i==0)
                             return 0;
                            return 1;
                         }
                     }
                     int howmanytimes(int n, int x)
                     {
                         int cn=0;
                         while(n%x==0)
                         {
                             cn++;
                             n=n/x;
                         }
                         return cn;
                     }
                     int main()
                     {
                         int N,i;
                         scanf("%d", &N);
                         for(i=2;i<=sqrt(N);i++)
                         {
                             if(isfactor(N,i) && isprime(i))
                             {
                                 printf("%d(%d)", i, howmanytimes(N,i));

                             }
                         }
                     }


//Another Approach--> 
                int isfactor(int n, int x)
                     {
                         return (n%x==0);
                     }

                     int isprime(int n)
                     {
                         int i;
                         for(i=2;i<n;i++)
                         {
                             if(n%i==0)
                             return 0;
                            return 1;
                         }
                     }
                int howmanytimes(int n, int x)
                     {
                         int cn=0;
                         while(n%x==0)
                         {
                             cn++;
                             n=n/x;
                         }
                         return cn;
                     }
                int main()
                     {
                         int N,i,cn=0;
                         scanf("%d", &N);
                         for(i=2;i<=sqrt(N);i++)
                         {
                             if(isfactor(N,i) && isprime(i))
                             {
                                 printf("%d(%d)", i, howmanytimes(N,i),cn++);

                             }
                         }
                         if(cn==0) printf("%d(%d)", N,1);


                     }

                     
