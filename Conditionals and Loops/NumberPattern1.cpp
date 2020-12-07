/*Number Pattern 1

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
Sample Input 1 :
3
Sample Output 1 :
1
23
345
*/

#include<iostream>
using namespace std;


int main(){
int a,b,n;
    cin>>n;
    for(a=1;a<=n;a++)
    {
        for(b=a;b<2*a;b++)
        {
            cout<<b;
        }
        cout<<endl;
    }return 0;
}




