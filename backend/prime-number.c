#include<stdio.h>
int main(){
  int n;
  printf("enter the number:");
  scanf("%d" , &n);
  int isprime=1;

  for(int i = 2 ; i<n ;i++){  
  if( n % i == 0){ 
    isprime=0;
  } 
   if(isprime){
    printf("prime number");
   }else{
    printf("not a prime number");

   }
  
  
return 0;

  }
}

  
