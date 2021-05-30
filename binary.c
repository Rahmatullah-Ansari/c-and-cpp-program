//program to create binary tree and perform insertion and deletion in it.
#include<stdio.h>
#include<stdlib.h>
struct binary
{
    long n;
    struct binary *left;
    struct binary *right;
};
struct binary *tree=NULL;
struct binary *tree;
struct binary *deletion(long digit,struct binary *b);
struct binary *insertion(struct binary *tree,long n);
struct binary *delete_node(long digit,struct binary *tree);
void search(struct binary *tree,long n);
void pre_order(struct binary *tree);
void in_order(struct binary *tree);
void post_order(struct binary *tree);
int select();
int main(){
    int choice;
    long digit;
    int item;
    do
    {
        choice=select();
        switch (choice)
        {
        case 1:
        printf("Enter integers: To quit enter zero.");
        scanf("%ld",&digit);
        while(digit != 0){
            tree=insertion(tree,digit);
            scanf("%ld",&digit);
        }continue;
        case 2:
        printf("\nEnter number to be search:");
        scanf("%ld",&digit);
        search(tree,digit);
        continue;
        case 3:
        printf("\nPre order traversing tree:");
        pre_order(tree);
        continue;
        case 4:
        printf("\nIn order traversing tree:");
        in_order(tree);
        continue;
        case 5:
        printf("\nPost order traversing tree:");
        post_order(tree);
        continue;
        case 6:
        printf("\nEnter data to be delete:");
        scanf("%d",&digit);
        delete_node(digit,tree);
        continue;
        case 7:
        printf("Ends.");
        exit(0);
        }
    } while (choice != 7);
    return 0;
}
int select(){
    int s;
    do{
        puts("1.Insert a node in BST.");
        puts("2.search a node in BST.");
        puts("3.Display pre order BST.");
        puts("4.Display in order BST.");
        puts("5.Display post order BST.");
        puts("6.Delete item in BST.");
        puts("7.Ends.");
        puts("Enter your choice:");
        scanf("%d",&s);
        if((s<1)||(s>7)){
            puts("Wrong choice!\n Try again!");
        }
    }while((s<1)||(s>7));
    return s;
}
struct binary *insertion(struct binary *tree,long digit){
    if(tree==NULL){
        tree=(struct binary *)malloc(sizeof(struct binary));
        tree->left=tree->right=NULL;
        tree->n=digit;
    }else if(digit<tree->n)
    tree->left=insertion(tree->left,digit);
    else if(digit>tree->n)
    tree->right=insertion(tree->right,digit);
    else if(digit==tree->n){
        puts("Duplicate node not allowed!");
        exit(0);
    }return tree;
}
struct binary *deletion(long digit,struct binary *b){
    struct binary *bn;
    if(b->right != NULL)
    deletion(digit,b->right);
    else
    bn->n=b->n;
    bn=b;
    b=b->left;
}
struct binary *delete_node(long digit,struct binary *tree){
    struct binary *r,*q;
    if(tree==NULL){
        puts("Empty tree!");
        exit(0);
    }
    if(digit<tree->n)
    delete_node(digit,tree->left);
    else if(digit>tree->n)
    delete_node(digit,tree->right);
    q=tree;
    if((q->right==NULL)&&(q->left==NULL))
    q=NULL;
    else if(q->right==NULL)
    tree=q->left;
    else if(q->left==NULL)
    tree=q->right;
    else
    deletion(digit,q->left);
    free(q);       
}
void search(struct binary *tree,long digit){
    if(tree==NULL)
    puts("The number doesn't exits.\n");
    else if(digit==tree->n)
    printf("Number = %d\n",digit);
    else if(digit<tree->n)
    search(tree->left,digit);
    else
    search(tree->right,digit);
}
void pre_order(struct binary *tree){
    if(tree != NULL){
        printf("%12ld\n",tree->n);
        pre_order(tree->left);
        pre_order(tree->right);
    }
}
void in_order(struct binary *tree){
    if(tree != NULL){
        in_order(tree->left);
        printf("%12ld\n",tree->n);
        in_order(tree->right);
    }
}
void post_order(struct binary *tree){
    if(tree != NULL){
        post_order(tree->left);
        post_order(tree->right);
        printf("%12ld\n",tree->n);
    }
}