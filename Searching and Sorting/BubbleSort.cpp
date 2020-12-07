
#include <iostream>

using namespace std;

void BubbleSort(int arr[], int n){
	int i,j,temp;
    for(i=0; i<n-1;i++)
    {
        for (j=0;j<n-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
                
            }
        }
    }
        
    
    
    

}
int main(){

	int size;
	cin>>size;

	int * input=new int[1+size];

	for(int i=0;i<size;i++)
		cin>>input[i];

	BubbleSort(input,size);
	
	for(int i=0;i<size;i++)
		cout<<input[i]<<" ";	

}	

