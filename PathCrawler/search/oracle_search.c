void oracle_search(
  	int *Pre_A, int *A, 
  	int Pre_n, int n,
  	int Pre_elem, int elem, 
  	int pathcrawler__retres__search)
{
  	int res = pathcrawler__retres__search;

  	if(res >=0){
		if (A[res]==elem){
			pathcrawler_verdict_success();	
		}else{
			pathcrawler_verdict_failure();
		}
	}else{
		for(int cur=0; cur<n; cur++ ) {
    		if ( elem == A[cur] ) {
    			//si l'élément est dans le tableau : echec
    		  	pathcrawler_verdict_failure();
    		}
    	}
		//si l'élément n'est pas dans le tableau : succès
    	pathcrawler_verdict_success();	
	}


  return;
}
