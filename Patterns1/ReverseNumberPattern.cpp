/*
1
21
321
4321
*/
#include<iostream>
using namespace std;


int main(){
int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int j=1;
        int k=i;
        while(j<=i)
        {
            cout<<k;
            k--;
            j++;
        }
        cout<<endl;
        i++;
        
    }return 0;
       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
  
}



