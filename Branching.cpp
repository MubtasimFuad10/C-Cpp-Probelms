/**
     *******  *     *     * *    * * *
     *MFT10   *     *    *   *   *     *
     *******  *     *   * * * *  *     *
     *        *     *   *     *  *     *
     *        * * * *   *     *  * * *
**/

#include<bits/stdc++.h>
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
///Write down a program that will take two integers as input and will print the maximum of two.
int main()
{
    int a, b;
    cin >> a >> b;
    if(a>b)
        cout << a << endl;
    else
        cout << b << endl;
}


///Write down a program that will take three integers as input and will print the maximum of three.
int main()
{
    int a, b, c;
    int max;
    scanf("%d %d %d", &a, &b, &c);
    if(a>b) max=a;
    else max=b;

    if(max<c) max=c;

    printf("maximum is: %d", max);


}


//By  using ternary operator :
int main()

        {
            int a, b, c, max;
            cin >> a >> b >> c;
            max=a>b ? a : b;
            max=(max<c) ? c : max;
            printf("maximum: %d", max);
        }


///*****Most important(finding max,min and second largest)
       int main()
        {
            int a, b, c, max,min;
            cin >> a >> b >> c;
            max=a>b ? a : b;
            max=(max>c) ? max : c;

            min=a<b ? a : b;
            min=(min<c) ? min : c;

            int s=(a+b+c)-max-min;

            printf("maximum: %d\n", max);
              printf("Second Largest: %d\n", s);
             printf("minimum: %d", min);



        }


///*****Most important(finding max,min and second largest and third largest)

      int main()
        {
            int a, b, c, d,max,min;int smax;int smin;
            scanf("%d %d %d %d", &a, &b, &c, &d);
            //cin >> a >> b >> c >> d;
            int max1 =  a>b ? a : b;
            int max2= c>d ? c : d;
            max= max1>max2 ? max1 : max2;

            smax = max1<max2 ? max1 : max2;



            int min1 = a<b ? a : b;
            int min2 = c<d ? c : d;
            min=min1<min2 ? min1 : min2;

            smin=min1>min2 ? min1 : min2;



            int sl = smax>smin ? smax : smin;
            int tl = smax<smin ? smax : smin;



            printf("maximum: %d\n", max);
             printf("Second Largest: %d\n", sl);
              printf("Third Largest: %d\n", tl);
             printf("minimum: %d", min);





        }


      

///maximum of four integer:
int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int max;
    if(a>b) max=a;
    else max=b;

    if(max<c) max=c;
     if(max<d) max=d;

    printf("Maximum is: %d", max);

}


///maximum of five integer:
int main()
{
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    int max;
    if(a>b) max=a;
    else   max=b;
    if(max<c) max=c;
    if(max<d) max=d;
    if(max<e) max=e;
    printf("Maximum is: %d", max);
}


///Second largest of three integer:

    int main()
    {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        int max;
        int smax;
        if(a>b) {max=a;smax=b;}
        else {max=b;smax=a;}

        if(max<c) {smax=max;max=c;}
        else if(c>smax) smax=c;
        printf("Largest is: %d and Second Largest is: %d\n", max, smax);
        return 0;
    }





///C program that calculates weekly wages for hourly employees. Number of hours worked in a week will be input to your program.

int main()
{
    int h;
    float w;
    printf("How many hours?\n");
    scanf("%d", &h);
    if(h<= 40)
        w=h*10;
    else
        w=40*10+(h-40)*15;

    printf("Weekly wages: %0.3f\n", w);
    return 0;
}


///A program that will take a student�s mark as input and will convert it to the corresponding letter grade.
                                //naive Approach:

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

///***Finding Leap Year
int main()
{
    int y;
    scanf("%d", &y);
    if(y%400==0 || y%4==0 && y%100 !=0)
        printf("Leap year\n");
        else
            printf("Not a Leap Year\n");
        return 0;

}



///A program that will take an integer as input and will print YES if it is divisible by either 2 or 5 and will print NO otherwise.
int main()
{
    int a;
    cin >> a;
  if(a%2==0 || a%5==0) cout << "YES" << endl;
  else cout << "NO" << endl;

}

///*** Using Logical NOT (!)
int main()
{
    float marks;
    cin >> marks;
    if(!(marks<60)) //important
    {
        printf("Passed\n");
    }
    else
    {
        printf("Failed");
    }
}



//A program that will take an integer as input and will print YES if it is divisible by 2 but not by 5 and will print NO otherwise.
int main()
{
    int a;
    cin >> a;
    if(a%2==0 && (!(a%5==0)))
        cout << "YES" << endl;
    else cout << "NO" << endl;
}

