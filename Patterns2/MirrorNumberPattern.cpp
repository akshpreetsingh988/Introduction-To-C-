/*
  1 
    12
  123
1234
*/


#include<iostream>
using namespace std;


int main(){
int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int spaces =1;
        while(spaces <=n-i)
        {
            cout<<" ";
            spaces++;
            
        }
        int num=1;
        while(num<=i)
        {
            cout<<num;
            num++;
            
        }
        cout<<endl;
        i++;
    }
    return 0;
       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
  
}



