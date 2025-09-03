#include<stdio.h>
int main(){
  int i,n,impair;
  printf("entrer le nombre : ") ;
  scanf("%d",&n);
  printf(" Les nombre impair de %d sont : ",n);
  for(i=1;i<=n;i++){

  
impair=2*i-1;
printf("%d ",impair);
}
return 0;
}
