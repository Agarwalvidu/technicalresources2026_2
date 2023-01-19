#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int n;
    cin >> n;
    
   //write your code here
   
    int row,column;
    
    for(row=1;row<=n;row++)
    {
        for(column=1;column<=row;column++)
        {
            cout<<"* ";
        }
        cout<<" "<<endl;
    }

    return 0;
}
