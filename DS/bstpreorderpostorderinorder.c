#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node* insert(struct node *root, int x)
{
    struct node *n = (struct node *)malloc(sizeof(struct node));
    if (n==NULL)
    {
        exit(1);
    }
    n->data =x;
    n->right = NULL;
    n->left=NULL;
    if (root == NULL)
    {
        root = n;
        return root;
    }
    else if (x > root->data)
    {
        root->right = insert(root->right, x);
    }
    else if (x < root->data)
    {
        root->left = insert(root->left, x);
    }
    return root;
};
void inorder(struct node *root)
{

    if (root==NULL)
    {
        return;
    }
    else
    {
            inorder(root->left);
            printf("%d ", root->data);
            inorder(root->right);

    }

}
void preorder(struct node *root)
{

    if (root==NULL)
    {
        return;
    }
    else
    {


            printf("%d ", root->data);
            preorder(root->left);
            preorder(root->right);

         }

}
void postorder(struct node *root)
{

    if (root==NULL)
    {
        return;
    }
    else
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);


    }

}

int main()
{
    int n = 0, val = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    struct node *root = NULL;
    int i;
    for (i = 0; i<n;i++)
    {
        printf("Enter element: ");
        scanf("%d", &val);
        root = insert(root, val);
    }
    printf("INORDER: ");
    inorder(root);
    printf("PREORDER: ");
    preorder(root);
    printf("POSTORDER: ");
    postorder(root);
    return 0;
}
