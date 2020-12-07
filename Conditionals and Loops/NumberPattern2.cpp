/*
Number Pattern 2

Print the following pattern
Pattern for N = 4
       1
     23
   345
 4567
Input Format :
N (Total no. of rows)
Output Format :
Pattern in N lines
Sample Input :
5
Sample Output :
          1
        23
      345
    4567
  56789
  */
  
  #include<iostream>

using namespace std;


int main(){int n,val,i,b,c;
           cin>>n;
           i=1;
           val=1;
           while(i<=n)
           {
               int k=1;
               while(k<=n-i)
               {
                   cout<<" ";
                   k++;
               }b=i;
               while(b<2*i)
               {
                   cout<<b;
                   b++;
               }cout<<"\n";
               i++;
           }return 0;
       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
  
}


