/*
Check Palindrome
Send Feedback
Given a String s, check it its palindrome. Return true if string is palindrome, else return false.
Palindrome strings are those, where string s and its reverse is exactly same.
Input Format :
 String S
Output Format :
"true" if S is palindrome, else "false"
Constraints :
0 <= |S| <= 10^7
where |S| represents the length of string, S.
Sample Input 1 :
abcdcba
Sample Output 1 :
true 
Sample Input 1 :
abcd
Sample Output 1 :
false
*/
/*int count (char str[])
{
    int count=0,i;
    for(i=0;str[i]!='/0';i++)
    {
        count++;
    }
    return count;
}

*/
# include<string.h>
bool checkPalindrome(char str[]){

    bool check = true;
    int n;
    n=strlen(str);
    
    int i;
    for(i=0;i<n;)
    {
        if(str[i++]!=str[--n])
            return false;
       
    }
    
    return check;

  /* Don't write main().
   *  Don't read input, it is passed as function argument.
   *  Return output and don't print it.
   *  Taking input and printing output is handled automatically.
   */


}
#include<iostream>
using namespace std;
#include "Solution.h"

int main(){

  char str[10000];
  cin.getline(str,10000);

  if(checkPalindrome(str)){
  	cout << "true" << endl; 	
  }else{
  cout << "false" << endl;
  }
}


