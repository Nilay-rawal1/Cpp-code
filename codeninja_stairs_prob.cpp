//https://www.codingninjas.com/studio/problems/count-ways-to-reach-nth-stairs_798650
#include <bits/stdc++.h> 
int countDistinctWays(int nStairs) {
    //  base condition

    if(nStairs<0)
        return 0;
    if (nStairs==0)
        return 1;

   int ans= countDistinctWays(nStairs-1)+countDistinctWays( nStairs-2);
   return ans;
}