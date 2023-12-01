#include <stdio.h>
#include <stdlib.h>
#include "func.h"
int main(){
	gd *arr=NULL;
	int n=0;
	int stop=0;
	while (stop!=1){
		int key;
		printf("1-load db 2-print 3-search 4-stop\n");
		scanf("%d",&key);
		switch(key){
			case 1:{
				int key2;
				printf("1-create, 2-read\n");
				scanf("%d",&key2);
				if (key2==1){
					create(&arr,&n);
					if(!arr)
						printf("error");
					else{
						printf("created %d\n",n);
						write(arr,n);
					}
				}
				else{
					read(&arr,&n);
					if(!arr)
						printf("error\n");
					else{
						printf("loaded %d\n",n);
				}
				break;
			}
			case 2:
				for (int i=0; i<n; i++)
					printf("%s %s %d\n", arr[i].type, arr[i].colour, arr[i].amount);
				break;
			case 3:
				read(&arr,&n);
				printf("you can search by:\n");
				printf("1-type\n2-colour\n3-amount\n");
				int crit;
				printf("crit= ");
				scanf("%d",&crit);
				search(arr,n,crit);
				break;
			case 4:
				stop=1;
				break;
		}
	}
	if(arr)
		free(arr);
	return 0;
	}
}
