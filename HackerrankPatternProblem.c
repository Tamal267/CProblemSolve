//interation method
#include<stdio.h>
int main(){
  int n;
  scanf("%d",&n);
  int k=2*n-1; //we have to print 7 digits in the first line if input is 4
  int l=k-1;
  int i,j;
  for(i=0;i<k;i++){
    for(j=0;j<k;j++){
      if(i==0 || j==0 || i==l || j==l){
        printf("%d ",n);
      }
      else if(i!=l && j!=l && i+j<=l){
        printf("%d ",(i>j)? n-j : n-i );
      }
      else if(i!=l && j!=l && i+j>l){
        printf("%d ",(i>j)? n-j+(i+j-l) : n-i+(i+j-l) );
      }
    }
    printf("\n");
  }
  return 0;
}
//recursion method
#include<iostream>
#include<cmath>
using std::cout;
void abc(int x, int n){
	if(n==0) return;
	cout<<x<<"\40";
	abc(x-1,n-1);
}
void def(int x , int n){
	if(n==0) return;
	cout<<x<<"\40";
	def(x,n-1);
}
void abc2(int x, int n){
	if(n==0) return;
	abc2(x-1,n-1);
	cout<<x<<"\40";
}
void ghi(int n){
	if(n==1) {
		cout<<"1\40";
		return ;
	}
	cout<<n<<"\40";
	ghi(n-1);
	cout<<n<<"\40";
}
void print(int n , int x){
	if(n==1) {
		ghi(x),cout<<"\12";
		return ;
	}
	abc(x,x-n+1),def(n,n-2),cout<<n<<"\40",def(n,n-2),abc2(x,x-n+1),cout<<"\12";
	print(n-1,x);
	abc(x,x-n+1),def(n,n-2),cout<<n<<"\40",def(n,n-2),abc2(x,x-n+1),cout<<"\12";
}
int main(){
	print(4,4);
}
