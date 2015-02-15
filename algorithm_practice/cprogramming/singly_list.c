#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int value;
	struct node *next;
} Node;

//Head Node 
struct node *head = NULL;

void add_node();
void iterate_list();
void create_list();
void print_menu(void);
void delete_last_item();

int main(int argc, char **argv){

	unsigned int n,m;
	char choice;
	int item;
	//struct node *head = NULL;
	printf("List Operations:\n");
	printf("Press m for menu:\n");
	while(1){
		scanf("%c",&choice);
		switch(choice){
			case 'c':
				create_list();
				break;
			case 'a':
				printf("Item will be added to List:\n");
				add_node();
				break;
			case 'l':
				iterate_list();
				break;
			case 'm':
				print_menu();
				break;
			case 's':
				printf("The List has : %d items.\n",list_size());
				break;
			case 'd':
				delete_last_item();
				break;	
			case 'q':
				exit(0);
	
		}
	}	
	return EXIT_SUCCESS;

}
void add_node(){
	struct node *tmp;
	int item;
	if(head == NULL){
		printf("List is Empty:\n");
		printf("First Create a List:\n");
		}
	else{
		printf("Enter an Item:\n");
		scanf("%d",&item);
		tmp = malloc(sizeof(struct node));
		tmp->next = NULL;
		tmp->value = item;
		tmp->next = head;
		head = tmp;
		
	}
}

void print_menu(void){
	printf("c to intitalized list:\n");
	printf("a to add item to list:\n");
	printf("l to list items:\n");
	printf("s to get list size:\n");
	printf("d to delete last item from list:\n");
	printf("q to quit:\n");
}
void iterate_list(){
	printf("List Contains:\n");
	struct node *tmp;
	tmp = head;
	while(tmp != NULL){
		printf("%d\t",tmp->value);
		tmp = tmp->next;
	}
	printf("\n");
}
int list_size(){
	unsigned int count = 0;
	struct node *tmp;
	tmp = head;
	while(tmp != NULL){
		count = count + 1;
		tmp = tmp->next;
	}
	return count;	
}


void create_list(){
	int item;
	struct node *temp;
	printf("List is going to Initialized:\n");
	if(head == NULL){
		printf("Please Enter an Item:\n");
		scanf("%d",&item);
		temp = malloc(sizeof(struct node));
		temp->value = item;
		temp->next = NULL;
		head = temp;
		}else
		{
		printf("List Already Initialized:");
	}
}
		
void delete_last_item(){
	struct node *t;
	t = head;
	while(t->next != NULL){
		t = t->next;
	}
	t->next = NULL;
	free(t);

}	




