#include <stdio.h>
#include <stdlib.h>
struct node
{
        int data;
        struct node *right_child;
        struct node *left_child;
};
int maxHeight(struct node* node)
{
        if (node==NULL)
        {
                return 0;
        }
        else
        {
                int rightHeight=maxHeight(node->right_child);
                int leftHeight=maxHeight(node->left_child);

                if(leftHeight>rightHeight)
                {
                        return leftHeight+1;
                }
                else
                {
                        return rightHeight+1;
                }
        }
}

struct node* insert(struct node *root, int x)
{
        struct node*temp  = (struct node*)malloc(sizeof(struct node));
        temp->data = x;
        temp->left_child = NULL;
        temp->right_child = NULL;

        if(root==NULL)
        {
                root=temp;
        }
        else if(x>root->data)
        {
                root->right_child = insert(root->right_child, x);
        }
        else
        {
                root->left_child = insert(root->left_child,x);
        }

        return root;


}

int main()
{

        int n,i,l;
        struct node *root;
        printf("Enter no of  nodes\n");
        scanf("%d",&n);
        printf("Enter nodes\n");
        for(i=1; i<=n; i++)
        {
                scanf("%d",&l);
                root=insert(root,l);
        }
        printf("Height of tree is %d", maxHeight(root));
        return 0;
}
