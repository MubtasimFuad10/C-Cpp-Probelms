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

//***String Concatenation   (The + operator can be used between strings to add them together to make a new string. This is called concatenation)

int main()
{
    string firstName = "John ";
    string lastName = "Doe";
    string fullName = firstName + lastName;
    cout << fullName;
}


// *** String Length   (A string in C++ is actually an object, which contain functions that can perform certain operations on strings. For example, the length of a string can be found with the length() function:)


int main(){
  string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  cout << "The length of the text string is: " << txt.length();
  return 0;
}


// *** Access Strings  (You can access the characters in a string by referring to its index number inside square brackets [].This example prints the first character in myString:)


int main(){
    string myString = "Hello";
cout << myString[1];
}



// *** Change String Characters    (To change the value of a specific character in a string, refer to the index number, and use single quotes:)


int main(){
    string mystring = "Hello";
    mystring[0] = 'J';
    cout << mystring;
}


// *** User Input Strings   (It is possible to use the extraction operator >> on cin to display a string entered by a user)

int main(){
    string firstName;
    cout << "Typing your first name: ";
    cin >> firstName;
    cout << "Your name is: " << firstName;
}



//so in case of taking string,we have to take getline() .That's why, when working with strings, we often use the getline() function to read a line of text. It takes cin as the first parameter, and the string variable as second
int main(){
    string fullName;
    cout << "Type your fullname: ";
    getline(cin, fullName);
    cout << "your name is: " << fullName;
}

//using scanf(but space will not work either in scanf)
                        int main()
                                {
                                    char t[27];
                                    puts("please enter a string: ");
                                    scanf("%15s", t); 
                                    puts("You have entered: ");
                                    puts(t);


                                }
///using scanf to get a string
                    int main()
                        {
                            char t[27];
                            puts("please enter a string: ");
                           scanf("%[^abcd]",t); //this means abcd badd diye shob print koro.
                            int a=strlen(t);
                            puts("You have entered: ");
                            puts(t);
                            printf("%d", a);


                        }

                    int main()
                        {
                            char t[27];
                            puts("please enter a string: ");

                           scanf("%[^\n]", t);
                            puts("You have entered: ");
                            puts(t);


                        }
///using scanf() declaring number of output to print
                    int main()
                        {
                            char t[27];
                            puts("please enter a string: ");

                           scanf("%26[^\n]", t);//declaring space using scanf
                            puts("You have entered: ");
                            puts(t);


                        }

//Write down a program that will print n-th letter in a sentence entered by a user. n will be input to your program
                     int main()
                            {
                                char a[10];
                                int i,l,n;

                                gets(a);
                                l=strlen(a);
                                scanf("%d", &n);
                                    if(n>l-1) printf("no character");

                                    printf("%c", a[n]);

                            }


///vertically letter print code

                int main()
                        {
                            char a[10];
                            gets(a);
                            int i;
                            for(i=0;i<10;i++)
                            {
                                printf("%c\n", a[i]);
                            }
                        }

///searching a letter in a string
                int main()
                    {
                        char s[80], t;
                        int i, n, l, p;
                        gets(s);
                        printf("Which letter?");
                        scanf("%c" , &t);
                        l=strlen(s);
                        p=-1;
                        for(i=0;i<l;i++)
                        {
                            if(s[i]==t) p=i;

                        }
                        if(p==-1) printf("Not Found");
                        else printf("Found at %d", p);

                    }
///All library Function of string

                int main()
                    {
                        char a[10];
                        gets(a);
                        strrev(a);//reverse the word
                        strupr(a);//uppercase the string
                        strlwr(a);//lowercase the string
                        printf("%s\n", a);


                        char s1[30]="Bad";
                        char s2[30]="Good";
                        strcpy(s1,s2); //copy the 2nd string to first. like s1=s2;
                        printf("%s\n", s2);


                        char s3[30]="Coastal";
                        char s4[30]="cry";
                        strncpy(s3,s4,3);//copy only 3 letter of s4 to s3.
                        printf("%s\n", s3);


                        char s5[30]="Hello ";
                        char s6[30]="world";
                        strcat(s5,s6); //append s6 and s5 . output : hello world
                        printf("%s\n", s5);


                        char s7[30]="yo";
                        char s8[30]="Happy";
                        strncat(s7,s8,6); //append 6 letter of s8 to s7.
                        printf("%s\n", s7);


                        int x=strcmp(s7,s8);
                        int x=strcmpi(s7,s8);//strcmpi() ignores the alphabetic order of a string
                        if(x==0) printf("same");
                        else if(x>0) printf("Positive.s1>s2");
                        else if(x<0) printf("Negetive.s1<s2");


                        return 0;
                    }


///palindrome string
                int main()
                        {
                            char s[80];
                            gets(s);
                            char t[80];
                            strcpy(t,s);
                            strrev(s);
                            if(strcmpi(s,t)==0)
                                printf("%s is a palindrom", s);
                            else
                                printf("%s is not a palindrom", s);
                        }


