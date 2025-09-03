#include <stdio.h>
int main(){
int i,n;
long long factorielle=1;
printf("entrer le nombre n : ");
scanf("%d",&n);
if(n<0){
printf("erreur");
}
else{
    for(i=1;i<=n;i++){

    factorielle*=i;
    }
}
        printf("%d! = %llu\n", n, factorielle);
 return 0;
}

