void oracle_sort(
  int *Pre_table, int *table, 
  int Pre_l, int l)
{

if(l>1){
	  	for(int i=1; i<l; i++){
	  		if (table[i-1]>table[i]){
	  			pathcrawler_verdict_failure();
	  			return;
	  		}
	  	}
}
pathcrawler_verdict_success();

return;

}
