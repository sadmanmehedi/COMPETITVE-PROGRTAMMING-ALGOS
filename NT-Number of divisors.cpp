///ARO EFFICIENT EKTA ALGO ASA DEKTE HBE GFG THEKE
///PROBLEM:http://lightoj.com/login_main.php?url=volume_showproblem.php?problem=1028
///VIDEO REF:https://www.youtube.com/watch?v=x9KMLQa6G5w

#include<bits/stdc++.h>
using namespace std;

vector<bool> flag(10000000, true);
vector<long long> primes;

void sieve()
{
    flag[0] = false;
    flag[1] = false;

    for(long long i = 3; i*i < 10000000; i+=2)
        {
            if(flag[i])
            {
                for(long long j = i; i*j < 10000000; j++)
                {
                    flag[i*j] = false;
                }
            }
        }


    primes.push_back(2);
    for(long long i = 3; i < 10000000; i += 2)
        {
            if(flag[i])
            {
                primes.push_back(i);
            }
        }

}




long long countDivisor(long long n)
{
    long long divisor = 1;
    long long p=primes.size();
    for (long long i = 0; primes[i]*primes[i] <=n && i<p ; i++)
    {
        if (n % primes[i] == 0)
        {
            long long cnt = 1;
            while (n % primes[i] == 0)
            {
                n /= primes[i];
                cnt++;
            }
            divisor *= cnt;
        }
    }
    if(n>1)
        divisor*=2;
    return divisor;
}



int main()
{
    sieve();
    countDivisor(n);
 
    return 0;
}
