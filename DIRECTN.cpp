#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    int f=0;
	    for(int i=0;i<n-1;i++){
	        if((s[i]=='L' && s[i+1]=='L') || (s[i]=='R' && s[i+1]=='R'))
	        {
	            f=1;
	            break;
	            
	        }
	        else{
	            f=0;
	            
	            
	        }
	    }
	    if(f==1){
	         cout<<"yes"<<endl;
	    }
	    else{
	        cout<<"no"<<endl;
	    }
	}
	return 0;
}
