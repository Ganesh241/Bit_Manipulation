/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter a number"<<endl;
    cin>>n;
    cout<<bitset<32>(n)<<endl;
    
    // check which k bit is set or not (0 indexed)
    // cout<<"enter you bit you want to check is set or not"<<endl;
    // int k;
    // cin>>k;
    
    // if(n&(1<<k))
    // {
    //     cout<<"bit is set"<<endl;
    // }
    // else
    // {
    //     cout<<k<<"th bit is not set bit"<<endl;
    // }
    
    
    //set k bit to 1
    // cout<<"enter you bit you want to set"<<endl;
    // int k;
    // cin>>k;
    // cout<<bitset<32>(n| (1<<k));
    
    
    //clear k th bits
    // cout<<"enter you bit you want to clear"<<endl;
    // int k;
    // cin>>k;
    // cout<<bitset<32>(n& ~(1<<k));
    
    
    //check how many bits are set
    // int i=0;
    // int bit=0;
    // // while(pow(2,i)<=n)
    // // {
    // //     int p=pow(2,i);
    // //     if(n & p)
    // //     {
    // //         bit++;
    // //     }
    // //     i++;
    // // }
    // for (int i = 0; (1 << i) <= n; i++) {
    //     if (n & (1 << i))
    //         bit++;
    // }
    // cout<<"Number of set bits "<<bit<<endl;
    // int count = __builtin_popcount(n);
    // cout<<count<<endl;
   
   //To toggle the k th bit
    // cout<<"enter you bit you want to toggle"<<endl;
    // int k;
    // cin>>k;
    // cout<<bitset<32>(n^ (1<<k));
    
    
    
    // check the number is even or odd
    // if(n&1) cout<<n<<" is odd"<<endl;
    // else cout<<n<<" is even"<<endl;
    
    
    //turn off the lowest set bitset
    // cout<<bitset<32>(n&(n-1))<<endl;
    
    
    return 0;
}
