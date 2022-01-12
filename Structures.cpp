 /**
 *******  *     *     * *    * * *
 *MFT10   *     *    *   *   *     *
 *******  *     *   * * * *  *     *
 *        *     *   *     *  *     *
 *        * * * *   *     *  * * *
 **/

#include <bits/stdc++.h>



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
                                    
                             ///***Structure***\\\


    ///use of struct
                        struct abc
                                    {

                                        int m=2;
                                        int d=20;
                                        int y=2020;
                                        }d,p;

                                        int main()
                                        {
                                                struct abc;
                                               // struct abc d;
                                                printf("%d/", d.m);
                                                printf("%d/", d.d);
                                                printf("%d", d.y);

                                    }

            ///typedef struct
                        typedef struct abc{

                                        int m;
                                        int d;
                                        int y;
                                        }date;

                                        int main()
                                        {

                                                date d;
                                                scanf("%d", &d.m);
                                                  scanf("%d", &d.d);
                                                    scanf("%d", &d.y);
                                                printf("%d/", d.m);
                                                printf("%d/", d.d);
                                                printf("%d", d.y);

                                        }


///Grade of 1 student

                                typedef struct {
                                                char n[50];
                                                int id;
                                                float m;
                                                char g;
                                        }student;

                                        char findgrade(student s)
                                        {
                                            char g;
                                            if(s.m >= 90) g = 'A';
                                                    else if(s.m >= 80) g = 'B';
                                                        else if(s.m >= 70) g = 'C';
                                                            else if(s.m >= 60) g = 'D';
                                                                else g = 'F';
                                                                return g;
                                        }

                                int main()
                                         {
                                            student s;
                                            printf("Enter Name: ");
                                            gets(s.n);
                                            printf("Enter ID: ");
                                            scanf("%d", &s.id);
                                            printf("Marks: ");
                                            scanf("%f", &s.m);
                                            s.g=findgrade(s);
                                            printf("%s %d %f %c", s.n,s.id, s.m, s.g);
                                        }

                                        
                                        ///Array structure:

///Grade of 5 students
                                typedef struct
                                            {
                                                char n[50];
                                                int id;
                                                float m;
                                                char g;
                                            }student;


                                char findgrade(student s)
                                        {
                                            char g;
                                            if(s.m >= 90) g = 'A';
                                                    else if(s.m >= 80) g = 'B';
                                                        else if(s.m >= 70) g = 'C';
                                                            else if(s.m >= 60) g = 'D';
                                                                else g = 'F';
                                                                return g;
                                        }

                                int main()

                                        {
                                            student s[5];
                                            int i;
                                            for(i=0;i<5;i++)
                                            {
                                             printf("Enter Name: ");
                                            getchar();
                                            gets(s[i].n);
                                            printf("Enter ID: ");
                                            scanf("%d", &s[i].id);
                                            printf("Marks: ");
                                            scanf("%f", &s[i].m);
                                            s[i].g=findgrade(s[i]);
                                            printf(" %d %f %c\n",s[i].id, s[i].m, s[i].g);
                                            }

                                        }


//problem 1 --> 
                                typedef struct abc
                                                {   char name[100],gender[2];
                                                    int age;
                                                    double annual_income;
                                                }movieStar;

                                        double highest_annual_income(int n, movieStar m[])
                                                {
                                                         int i;
                                                         double highest_income;
                                                         for(i=1;i<=n;i++)
                                                            {
                                                                if(highest_income<m[i].annual_income)
                                                                          {
                                                                              highest_income=m[i].annual_income;
                                                                        }

                                                            }
                                                                 return highest_income;
                                                  }
           



                                         int youngest_moviestar(movieStar m[],int n)
                                                                           {
                                                                                int i;
                                                                                int youngest_moviestar_age;
                                                                                 for(i=1;i<=n;i++)
                                                                                        {
                                                                                            if(youngest_moviestar_age>m[i].age)
                                                                                                 {
                                                                                                           youngest_moviestar_age=m[i].age;


                                                                                                     }
                                                                                        }
                                                                                            return youngest_moviestar_age;
                                                                             }



                                          int main()
                                                 {
                                                     movieStar m[1000];
                                                     int n;
                                                     int i;
                                                     printf("Enter the number of Movie Stars: ");
                                                     scanf("%d", &n);

                                                        for(i=1;i<=n;i++)
                                                             {
                                                                printf("Movie Star Name: %d\n", i);
                                                                printf("Please Enter Movie Star Name: ");
                                                                getchar();
                                                                gets(m[i].name);
                                                                printf("Please Enter %s's Age: ",m[i].name);
                                                                scanf("%d", &m[i].age);
                                                                printf("Please Enter %s's Annual Income: $",m[i].name);
                                                                scanf("%lf", &m[i].annual_income);
                                                                printf("Please Enter %s's Gender.\n",m[i].name);
                                                                getchar();
                                                                gets(m[i].gender);
                                                            }
                                                                printf("The Income of the Highest Annual Earning Movie Star: $ %0.3lf\n", highest_annual_income(n,m));
                                                                printf("The Age of the Youngest Movie Star in the Industry: %d years.\n", youngest_moviestar(m,n));




                                                 }

