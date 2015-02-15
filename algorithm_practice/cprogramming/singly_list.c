#include<stdio.h>
#include<stdlib.h>



typedef struct node{
	int value;
	struct node *next;
} Node;

//Head Node 
struct node *head = NULL;

void add_node(struct node *, int );
void iterate_list(struct node *);


int main(int argc, char **argv){

	unsigned int n,m;
	//struct node *head = NULL;


	printf("Value:\n");
	scanf("%d",&n);

	head = malloc(sizeof(struct node));
	head->value = n;
	head->next = NULL;

	scanf("%d",&m);
	struct node *temp;
	temp = malloc(sizeof(struct node));
	temp->value = m;
	temp->next = NULL;

	//printf("The value is %d\n",head->value);
	//create_list(head, 10);
	//printf("The size of head pointer is : %d\n value pointed by address:%d\n is %d\n",sizeof(head),head,*head);
	struct node *t = NULL;
	t = head;
	t->next = temp;
	//add_node(t,200);
	iterate_list(head);

	return EXIT_SUCCESS;

}
void add_node(struct node *t, int c){

	struct node *newnode = NULL;
	newnode = malloc(sizeof(struct node));
	newnode->next = NULL;
	t->next = newnode;
}

void iterate_list(struct node *listiter){
	struct node *t = NULL;
	t = listiter;
	printf("Your List contains:");
	while(t != NULL){
		printf("%d\t",t->value);
		t = t->next;
	}
}




