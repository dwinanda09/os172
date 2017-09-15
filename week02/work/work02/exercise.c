/*
* Name: dwi nanda susanto
* NPM: 1506722720
* Class: a classy one. nope. jk. i mean OS-j
* Comment: my comment?
*/

#define LOOP 3
#include <stdio.h>

void main() {
  int input, hasil, ii;
 input = 7;
 hasil = 1;
 

 for(ii=LOOP; ii>0; ii--){
  hasil *= input;
}


  printf("%d power by %d equals to %d \n", input, LOOP, hasil);

}

