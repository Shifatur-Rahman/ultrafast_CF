
#include<iostream>
#include<string>
using namespace std;
int main(){

string s1, s2,s3;
cin>>s1>>s2;

int i;
for(i=0;i<s1.length();i++){
	if(s1[i]==s2[i]){
		cout<< '0';
	} else{
	    cout<< '1';
	}
}
}
