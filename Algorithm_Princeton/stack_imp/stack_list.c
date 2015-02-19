#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int item;
	struct node *next;
} node;

void usage();
int get_size(struct node *);
struct node *getnode(int );
struct node *push_item(struct node *, int );

int main(int argc, char *argv[]){
	struct node *head = NULL;
	char choice;
	int val;
	printf("Press h for help:\n");
	while(1){
		scanf("%c",&choice);
		switch(choice){
				case 'p':
					printf("Push section:\n");
					printf("Enter an Item:\n");
					scanf("%d",&val);
					if(head == NULL){
						head = getnode(val);
						}
					head = push_item(head, val);
					break;
				case 'o':
					printf("Pop Section:\n");
					break;
				case 's':
					printf("Stack Size:\n");
					if(head == NULL)
					{
					printf("Stack Empty:\n");
					}
					if(head != NULL){
					printf("%d\n",get_size(head));
					}
					break;
				case 'h':
					printf("Help\n");
					usage();
					break;
				case 'q':
					exit(0);
					break;
		
			}
		
		}

	return EXIT_SUCCESS;
}	

void usage(){
	printf("p for push:\n");
	printf("o for pop:\n");
	printf("s for size:\n");
	printf("h for help:\n");
	printf("q for quit:\n");
}
struct node *getnode(int n){
	struct node *tmp;
	tmp = malloc(sizeof(struct node));
	tmp->item = n;
	tmp->next = NULL;
return tmp;
}
struct node *push_item(struct node *tmp, int val){
	struct node *newitem;
	newitem = getnode(val);
	newitem->next = tmp;
	return newitem;
}	
int get_size(struct node *tmp){
	int c = 0;
	while(tmp->next != NULL){
		tmp = tmp->next;
		c = c + 1;
		}
	return c;
}	
