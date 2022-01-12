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

                                ///***ARRAY***\\\



///Take N students marks as input and store them in an array. Find average mark. N will also be input:

                    int main()
                               {
                                   int i, n;
                                   scanf("%d", &n);
                                   float m[n],sum=0,avg;
                                   for(i=0;i<n;i++)
                                   {
                                       printf("Enter Marks: ");
                                       scanf("%f", &m[i]);
                                       sum+=m[i];

                                   }
                                   avg=sum/n;
                                   printf("%0.2f", avg);




                               }

 ///Take N numbers as input and store them in an array. Print all odd numbers in the array:

                int main()
                            {
                                int n;
                                scanf("%d", &n);
                                int i;
                                int arr[n];
                                for(i=0;i<n;i++)
                                {
                                    scanf("%d", &arr[i]);
                                }
                                printf("ODD Number are: ");
                                for(i=0;i<n;i++)
                                {
                                    if(arr[i]%2 != 0)
                                        printf("%d ", arr[i]);
                                }
                            }

///Take N students marks as input and store them in an array. Find the grade of each student:

                int main()
                        {
                            int n;
                            scanf("%d", &n);
                            int arr[n];
                            int i;
                            for(i=0;i<n;i++)
                            {
                                printf("Enter Marks: ");
                                scanf("%d", &arr[i]);

                            if(arr[i]>=90) printf("A\n");
                            else if(arr[i]>=80) printf("B\n");
                            else if(arr[i]>=70) printf("C\n");
                            else if(arr[i]>=60) printf("D\n");
                            else printf("F\n");
                            }
                        }
///Take N students marks as input and store them in an array. Find highest/lowest mark:
            int main()
                        {
                            int n,i;
                            scanf("%d", &n);
                            int arr[n];
                            printf("How many students?\n");


                            for(i=0;i<n;i++)
                            {
                                printf("\nEnter Marks: ");
                                scanf("%d", &arr[i]);

                            }
                             int max=arr[0];
                             int min=arr[0];
                             for(i=0;i<n;i++)
                            {
                                 if(max<arr[i])  max=arr[i];
                               else  min=arr[i];
                            }
                            printf("Highest is: %d and Lowest is: %d", max,min);
                         }

///Take N numbers as input and store them in an array. Shift all elements of the array one place towards left. The first element will go to the last place:

            int main()
                     {
                         int n;
                         scanf("%d", &n);
                         int i, t;
                         int arr[n];
                         for(i=0;i<n;i++)
                         {
                             scanf("%d", &arr[i]);
                         }
                         t=arr[0];
                         for(i=0;i<n-1;i++)
                         {
                             arr[i]=arr[i+1];
                         }
                         arr[n-1]=t;
                         for(i=0;i<n;i++)
                         {
                             printf("SS: %d\n", arr[i]);
                         }
                     }


//Write a C program to input elements in array and find frequency of each element in array:

             int main()
                     {
                         int n,i;
                         scanf("%d", &n);
                         int arr[n];
                         for(i=0;i<n;i++)
                         {
                             scanf("%d", &arr[i]);
                         }
                         for(i=0;i<10;i++)
                         {
                             int n=0,p=0;
                             for(int j=i;j<10;j++)
                             {
                                 if(arr[i]==arr[j]) n++;

                             }
                             for(int j=i;j>=0;j--)
                             {
                                 if(arr[i]==arr[j]) p++;
                             }
                             if(p<2) printf("Frequency of %d = %d\n", arr[i], n);
                         }
                         return 0;
                     }

///Largest and second largest of an array element:

            
            int main()
                     {
                         int i, n;
                         cin >> n;
                         int arr[n];
                         int max=-1,smax=-1;
                         for(i=0;i<n;i++)
                         {
                             cin >> arr[i];
                              if(arr[i]>max)
                            {
                             max=arr[i];
                            }
                            else if(arr[i]>smax && arr[i]!=max)

                            {
                                smax=arr[i];
                            }
                         }
                         printf("Largest %d and Second largest %d", max, smax);

                      }


                                       ///***Practice Problem(Array)***\\\



        //1.solution:
                    int main()
                            {
                                int n,sum=0;;
                                cin >> n;
                                int arr[n];
                                int i;
                                for(i=0;i<n;i++)
                                {
                                    cin >> arr[i];
                                    sum=sum+arr[i];

                                }
                                printf("sum of all elements: %d", sum);

                            }
        //2.Solution:
                    int main()
                            {
                                int n,i;
                                cin >> n;
                                int arr[n];
                                for(i=0;i<n;i++)
                                {
                                    cin >> arr[i];

                                }
                                int sm=arr[0];
                                for(i=0;i<n;i++)
                                {
                                    if(arr[i]<sm) sm=arr[i];

                                }
                                printf("Smallest is: %d", sm);

                            }
        //3.solution:(Frequency array)
                    int main()
                           {
                               int i, j;
                               int n;
                               cin >> n;
                               int arr[n];
                               for(i=0;i<n;i++)
                               {
                                   cin >> arr[i];
                               }
                               for(i=0;i<n;i++)
                               {
                                   int q=0,p=0;
                                   for(j=i;j<n;j++)
                                   {
                                       if(arr[i]==arr[j]) q++;
                                   }
                                   for(j=i;j>=0;j--)
                                   {
                                       if(arr[i]==arr[j]) p++;
                                   }
                                   if(p<2) printf("Frequency array of %d is %d", arr[i],q);
                               }

                           }
        //4.solution:(dublicate)
                    int main()
                          {
                              int n;
                              cin >> n;
                              int arr[n];
                              int i, j, k;
                              for(i=0;i<n;i++)
                              {
                                  cin >> arr[i];
                              }
                              for(i=0;i<n;i++)
                              {
                                  for(j=i+1;j<n;j++)
                                  {
                                      if(arr[i]==arr[j])
                                      {
                                          for(k=j;k<n;k++)
                                          {
                                              arr[k]=arr[k+1];
                                          }

                                          n--;

                                          j--;
                                      }
                                  }
                              }
                              for(i=0;i<n;i++)
                              {
                                  printf("%d\n", arr[i]);
                              }

                          }
        //5.solution:
            int main()
                     {
                         int n;
                         cin >> n;
                         int arr[100];
                         int i,s,f;
                         for(i=0;i<n;i++)
                         {
                             scanf("%d", &arr[i]);
                         }

                         scanf("%d", &s);

                         f=0;
                         for(i=0;i<n;i++)
                         {
                             if(arr[i]==s)
                                {
                                    f=1;
                                break;
                             }
                         }
                         if(f==1) printf("%d Found at position %d", s,i+1);
                         else printf("Not found");
                    }