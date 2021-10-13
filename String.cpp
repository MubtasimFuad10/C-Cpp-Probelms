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




