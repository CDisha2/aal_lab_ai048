#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int i,j,n,m,a1[100],emp,a2[100],count=0;
	printf("enter the number of elements : ");
	scanf("%d",&n);
	for (i=0;i<n;i++){
		int ele;
	    printf("enter the elements :");
	    scanf("%d",&a1[i]);
    }
    printf("\narray : ");
	for (i=0;i<n;i++){
		printf("%d ",a1[i]);
	}
    printf("\n\nenter the number of elements : ");
	scanf("%d",&m);
	for (i=0;i<m;i++){
		int ele;
	    printf("enter the elements :");
	    scanf("%d",&a2[i]);
	    
    }
    printf("\n\npattern array : ");
	for (i=0;i<m;i++){
		printf("%d ",a2[i]);
	}
    for(i=0;i<(n-m+1);i++){
    	count=0;
    	for(j=0;j<m;j++){
    		if(a1[i+j]!=a2[j]){
    			break;
			}else{
				count++;
				
			}
    		
		}if(count==m){
			printf("\n\npattern matched");
			printf("\n\nindex :%d",i+1);
			break;
		}
	}

	if(count!=m){
		printf("\n\npattern not matched");
	}
} 


/*OUTPUT:

enter the number of elements : 4
enter the elements :5
enter the elements :7
enter the elements :8
enter the elements :0

array : 5 7 8 0 

enter the number of elements : 2
enter the elements :8
enter the elements :0


pattern array : 8 0 

pattern matched

index :3
*/
