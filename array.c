#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  int arr[10];
  int arr2[10];
  int i;

  int *p; //pointer
  p = &arr[0]; // pointer variable 

    //seeding number generator
  srand( time(NULL) );

  //random number
  //printf("%d \n", rand());

  //printf("%d \n", *p);
  
  printf("The orginal array:\n");
  for ( i = 0 ; i < 10 ; i++){
    if (i == 9){
      arr[i] = 0;
    }
    else{
      arr[i] = rand();
    }
    //p = &arr[i];
    
    printf("arr[%d]: %d\n", i, arr[i]);
    

  }
  


  printf("The second array:\n");
  for (i = 0 ; i < 10 ; i++){
    p = &arr[9-i];
    arr2[i] = *p;

    printf("arr2[%d]: %d\n ", i, arr2[i]);
  }
  
  return 0;
}
