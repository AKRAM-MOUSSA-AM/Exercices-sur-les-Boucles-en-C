
#include <stdio.h>

int main() {
    int n, expo, i;
    long long resultat = 1; 

    printf("Entrer la valeur de n : ");
    scanf("%d", &n);

    printf("Entrer l'expo : ");
    scanf("%d", &expo);

  if (expo==0){ 
  resultat=1;
  }
  else if (expo>0){
 
  for (i=1;i<=expo;i++)
  resultat=resultat*i;
   }
   else{
    printf("l'expo est negative");
 return 0;
}

    printf("%d^%d = %lld\n",n, expo, resultat);
    

    return 0;
}


