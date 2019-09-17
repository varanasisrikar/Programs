#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *right_child;
    struct node *left_child;
};
void inorder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    else
    {
        inorder(root->left_child);
        printf("%d ", root->data);
        inorder(root->right_child);
    }

}
struct node* insert(struct node *root, int x)
{
    struct node *n = (struct node *)malloc(sizeof(struct node));
    if (n == NULL)
    {
        exit(1);
    }
    n->data = x;
    n->right_child = NULL;
    n->left_child = NULL;
    if (root == NULL)
    {
        root = n;
    }
    else
    {
        if(x>root->data)
        {
            root->right_child = insert(root->right_child,x);
        }
        else
        {
            root->left_child = insert(root->left_child,x);
        }
    }
    return root;

}

int main()
{
    int n,i,l,r;
    struct node *root=NULL;
    printf("Enter no of  nodes \n");
    scanf("%d",&n);
    printf("Enter  nodes \n");
    for(i=1;i<=n;i++){
    	scanf("%d",&l);
      root=insert(root,l);
	}
  printf("Inorder Traversal\n");
   inorder(root);
    printf("\n");
       return 0;
}
