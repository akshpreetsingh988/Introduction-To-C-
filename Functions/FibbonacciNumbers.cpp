/*
Fibonacci Number
Send Feedback
Given a number N, figure out if it is a member of fibonacci series or not. Return true if the number is member of fibonacci series else false.
Fibonacci Series is defined by the recurrence
    F(n) = F(n-1) + F(n-2)
where F(0) = 0 and F(1) = 1


Input Format :
Integer N
Output Format :
true or false
Constraints :
0 <= n <= 10^4
Sample Input 1 :
5
Sample Output 1 :
true
Sample Input 2 :
14
Sample Output 2 :
false    
*/

bool checkMember(int n){
    int a=0;if(n==0||n==1)
    {
        return true;
    }
    int b=1;
    int i=2,sum=0;
    while(i<=n)
    {
        sum=a+b;
        a=b;
        b=sum;
        if(sum==n)
        {
            return true;
        }
        
            i++;}
    return false;
    }

  /* Don't write main().
   * Don't read input, it is passed as function argument.
   * Return output and don't print it.
   * Taking input and printing output is handled automatically.
  */



