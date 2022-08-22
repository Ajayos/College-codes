#include<stdio.h>
/* 
				3 [i=0][j=0]	  3 [i=0][j=1]	  3 [i=0][j=2]	  
				 
				 
				2 [i=1][j=0]	  2 [i=1][j=1]	  2 [i=1][j=2]	  
				 
				 
				1 [i=2][j=0]	  1 [i=2][j=1]	  1 [i=2][j=2]	  
 

*/
void main(){
	int row, column, i, j, up_sum=0, dp_sum=0;
	printf("Enter row: ");
	scanf("%d", &row);
	printf("Enter column: ");
	scanf("%d", &column);
	int arr[row][column];
	printf("Enter Matrix\n");
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
			scanf("%d", &arr[i][j]);
		}
	}
	printf("Your Matrix is: \n"); 
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
			printf("%d	", arr[i][j]);
		}
		printf("\n");
	}
	if(row==column){
		for(i=0;i<row;i++){
			for(j=0;j<column;j++){
				//upper diagnol
				if(i<j){
					up_sum += arr[i][j]; 
				}
				else if(i>j){
					dp_sum += arr[i][j];
				}
			}
		}
		printf("The sum of upper diagnol is %d\n", up_sum);
		//printf("The sum of lower diagnol is %d\n", dp_sum);
	}
}
