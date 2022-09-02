#include <bits/stdc++.h>
using namespace std;
int main()
{
char ch;
cout<<"enter any characetr :";
cin>>ch; 
if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' &&ch <= 'Z')) {
if (ch=='a' || ch=='A' || ch=='e' || ch=='E' || ch=='i' || ch=='I' || ch=='o' || ch=='O' || ch== 'u' || ch=='U')
cout<<ch<<" is a vowel ";
else
cout<<ch<<" is a consonant ";
}
else    
{
cout<<ch<<"is neither a vowel nor a consonant ";
}
return 0;
}
