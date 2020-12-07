/*
Sample Input :
5
Sample Output :
        1
      212
    32123
  4321234
543212345
*/
#include<iostream>
using namespace std;

int main(){int n;
           cin>>n;
           int i=1;
           while(i<=n)
           {
               int spaces=1;
               while(spaces<=n-i)
               {
                   cout<<" ";
                   spaces++;
               }
               int j=1;
               int test=i;
               while(j<=i)
               {
                   cout<<test;
                   test--;j++;
                   
               }
               j=i-1;
               int t1=test+2;
               while(j>=1)
               {
                   cout<<t1;
                   j--;
                   t1++;
                   
               }
               cout<<endl;
               i++;
                   
           }
           

  // Write your code here  

  
}


