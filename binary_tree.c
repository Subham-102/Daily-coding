//Tree can be defined as a collection of entities(nodes) linked together to form a hierachy.
//The top most element of the tree is called root.
//Each element of the tree is called a node.
//The node from which another node(s) are formed is called Parent node.
//Immidiate predecessor of a node is called Parent node.
//Immidiate successor of a node is called child node.
//The node which does'nt have any child is known as leaf nodes or external node.
//The node which have atleast one child is known as non-leaf node.
//Sequence of consecutive edges from source node to destination node is known as path.
//Any predecessor node on the path from root to that node is known as ancestor.
//Any successor node on the path of that node to leaf node is known as decendent.
//Any node with all its decendent is known as sub-tree.
//All the child of same parent is known as siblings.
//Number of children of any node is known as degree of the node.
//Maximum degree of any node in a tree is known as the degree of tree.
//Length of the path from root to that node is known as depth of node.
//Number of edges in the longest path from that node to a leaf node is known as height of node.
//Number of edges from root to that node is known as level of a node.(level = depth)
//If there are n nodes there are (n-1) number of edges.
//Each node can have atmost 2 child is known as binary tree.
//A binary tree containing either 0 or 2 children is known as Full/Proper/Strict binary tree.
/*A binary tree in which all the levels are completly filled(except the last level) and the last level
has nodes as left as possible is known as complete binary tree*/
//A binary tree with all internal nodes have 2 children & all leaves are at same level is known as perfect binary tree
//Every perfect binary tree is a full as well as complete binary tree but the reverse is not true.
//All the internal node contain only one child is known as degenerate binary tree.
/*Array representeation of binary tree(only for complete binary tree)
  If a node is at index i:-
    left child would be at :- [(2*i)+1]
    right child would be at :- [(2*i)+2]
    parent would be at :- [(i-1)/5]        */
/*Binary search tree is a binary tree in which all the values in the left sub tree is less than the parent node
and all the values in the right subtree is greater than its parent node.*/
/*AVL Tree- 
            (i) It is a Binary Search Tree
            (ii) Height of left subtree - Height of right subtree = {-1,0,1}  (Balance factor)  */
#include<stdio.h>
#include<stdlib.h>
struct node{
    struct node *left;
    int data;
    struct node *right;
};
//Normal creation of a binary tree
struct node *create(){
    struct node *newnode;
    int num;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter data(-1 for no node) :- ");
    scanf("%d",&num);
    if(num==-1){
        return 0;
    }
    newnode->data=num;
    printf("Enter left child of %d\n",num);
    newnode->left=create();
    printf("Enter right child of %d\n",num);
    newnode->right=create();
    return newnode;
}    
//Preorder traversal of binary tree   
void preorder(struct node *root){
    if(root==0){
        return ;
    }
    printf("%d ",root->data);
    preorder(root->left);
    preorder(root->right);
}   
//Inorder traversal of binary tree
void inorder(struct node *root){
    if(root==0){
        return ;
    }
    inorder(root->left);
    printf("%d ",root->data);
    inorder(root->right);
}
//Postorder traversal of binary tree
void postorder(struct node *root){
    if(root==0){
        return ;
    }
    postorder(root->left);
    postorder(root->right);
    printf("%d ",root->data);
}
void main(){
    struct node *root;
    root=0;
    root=create();
    printf("Pre-Order is :- ");
    preorder(root);
    printf("\n");
    printf("In-Order is :- ");
    inorder(root);
    printf("\n");
    printf("Post-Order is :- ");
    postorder(root);
}