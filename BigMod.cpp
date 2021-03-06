///PROBLEM LINK:BIG MOD UVA ->https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=310
///RESOURCE:https://www.hackerearth.com/practice/math/number-theory/basic-number-theory-1/tutorial/
///         http://www.shafaetsplanet.com/?p=936


// Iterative C++ program to compute modular power  
///There is a recursive way too

#include <bits/stdc++.h> 
using namespace std; 
  
/* Iterative Function to calculate (x^y)%p in O(log y) */
long long BigMod(long long x, long long y, long long p)  
{  
    long long res = 1;     
    
    x = x % p; // Update x if it is more than or  
                // equal to p 
   
    if (x == 0)
    return 0; // In case x is divisible by p; 
  
    while (y > 0)  
    {  
        // If y is odd, multiply x with result  
        if (y & 1)  
            res = (res*x) % p;  
  
        // y must be even now  
        y = y>>1; // y = y/2  
        x = (x*x) % p;  
    }  
   
    return res;  


}  
  
int main()  
{  
    long long x,y,p;
   
    cin>>x>>y>>p; 
   
    cout << "Power is " << BigMod(x, y, p);  
   
    return 0;  
}  




  
