#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

// map here

int map[10001] = {0};

// custom variable

int no_nodes = 0;

// inorder successor

struct node *in_s(struct node *root)
{
    if (root == NULL)
    {
        return NULL;
    }
    else if(root->left != NULL)
    {
        return in_s(root->left);
    }
    return root;
}

// insert and delete

struct node *delete (struct node *root, int n)
{
    if (root == NULL)
    {
        return NULL;
    }
    else if (root->data > n)
    {
        root->left = delete (root->left, n);
    }
    else if (root->data < n)
    {
        root->right = delete (root->right, n);
    }
    else
    {
        if (root->right == NULL && root->left == NULL)
        {
            free(root);
            return NULL;
        }
        else if (root->right == NULL && root->left != NULL)
        {
            struct node *temp = malloc(sizeof(struct node));
            temp = root->left;
            free(root);
            return temp;
        }
        else if (root->right != NULL && root->left == NULL)
        {
            struct node *temp = malloc(sizeof(struct node));
            temp = root->right;
            free(root);
            return temp;
        }
        else
        {
            struct node *temp = in_s(root->right);
            root->data = temp->data;
            root->right = delete (root->right, temp->data);
        }
    }

    return root;
}

struct node *insert(struct node *root, int n)
{
    if (root == NULL)
    {
        struct node *temp = malloc(sizeof(struct node));
        temp->data = n;
        temp->left = NULL;
        temp->right = NULL;
        return temp;
    }

    else if (n > root->data)
        root->right = insert(root->right, n);
    else
        root->left = insert(root->left, n);
    return root;
}

// search

struct node *search(struct node *root, int n)
{
    if (root == NULL )
    {
        printf("NO");
        return root;
    }else if(root->data == n){
        printf("YES");
        return root;
    }
    else if (n > root->data)
    {
        return search(root->right, n);
    }
    else
    {
        return search(root->left, n);
    }
}

// display

void display_preorder(struct node *root)
{
    if (root != NULL)
    {
        printf(" %d ", root->data);
        display_preorder(root->left);
        display_preorder(root->right);
    }
}

void display_inorder(struct node *root)
{
    if (root != NULL)
    {
        // printf("y  ");
        display_inorder(root->left);
        printf(" %d ", root->data);
        display_inorder(root->right);
    }
}

void display_postorder(struct node *root)
{
    if (root != NULL)
    {
        display_postorder(root->left);
        display_postorder(root->right);
        printf(" %d ", root->data);
    }
}

int main()
{

    int n, a, i, flag = 1;
    scanf("%d", &n);

    struct node *root = NULL;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a);
        if (flag == 1)
        {
            if (a > 0)
            {
                root = malloc(sizeof(struct node));
                root->data = a;
                root->left = NULL;
                root->right = NULL;
                flag = 0;
                map[a] = 1;
                no_nodes++;
            }
        }
        else
        {
            if (a > 0 && map[a] == 0)
            {
                insert(root, a);
                map[a] = 1;
                no_nodes++;
            }
            else
            {
                delete (root, -a);
                map[a] = 0;
                no_nodes--;
            }
        }
    }

    display_inorder(root);
    printf("\n");
    display_preorder(root);
    printf("\n");
    display_postorder(root);

    printf("\n no of nodes are %d\n",no_nodes);

    printf("find a number");
    scanf ("%d",&a);
    search(root,a);
}