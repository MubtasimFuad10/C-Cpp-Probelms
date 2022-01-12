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


                              ///**FOR LOOP STATEMENT**\\\


///Program to calculate the sum of maximum of 10 numbers.If negative number is entered, loop terminates,sum is displayed
                int main()
                    {
                        int i;
                        double num ,sum=0;
                        for(i=1;i<=10;i++)
                        {
                           scanf("%lf", &num);
                            if(num<0)
                                {
                                    break;
                                }
                                sum+=num;

                        }
                        printf("%0.2lf", sum);

                    }

///Program to calculate the sum of maximum of 10 numbers.If negative number is entered,it is ignored
                int main()
                    {
                        int i;
                        double num ,sum=0;
                        for(i=1;i<=10;i++)
                        {
                           scanf("%lf", &num);
                            if(num<0)
                                {
                                   continue;
                                }
                                sum+=num;

                        }
                        printf("%0.2lf", sum);

                    }


///Write down a program to find the summation of the following series:
                int main()
                    {
                        int i,n,s=0,t;
                        scanf("%d", &n);
                        for(i=1;i<=n;i++)
                        {
                            t=i;
                            s=s+t;
                        }
                        printf("sum is: %d", s);

                    }
///Write down a program to find the summation of the following series:


        //Qs-1 -->  1^2 - 2^2 + 3^2 - 4^2 + ... ... + n
                int main()
                    {
                        int i, n,t,sum=0;;
                        scanf("%d", &n);
                        for(i=1;i<=n;i++)
                        {
                            if(i%2==0)
                            {
                                t=-pow(i,2);
                            }
                            else
                            {
                                t=pow(i,2);
                            }
                           sum+=t;
                        }
                        printf("%d", sum);
                        return 0;
                    }

        ///Qs-2 -->  sin(x)= x -(x^3/3!)+(x^5/5!).....

                     int main()
                            {
                                int i, n;
                                float x, t, r, sum=0;
                                scanf("%f %d", &x, &n);
                                x=(3.1416*x)/180;//1degree = PI/180 rad;
                                //x=(22*x)/(180*7);
                                sum=t=x;
                                for(i=1;i<n;i++)
                                {
                                    r=-x*x/(2*i*(2*i+1));
                                    t=r*t;
                                    sum += t;
                                }
                                printf("%f", sum);

                            }

///Print factorial of n:
        
        //N!=5!=1*2*3*4*5

                     int main()
                        {
                            int i, n, cn=1;
                            scanf("%d", &n);
                            for(i=1;i<=n;i++)
                            {
                                cn=cn*i;
                            }
                            printf("%d", cn);
                        }


///Print x^n:
                    int main()
                        {
                            int i, n, cn=1,x;
                            scanf("%d%d",&x ,&n);
                            for(i=1;i<=n;i++)
                            {
                                cn=cn*x;
                            }
                            printf("%d", cn);
                        }

///Show all factors of a number n
                    int main()
                        {
                            int i, n;
                            scanf("%d", &n);
                            for(i=1;i<=n;i++)
                            {
                                if(n%i==0)
                                {
                                    printf("%d\n", i);
                                }
                            }
                        }

///Show smallest factors of a number n(other than 1)


                    int main()
                        {
                            int i, n;
                            scanf("%d", &n);
                            for(i=2;i<=n;i++)
                            {
                                if(n%i==0)
                                {
                                    printf("%d\n", i);
                                    break;
                                }
                            }
                        }

///(important) Show largest factor of a number n (other than n)

                //Number = largest factor * smallest factor
                //largest factor = Number/smallest factor

                    int main()
                        {
                            int i, n;
                            scanf("%d", &n);
                            for(i=2;i<=n;i++)
                            {
                                if(n%i==0)
                                {
                                    printf("%d\n", n/i);
                                    break;
                                }
                            }
                        }
///Show how many factors of a number n has
                    int main()
                        {
                            int i, n,cn=0;
                            scanf("%d", &n);
                            for(i=1;i<=n;i++)
                            {
                                if(n%i==0)
                                {
                                    cn++;
                                }

                            }
                            printf("Number of factors: %d", cn);
                        }
///***determine whether a number n is prime or not(optimize version)
                    int main()
                       {
                           int i, n, cn=0;
                           scanf("%d", &n);
                           for(i=1;i<=n;i++)
                           {
                               if(n%i==0)
                               {
                                   cn++;
                               }
                           }
                           if(cn==2) printf("Prime Number.");
                           else printf("Not a Prime Number.");
                           return 0;
                       }

///***determine whether a number n is prime or not(using sqrt)
                    int main()
                       {
                           int i, n, cn=0;
                           scanf("%d", &n);
                           for(i=1;i<=sqrt(n);i++)
                           {
                               if(n%i==0)
                               {
                                   cn++;
                               }
                           }
                           if(cn==1 && n!=1) printf("Prime Number.");
                           else printf("Not a Prime Number.");
                           return 0;
                       }

///***determine whether a number n is perfect or not
                int main()
                    {
                        int i, n, cn=0;
                        scanf("%d", &n);
                        for(i=1;i<n;i++)
                        {
                            if(n%i==0)
                            {
                                cn+=i;
                            }
                        }

                      if(cn==n) printf("Perfect Number.");
                       else printf("Not a Perfect Number.");
                    }



///***GCD of two numbers(Normal way)
                int main()
                    {
                        int i, a,b, min, gcd=1;
                        scanf("%d%d", &a, &b);
                        if(a==0 || b==0) gcd=a+b;
                        else
                        {
                            min=a<b ? a : b;
                            for(i=1;i<=min;i++)
                            {
                                if(a%i==0 && b%i==0)
                                {
                                    gcd=i;
                                }
                            }
                        }
                        printf("GCD: %d", gcd);
                    }

///***GCD of two numbers(Efficient way)
                int main()
                      {
                          int a, b,c;
                          scanf("%d%d", &a,&b);
                          while(b!=0)
                          {
                              c=a%b;
                              a=b;
                              b=c;
                          }
                          printf("GCD: %d", a);
                          return 0;
                      }

                       
                       
                       
                        ///FIBONACCI_SERIES:\\\

///****Write down a program that will print n-th Fibonacci number where n will be input to your program
                    int main()
                        {
                            int p1,p2,nxt;
                            int i, n;
                            scanf("%d", &n);
                            p1=1;
                            p2=1;
                            for(i=3;i<=n;i++)
                                {
                                     nxt=p1+p2;
                                     p1=p2;
                                     p2=nxt;

                                }
                                if(n<=2) printf("%d", p1);
                                else printf("%d", nxt);

                        }