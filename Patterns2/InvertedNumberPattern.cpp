/*
4444
333
22
1
*/
#include<iostream>
using namespace std;


int main(){
int n;
    cin>>n;
    int i=1;int print =n;
    while(i<=n)
    {
        int j=1;
        while(j<=n-i+1)
        {
            cout<<print;
            j++;
        }
        i++;
        print--;
        cout<<endl;
        
    }
    return 0;
       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
}
