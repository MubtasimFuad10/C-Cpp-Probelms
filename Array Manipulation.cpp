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

                                    ///***Array Manipulation***\\\
//Take n students' marks as input and store them in an array. find average mark. N will also be input.

                            int main()
                                    {
                                        int n;

                                            float arr[n];
                                            float sum=0,avg;
                                            printf("How many students?");
                                            scanf("%d", &n);


                                        for(int i=1;i<=n;i++)
                                        {
                                            printf("Enter Mark: ");
                                            scanf("%f", &arr[i]);

                                            sum += arr[i];
                                            avg=sum/n;

                                        }


                                        //("Sum is %.3f", sum);
                                        printf("Avg is %.3f", avg);



                                    }

//GRADE:
                            int main()
                            {
                                int n;

                                    int i;
                                    float arr[n];
                                    float sum=0,avg,m;
                                    printf("How many students?");
                                    scanf("%d", &n);
                                    char g[n];


                                for(i=1;i<=n;i++)
                                {
                                    printf("Enter Mark: ");
                                    scanf("%f", &arr[i]);

                                   

                                }
                                m=arr[i];
                                if(m >= 80) g[n]='A+';
                                else if(m >= 70 && m <= 80) g[n]='A';
                                    else if(m >= 60&& m <= 70) g[n]='A-';
                                else if(m >= 50 && m <= 60) g[n]='B';
                                else  if(m >= 40 && m <= 50) g[n]='C';
                                else  g[n]='F';

                                printf("%f", g[n]);

                            }

//Find out odd elements of an array:
                        int main()
                                {int i, N;
                                printf("How many Numbers");
                                scanf("%d", &N);
                                int a[N];
                                    for(i=1;i<=N;i++)
                                    {
                                        printf("Enter Mark: ");
                                        scanf("%f", &a[i]);

                                    }
                                for(i=0;i<N;i++)
                                    if(a[i]%2==1) printf("%d", a[i]);
                                }


//take N students marks as input and store them in an array. find highest and lowest marks.

                            int main()
                                    {
                                        int i, n;
                                        printf("How many students? ");
                                        scanf("%d", &n);
                                        int arr[n];
                                        rep(i,0,n)
                                        {
                                            printf("Enter Mark:");
                                            scanf("%d", &arr[i]);
                                        }
                                        int max=arr[0];
                                        rep(i,0,n)
                                        {   if(max < arr[1])
                                            max = arr[1];
                                            }

                                            printf("Maximum %d", max);

                                    }


//minimum
                                int main()
                                            {
                                                int i, n;
                                                printf("How many students? ");
                                                scanf("%d", &n);
                                                int arr[n];
                                                rep(i,0,n)
                                                {
                                                    printf("Enter Mark:");
                                                    scanf("%d", &arr[i]);
                                                }
                                                int min=arr[0];
                                                int max = arr[0];
                                                rep(i,0,n)
                                                {   if(min > arr[i])
                                                    min = arr[i];
                                                    }

                                                    printf("Minimum %d", min);

                                                 
                                                    for(i = 0; i < n; i++){
                                                        if (max < arr[i])   max = arr[i];
                                                        if (min > arr[i]) min = arr[i];
                                                        }
                                            }



//At which index it changed
                                int main()
                                        {
                                            int i, n, index;
                                            printf("How many students? ");
                                            scanf("%d", &n);
                                            int arr[n];
                                            rep(i,0,n)
                                            {
                                                printf("Enter Mark:");
                                                scanf("%d", &arr[i]);
                                            }
                                            int max=arr[0];
                                            index = 0;
                                            rep(i,0,n)
                                            {   if(max < arr[i])
                                                max = arr[i];
                                                index=i-1;
                                                }

                                                printf("Maximum %d found at %d", max, index);

                                        }

//Left rotate:(opposite ta exam e ashbe (right rotate)***
                                int main()
                                            {
                                                int i, n,t;
                                                printf("How many students? ");
                                                scanf("%d", &n);
                                                int arr[n];
                                                rep(i,0,n)
                                                {
                                                    printf("Enter Mark:");
                                                    scanf("%d", &arr[i]);
                                                }
                                                t=arr[0];
                                                rep(i,0,n-1)
                                                {
                                                    arr[i]=arr[i+1];
                                                    arr[i+1]=arr[n-1];
                                                    arr[n-1]=t;
                                                }
                                                rep(i,0,n)
                                                {
                                                    printf("%d ", arr[i]);
                                                }

                                            }




/// print the number of distinct elements in a sorted array:

                               int main()
                                        {
                                                int i, n;
                                                cout <<"How many students? " << endl;
                                                cin >> n;
                                                int arr[n],c;
                                                cout << "Enter Mark: " << endl;
                                                rep(i,0,n)
                                                {

                                                    cin >> arr[i];
                                                }
                                                for(i=0;i<= n-2;i++)
                                                {
                                                    if(arr[i]== arr[i+1]) c--;

                                                }
                                                cout << "distinct " << c << endl;
                                        }



///Largest and second largest


    ///Searching:
                            
                            int main()
                                        {
                                                int i, n,t,idx;

                                                printf("How many data?\n");
                                                cin >> n;
                                                int a[n];
                                                rep(i,0,n)
                                                {
                                                    cout << "Enter data: " <<end;
                                                    cin >> a[i];


                                                }
                                                cout << "What to search?" << end;
                                                cin >> t;
                                                idx=-1;
                                                rep(i,0,n)
                                                {
                                                    if(t==a[i]) idx =i;
                                                    {
                                                    // break;  //comment -->  (if you dont give break than it will only count last digit of 2 numbers.And if you give break it will count the first one.)
                                                    cout <<  "Found at " << idx << end; //comment --> (it will show all the numbers if the input is more than equal two numbers.)
                                                    }
                                                if(idx==-1) printf("Not found");        //first occurence
                                                                                        //last occurence
                                                                                        //All occurence





                                        }


                                    