/*
Check Permutation
Send Feedback
Given two strings, S and T, check if they are permutations of each other. Return true or false.
Permutation means - length of both the strings should same and should contain same set of characters. Order of characters doesn't matter.
Note : Input strings contain only lowercase english alphabets.


Input format :
Line 1 : String 1
Line 2 : String 2
Output format :
'true' or 'false'
Constraints :
0 <= |S| <= 10^7
0 <= |T| <= 10^7
where |S| represents the length of string, S.
Sample Input 1 :
abcde
baedc
Sample Output 1 :
true
Sample Input 2 :
abc
cbd
Sample Output 2 :
false
*/
// input2 - second input string


#include<cstring>


#include<bits/stdc++.h>


bool isPermutation(char input1[], char input2[]) {


   // Write your code here




    // Get lenghts of both strings 


    int count1[256] = {0};


    int count2[256] = {0};


  


    int n1 = strlen(input1);


    int n2 = strlen(input2); 


  


    // If length of both strings is not same, 


    // then they cannot be Permutation 


    if (n1 != n2) 


      return false; 


   for(int i = 0; i < n1; i++)


        count1[input1[i]]++;


    


    for(int i = 0; i < n2; i++)


        count2[input2[i]]++;


    // Sort both strings 


    


  


    // Compare sorted strings 


    for (int i = 0; i < 256;  i++) 


       if (count1[i]!=count2[i]) 


         return false; 


  


    return true; 


}




#include <iostream>
using namespace std;
#include "solution.h"

int main() {
    char input1[1000], input2[1000];
    cin.getline(input1, 1000);
    cin.getline(input2, 1000);
    if(isPermutation(input1, input2) == 1) {
        cout << "true";
    }
    else {
        cout << "false";
    }
}

