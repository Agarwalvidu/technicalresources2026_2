#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    
    //write your code here
    int first=0,second=1,third=first+second;
    
    for(int i=2;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if(i==2 && j==1)
            {
                cout<<second<<" ";
               
            }
            else
            {cout<<third<<" ";}
            first=second;
            second=third;
            third=first+second;
        }
    cout<<endl;
        
    }

    return 0;

    
}
