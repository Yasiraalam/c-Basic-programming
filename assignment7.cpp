/*Use for loops to construct a program that displays a pyramid of Xs on the screen. The
pyramid should look like this
X
XXX
XXXXX
XXXXXXX
XXXXXXXXX
except that it should be 20 lines high, instead of the 5 lines shown here. One way to do
this is to nest two inner loops, one to print spaces and one to print Xs, inside an outer
loop that steps down the screen from line to line.*/
#include<iostream>
using namespace std;
int main()
{
    int i,j,N,k=0;
    cout<<"Enter the  no rows"<<endl;
    cin>>N;
    cout<<"Enter the type of character"<<endl;
    for(i=0; i<=N; i++)
    {
        for(j=0; j<i+k-1;j++)
        {
            cout<<"X";
        }
        k++;
        cout<<"\n";
    }
}