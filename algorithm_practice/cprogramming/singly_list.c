#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int value;
	struct node *next;
} Node;

//Head Node 
//struct node *head = NULL;

struct node  *add_node(struct node *);
void iterate_list(struct node *);
struct node *create_list(struct node *);
void print_menu(void);
void delete_last_item();
void delete_first_item();

int main(int argc, char **argv){

	unsigned int n,m;
	char choice;
	int item;
	struct node *head = NULL;
	printf("List Operations:\n");
	printf("Press m for menu:\n");
	while(1){
		scanf("%c",&choice);
		switch(choice){
			case 'c':
				head = create_list(head);
				break;
			case 'a':
				printf("Item will be added to List:\n");
				head = add_node(head);
				break;
			case 'l':
				iterate_list(head);
				break;
			case 'm':
				print_menu();
				break;
			case 's':
				printf("The List has : %d items.\n",list_size(head));
				break;
			case 'd':
				delete_last_item(head);
				break;
			case 'f':
				//delete_first_item();
				break;	
			case 'q':
				exit(0);
	
		}
	}	
	return EXIT_SUCCESS;

}
/*void delete_first_item(){
	struct node *tmp;
	tmp = head;

	*/
struct node *add_node(struct node *hhead){
	struct node *tmp;
	tmp = hhead;
	int item;
	if(hhead == NULL){
		printf("List is Empty:\n");
		printf("First Create a List:\n");
		}
	else{
		printf("Enter an Item:\n");
		scanf("%d",&item);
		tmp = malloc(sizeof(struct node));
		tmp->next = NULL;
		tmp->value = item;
		tmp->next = hhead;
		hhead = tmp;
		
	}
	return hhead;
}

void print_menu(void){
	printf("c to intitalized list:\n");
	printf("a to add item to list:\n");
	printf("l to list items:\n");
	printf("s to get list size:\n");
	printf("d to delete last item from list:\n");
	printf("q to quit:\n");
}
void iterate_list(struct node *hhead){
	struct node *tmp;
	tmp = hhead;
	printf("List Contains:\n");
	//struct node *tmp;
	//tmp = head;
	while(tmp != NULL){
		printf("%d\t",tmp->value);
		tmp = tmp->next;
	}
	printf("\n");
}
int list_size(struct node *hhead){
	unsigned int count = 0;
	struct node *tmp;
	tmp = hhead;
	while(tmp != NULL){
		count = count + 1;
		tmp = tmp->next;
	}
	return count;	
}


struct node *create_list(struct node *hhead){
	int item;
	struct node *temp;
	printf("List is going to Initialized:\n");
	if(hhead == NULL){
		printf("Please Enter an Item:\n");
		scanf("%d",&item);
		temp = malloc(sizeof(struct node));
		temp->value = item;
		temp->next = NULL;
		hhead = temp;
		}else
		{
		printf("List Already Initialized:");
	}
return hhead;
}
/*struct node *getnode(){
	struct node *tmp;
		tmp = malloc(sizeof(struct node));
		tmp->next = NULL;
	return tmp;
}*/
		
void delete_last_item(struct node *hhead){
	struct node *t,*t1;
	if(hhead == NULL){
		printf("List doesnot contain elements:\n");
		exit(0);
	}
	t1 = hhead;
	t = hhead->next;
	if(t == NULL){
		printf("List Contains only single element:");
		exit(0);
		}
	while(t->next != NULL){
		t = t->next;
		t1 = t1->next;
	}
	t1->next = NULL;
	free(t);
}	




