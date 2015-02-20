#include<stdio.h>
#include<stdlib.h>

struct node *root = NULL;

typedef struct node{
		int value;
		struct node *left;
		struct node *right;
} node;

// create an empty node
struct node * getnode(){
	struct node *tmp;
	tmp = malloc(sizeof(struct node *));
	return tmp;
}
// initialized tree and assign root node
//
struct node * maketree(int val){
	struct node *t1;
	t1 = getnode();
	t1->value = val;
	t1->left = NULL;
	t1->right = NULL;
return(t1);
}
int main(int argc, char **argv){


return EXIT_SUCCESS;
}
	
