#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        int s= x/4;
        if(x%4==0){
            cout<<s<<endl;
        }else{
            cout<<(s+1)<<endl;
        }
    }
	// your code goes here
	return 0;
}
