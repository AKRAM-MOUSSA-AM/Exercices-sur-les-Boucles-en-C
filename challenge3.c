#include <stdio.h>
int main (){
    int n,i,somme=0;
    
  printf("entrer la valeur de n positif ");
  scanf("%d",&n);
  if (n<0){ 
  printf("erreur le nombre est %d est negative ",n);
  }
else{
  
  for(i=1;i<=n;i++);{
  somme=somme+i;
  }
printf("La somme des %d premiers nombres naturels est : %d\n",n,somme);
printf("Vérification avec la formule n(n+1)/2 : %d\n", n * (n + 1) / 2);

}
return 0;
}