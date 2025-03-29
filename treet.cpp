#include<stdio.h>
#include<stdlib.h>
struct node{
int info;
struct node *right;
struct node *left;
};
struct node *root;
int main()
{
root=0;
struct node* create();
void preorder(struct node*);
void inorder(struct node*);
void postorder(struct node*);
printf("\n ::making of tree begin::");
root=create();
printf("\n ::making of tree end::");
printf("\n ::pre-order representation of tree::");
preorder(root);
printf("\n ::in-order representation of tree::");
inorder(root);
printf("\n ::post-order representation of tree::");
postorder(root);
printf("\n ::end of program::");
return 0;
}
struct node* create()
{
int x;
struct node *newnode;
newnode=(struct node*)malloc(sizeof(struct node));
printf("\n Enter the value of node(if you enter the value = -1 then node will not create): ");
scanf("%d",&x);
if(x==-1)
{
	free(newnode);
return 0;
}
newnode->info=x;
printf("\n enter the value of left node of %d node : ",x);
newnode->left=create();
printf("\n enter the value of right node of %d node : ",x);
newnode->right=create();
return newnode;
}
void preorder(struct node *root)
{
if(root==0)
{
return;
}
printf("\n elements: %d",root->info);
preorder(root->left);
preorder(root->right);
}
void inorder(struct node *root)
{
if(root==0)
{
return;
}
inorder(root->left);
printf("\n elements: %d",root->info);
inorder(root->right);
}
void postorder(struct node *root)
{
if(root==0)
{
return;
}
postorder(root->left);
postorder(root->right);
printf("\n elements: %d",root->info);
}
