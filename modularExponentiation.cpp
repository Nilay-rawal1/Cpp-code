//coding ninja problem "Modular Exponentiation"
#include <bits/stdc++.h>

int modularExponentiation(int a, int n, int b) {
	int res=1;
	while(n>0){
		if(n&1){
			res=(1LL * (res)*(a)%b)%b;
		}
		a=(1LL * (a)%b*(a)%b)%b;
		n=n>>1;
	}
	return res;

}
