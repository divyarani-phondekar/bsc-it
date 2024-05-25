#include<stdio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node*left;
	struct node*right;
};
struct node *root=NULL;
struct node *create(struct node*);
struct node *display(struct node*);
struct node *preorder(struct node *temp);
struct node *postorder(struct node *temp);
struct node *inorder(struct node *temp);

void main() {
	int choice,val,count,min,max;
	do {
		printf("\n MAIN MENU\n");
		printf("1.Create a Binary Tree\n");
		printf("2.Display a Binary Tree\n");
		printf("3.EXIT\n");
		printf("Enter Your Choice : ");
		scanf("%d", &choice);
		printf("\n\n");
		switch(choice) {
			case 1:
				root =create(root);
				break;
			case 2:
				root =display(root);
				break;
			case 3:
				break;
		}
		while(choice!=3);
	}
}
struct node*create(struct node*root) {
	struct node *newnode=NULL,*temp=NULL,*parent=NULL;
	int val;
	printf("Enter The Data or Enter -1 to Exit : ");
	scanf("%d",&val);
	while(val!=-1) {
		newnode=(struct node*)malloc(sizeof(struct node));
		newnode->val;
		if(root==NULL) {
			root=newnode;
			newnode->left=NULL;
			newnode->right=NULL;
		} else {
			temp=root;
			while(temp!=Null) {
				parent=temp;
				if(val<temp->data) {
					temp=temp->left;
				} else {
					temp=temp->right;
				}
			}
			if(val<parent->data) {
				parent->left=newnode;
				newnode->left=NULL;
				newnode->right=NULL;
			} else {
				parent->right=newnode;
				newnode->left=NULL;
				newnode->right=NULL;
			}
		}
		printf("Enter the Data or Enter -1 to Exit : ");
		scanf("%d",&val);
	}
	printf("Successfully Created\n");
	return root;
}
struct node *display(struct node *root) {
	int choice;
	printf("\t Display Menu\n");
	printf("\t1.Pre-Order \n");
	printf("\t2.IN-Order \n");
	printf("\t3.Post-Order \n");
	printf("\t4.EXIT \n");
	printf("Enter Your Choice : \n");
	scanf("%d",&choice);
	switch(choice) {
		case 1:
			printf("\t The PreOrder Traversal is : ");
			preorder(root);
			break;
		case 2:
			printf("\t The In-Order Traversal is : ");
			inorder(root);
			break;
		case 3:
			printf("\t The Post-Order Traversal is : ");
			postorder(root);
			break;
		case 4:
			break;
	}
	printf("\n");
	return root;
}
void preorder(struct node *temp) {
	if (temp!=NULL) {
		printf("\t%d",temp->data);
		preorder(temp->left);
		preorder(temp->right);
	}
}
void postorder(struct node *temp) {
	if(temp!=NULL) {
		postorder(temp->left);
		postorder(temp->right);
		printf("\t%d",temp->data);
	}
}
void inorder(struct node *temp) {
	if(temp!=NULL) {
		inorder(temp->left);
		printf("\t%d",temp->data);
		inorder(temp->right);
	}
}

