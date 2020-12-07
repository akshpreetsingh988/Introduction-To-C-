#include<iostream>
using namespace std;


int main(){
    int S,E,W;
    cin>>S>>E>>W;
    
    
    int F,C;
    
    while(S<=E)
    {
     C=(S-32)*(5.0/9);
        cout<<S <<"\t"<<C<<endl;
        S=S+W;
    }

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
  
}


