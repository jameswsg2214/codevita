#include <iostream>
using namespace std;

int main() {
	int v,i,j=0,c=0,c2=0;
	cin>>v;
	int a[v],b[v];
	for(i=1;i<=v;i++){
		if(v%i==0)
		{a[c]=i;c++;}
	}
	for(i=1;i<c;i++){
	int r=1,k=1;
	while(r<a[i])
	{
		k++;
		r=k*k;
	}
	if(r==a[i]){
	b[c2]=a[i];
	c2++;
		a[i]=0;
	}	
	}
	for(i=0;i<c2;i++){
		
	for(j=1;j<c;j++){
		if(a[j]%b[i]==0){
			a[j]=0;
		}
	}
	}
	c2=0;
	for(j=1;j<c;j++){
		if(a[j]!=0)
		c2++;
	}
	cout<<c2;
	return 0;
}
