/*
Sum of Even Numbers till N

Given a number N, print sum of all even numbers from 1 to N.
Input Format :
Integer N
Output Format :
Required Sum 
Sample Input 1 :
 6
Sample Output 1 :
12
*/
#include<iostream>
using namespace std;


int main(){

     int n,i=0;
    cin>>n;
int sum=0;    while(i<=n)
    {sum=sum+i;
     i=i+2;}
    cout<<sum<<endl;
        /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
  
}



