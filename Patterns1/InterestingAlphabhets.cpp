/*
G
FG
EFG
DEFG
CDEFG
BCDEFG
ABCDEFG
*/
void printPatt(int n)
{
    
    int i=1;
    while(i<=n)
    {
        char startchar='A'+n-i;
        int j=1;
        while(j<=i)
        {
            char ch=startchar+j-1;
            cout<<ch;
            j++;
        }
        cout<<endl;
        i++;
    } //write your code here
}

