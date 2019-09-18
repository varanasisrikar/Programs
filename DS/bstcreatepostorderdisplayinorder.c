#include <stdio.h>
#include <stdlib.h>
struct Node
{
        int key;
        struct Node *left, *right;
};
struct Node* newNode(int key)
{
        struct Node* node = (struct Node*)malloc(sizeof(struct Node));
        node->key = key;
        node->left = node->right = NULL;

        return node;
}
void inorder(struct Node* root)
{
        if (root == NULL)
                return;

        inorder(root->left);
        printf("%d ", root->key);
        inorder(root->right);
}
struct Node* constructBST(int postorder[], int start, int end)
{
        struct Node *te;
        int i,last;
        if(start==end)
        {
                te=newNode(postorder[start]);
                return te;


        }
        else
        {
                te=newNode(postorder[end]);
                last=postorder[end];
                for(i=end-1; i>start; i--)
                {
                        if(postorder[i]<last)
                        {

                                break;
                        }
                }

        }
        te->left=constructBST(postorder,start,i);
        te->right=constructBST(postorder,i+1,end-1);
        return te;



}
int main()
{
        int i,x;
        printf("Enter array size\n");
        scanf("%d",&x);
        int postorder[x];
        printf("Enter postorder of BST\n");
        for(i=0; i<x; i++) {
                scanf("%d",&postorder[i]);
        }
        int n = sizeof(postorder)/sizeof(postorder[0]);
        struct Node* root = constructBST(postorder, 0, n - 1);
        printf("Inorder Traversal of BST is ");
        inorder(root);
        return 0;
}
