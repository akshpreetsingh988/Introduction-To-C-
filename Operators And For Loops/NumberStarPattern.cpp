/*
Number Star Pattern
Send Feedback
Print the following pattern for given number of rows.
Input format :

Line 1 : N (Total number of rows)

Sample Input :
   5
Sample Output :
1234554321
1234**4321
123****321
12******21
1********1
*/
#include<iostream>
using namespace std;


int main(){
int n,i,j,k;
    cin>>n;
    k=n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=k;j++)
        {
            cout<<j;
            
        }
        if(i>1)
        {
            for(j=1;j<i;j++)
            {
                cout<<"**";
            }
        }
        
         for(j=k;j>=1;j--)
        {
            cout<<j;
            
        }k--;
        cout<<endl;
    }// Write your code here

}




