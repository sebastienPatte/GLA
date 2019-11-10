/* Une implementation de la recherche lineaire
   d'un element "elem" dans un tableau ordonne "A" */

int search( int A[], int n, int elem)
{
  int cur ;
  
  for( cur=0; cur<n; cur++ ) {
    if ( elem == A[cur] ) {
      return(cur);
    } else {
      if ( elem < A[cur] ) {
	return(-1);
      }
    }
  }
  return(-1) ;
}

