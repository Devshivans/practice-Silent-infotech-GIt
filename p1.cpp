//link:-https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/FLIPCARDS?tab=statement

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,x;
	    cin>>n>>x;
	    int flips = min(x,n-x);
	    cout<<flips<<endl;
	}

}