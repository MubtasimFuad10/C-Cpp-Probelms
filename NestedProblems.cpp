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
#define sonic                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define sf scanf
#define pf printf
#define PI acos(-1)

#define rep(i, k, n) for (long long int i = k; i < n; i++)
#define rep2(i, l, n) for (long long int i = l; i <= n; i++)

#define max(a, b) ((a) > (b) ? (a) : (b))
#define min(a, b) ((a) < (b) ? (a) : (b))
#define end "\n"
using namespace std;

                                         ///*** NESTED PROBLEMS****\\\


///*****Write a program that prints all prime numbers up to x. The integer x will be input to your program.
            int PN(int);
                  int PN(int n)
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
                      int n,en;
                      printf("Enter the Upper Limit: ");
                      scanf("%d", &en);
                      for(n=2;n<=en;n++)
                      {
                          prime=PN(n);
                          if(prime==true)
                          {
                              printf("\t%d", n);
                          }
                      }
                      return 0;
                  }

//Method 2:(sir)
            int main()
                  {
                      int i, n, cn,x,y;
                      scanf("%d%d", &x,&y);
                      for(n=x;n<=y;n++)
                      {
                          cn=0;
                          for(i=1;i<=n;i++)
                          {
                              if(n%i==0)
                              {
                                  cn++;
                              }
                          }
                          if(cn==2)
                            printf("\t%d", n);
                      }
                  }

///Write down a program that will take an integer x as input and will count and print the number of prime numbers up to x.
            int main()
                  {
                      int i, n, cn,x,y,c2=0;
                      scanf("%d%d", &x,&y);
                      for(n=x;n<=y;n++)
                      {
                          cn=0;
                          for(i=1;i<=n;i++)
                          {
                              if(n%i==0)
                              {
                                  cn++;
                              }
                          }
                          if(cn==2)
                            {
                                printf("\t%d", n);
                            c2++;
                            }
                      }
                      printf("\nTotal: %d", c2);
                  }
///****Write a program that prints all perfect numbers up to x. The integer x will be input to your program.
            int main()
                  {
                      int i, n, cn,x,y,c2=0;
                      scanf("%d%d", &x,&y);
                      for(n=x;n<=y;n++)
                      {
                          cn=0;
                          for(i=1;i<n;i++)
                          {
                              if(n%i==0)
                              {
                                  cn=cn+i;
                              }
                          }
                          if(cn==n)
                            {
                                printf("%d ", n);
                            c2++;
                            }
                      }
                      printf("\nTotal: %d", c2);
                  }

///Write a program that prints all prime factors of a number x given as input.

            int main()
                  {
                      int i,n,x,cn;
                      scanf("%d", &x);
                      for(n=1;n<=x;n++)
                      {
                          if(x%n==0)
                          {
                              cn=0;
                              for(i=1;i<=n;i++)

                                    if(n%i==0) cn++;

                            if(cn==2) printf("%d ", n);
                          }


                      }
                      return 0;
                  }