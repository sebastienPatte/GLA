/* Une implementation de la recherche dichotomique
   d'un element "elem" dans un tableau ordonne "A" */
#include <stdio.h>
int search( int A[], int n, int elem) {
  int low, high, mid, ret;
  
  low = 0;
  high = n-1;
  ret = -1;

  while(high >= low && ret == -1) {        /* ligne 11 */
    mid = (low + high) / 2 ;
    
    if(elem == A[mid])                     /* ligne 14 */ 
      ret = mid; 
    if(elem > A[mid])                      /* ligne 16 */ 
      low = mid + 1;
    else
      high = mid - 1;
  }  
  
  return ret;
}

int main(){
    printf("res = %d"search([1;2;3;4;5;6;7;8;9;10], 10, 11));
}
