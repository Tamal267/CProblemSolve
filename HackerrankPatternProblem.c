#include<stdio.h>
int main(){
  int n;
  scanf("%d",&n);
  int k=2*n-1;
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
