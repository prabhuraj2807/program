#include <iostream>
using namespace std;
int main() {
	int testcase;
	cin>>testcase;
	while(testcase--){
		int no,i,sum=0;
		cin>>no;
		for(i=1;i<=no;i=i+2){
			sum=sum+i;
		}
		cout<<sum<<endl;
	}
	return 0;
}
