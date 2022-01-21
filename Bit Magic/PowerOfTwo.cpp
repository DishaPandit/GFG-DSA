//check if the no. n is power of 2 or not
// i/p : 4
// o/p : yes

//TC - theta(no. of bits)

#include<iostream>
using namespace std;
int main()
{
    cout <<"Enter a number : "<<endl;
    int n;
    cin >> n;
    int count = 0;
    while(n!=0)
    {
        if(n&1)
            count++;
        
        n=n>>1;
    }
    if(count==1)
        cout << "Yes"<<endl;
    else
        cout << "No"<<endl;

}

/*

better solution - brian kerningam algoritm
TC - Theta(no. of set bits)

#include<iostream>
using namespace std;
int main()
{
    cout <<"Enter a number : "<<endl;
    int n;
    cin >> n;
    int count = 0;
    while(n)
    {
        n= n & (n-1);
        count++;
    }
    if(count==1)
        cout << "Yes"<<endl;
    else
        cout << "No"<<endl;

}

*/

// method 3 - most efficient
//TC - O(1)
/*
#include<iostream>
using namespace std;
int main()
{
    cout <<"Enter a number : "<<endl;
    int n;
    cin >> n;

    if(n==0)
        cout << "false";
    if((n & (n-1)) == 0)
        cout << "true";
    else 
        cout << "false";
}
*/