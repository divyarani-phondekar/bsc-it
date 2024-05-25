#include<stdio.h>
#include<malloc.h>
struct node {
	int data;
	struct node *left;
	struct node *right;
};

struct node *root=NULL;
struct node *create(struct node*);
struct node *display(struct node*);
void preorder(struct node *temp);
void postorder(struct node *temp);
void inorder(struct node *temp);

void main() {
	int choice,val,count,min,max;
//clrscr();
	do {
		printf("\n559_Dayasagar_FYIT_B");
		printf("\nMAIN MENU\n");
		printf("1.Create a binary tree\n");
		printf("2.Display the tree\n");
		printf("3.EXIT\n");
		printf("Enter your choice\n");
		scanf("%d",&choice);
		printf("\n\n");
		switch(choice) {
			case 1:
				root =create(root);
				break;
			case 2:
				root=display(root);
				break;
			case 3:
				break;
		}
	} while(choice!=3);
}


struct node *create(struct node *root) {
	struct node *newnode=NULL,*temp=NULL,*parent=NULL;
	int val;
	printf("Enter the data or enter -1 to exit:");
	scanf("%d",&val);
	while(val!=-1) {
		newnode=(struct node*)malloc(sizeof(struct node));
		newnode->data=val;
		if (root==NULL) {
			root=newnode;
			newnode->left=NULL;
			newnode->right=NULL;
		} else {
			temp=root;
			while(temp!=NULL) {
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
		printf("Enter the data or enter -1 to exit:");
		scanf("%d",&val);
	}
	printf("Succesfully created\n");
	return root;
}


struct node *display(struct node *root) {
	int choice1;
	printf("\t Display Menu\n");
	printf("\t1.Pre-oreder \n");
	printf("\t2.In-order\n");
	printf("\t3.Post-order \n");
	printf("\t4.EXIT\n");
	printf("Enter your choice\n");
	scanf("%d",&choice1);
	switch(choice1) {
		case 1:
			printf("\t The pre-order Traversal is:");
			preorder(root);
			break;
		case 2:
			printf("\tThe In-order Traversal is:");
			inorder(root);
			break;
		case 3:
			printf("\tThe Post-order Traversal is:");
			postorder(root);
			break;
		case 4:
			break;
	}
	printf("\n");
	return root;
}

void preorder(struct node *temp) {
	if(temp!=NULL) {
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
