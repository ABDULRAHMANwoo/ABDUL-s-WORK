#include<iostream>
using namespace std;
int main(){
	string a,b;
	cout<<" enter user id: ";
	cin>>a;
	cout<<" re-enter id: ";
	cin>>b;
	if(a==b){
		cout<<" #valid Id ";
	}else
	{
		cout<<" Invalid Id !!";
	}
}
