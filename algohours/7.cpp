#include <bits/stdc++.h>
using namespace std; 
int printNcR(int n, int r){
	long long p = 1, k = 1;
	if (n - r < r)
		r = n - r;
	if (r != 0) {
		while (r) {
			p *= n;
			k *= r;
			long long m = __gcd(p, k);
			p /= m;
			k /= m;
			n--;
			r--;
		}
	}
	else
		p = 1;
        return p;
}

int main(){   
     int t;
      cin>>t;
       while(t--){
           int p,c,l,sum;
           cin>>c;
           cin>>p;
           cin>>l;
           int m1,m2,m3,m4,m5,m6,m7; 
           m1 = printNcR(c,2); 
           m2 = printNcR(p,2); 
           m3 = (p*c)*4; 
           m4 = (p*l)*2; 
           m5 = (l*c)*2;
           m6 = printNcR(l,2);
           sum = m1*2+m2*4+m3+m4+m5+m6;
           cout<<sum<<endl;
       }      
	return 0;
}









