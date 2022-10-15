// #include<iostream>
// using namespace std;
// struct node {
//    int data;
//    struct node *left;
//    struct node *right;
// };
// struct node *createNode(int val) {
//    struct node *temp = (struct node *)malloc(sizeof(struct node));
//    temp->data = val;
//    temp->left = temp->right = NULL;
//    return temp;
// }
// void inorder(struct node *root) {
//    if (root != NULL) {
//       inorder(root->left);
//       cout<<root->data<<" ";
//       inorder(root->right);
//    }
// }
// void preorder(struct node *root)
// {
//    if(root!=NULL)
//    {
//       cout<<root->data<<" ";
//       preorder(root->left);
//       preorder(root->right);

//    }
// }
// void postorder(struct node *root)
// {
//    if(root!=NULL)
//    {
//       postorder(root->left);
//       postorder(root->right);
//       cout<<root->data<<" ";
//    }
// }







// struct node* insertNode(struct node* node, int val) {
//    if (node == NULL) return createNode(val);
//    if (val < node->data)
//    node->left = insertNode(node->left, val);
//    else if (val > node->data)
//    node->right = insertNode(node->right, val);
//    return node;
// }
// int main() {
//    struct node *root = NULL;
//    root = insertNode(root, 4);
//    insertNode(root, 5);
//    insertNode(root, 2);
//    insertNode(root, 9);
//    insertNode(root, 1);
//    insertNode(root, 3);
//    cout<<"In-Order traversal of the Binary Search Tree is: "<<endl;;
//    inorder(root);
//    cout<<"Pre-order traversal of the Binary Search Tree is: "<<endl;
//    preorder(root);
//    cout<<"Post order traversal of the Binary Search Tree is: "<<endl;;
//    preorder(root);
//    return 0;
// }


#include<iostream>
#include<stack>
using namespace std;

struct Node{
   Node* left;
   int data;
   Node* right;

   Node(int data)
   {
      this->data=data;
      this->left=NULL;
      this->right=NULL;
   }
};
// void inorder(struct Node* root) {
//    if (root != NULL) {
//       inorder(root->left);
//       cout<<root->data<<" ";
//       inorder(root->right);
//    }
// }
void inorderIterative(Node*root)
{
   stack<Node*>stack;
   Node *curr=root;
   while(!stack.empty()||curr!=NULL)
   {
      if(curr!=NULL)
      {
         stack.push(curr);
         curr=curr->left;
      }
      else
      {
         curr=stack.top();
         stack.pop();
         cout<<curr->data<<" ";
         curr=curr->right;
      }
   }
}
// void preorder(struct Node* root)
// {
//    if(root!=NULL)
//    {
//       cout<<root->data<<" ";
//       preorder(root->left);
//       preorder(root->right);

//    }
// }
void preorderIterative(Node*root)
{
   if(root=NULL)
   return;

   stack<Node*>stack;
   stack.push(root);
   while(!stack.empty())
   {
      Node*curr=stack.top();
      stack.pop();
      cout<<curr->data<<" ";
      if(curr->right)
       stack.push(curr->right);
       if(curr->left)
       stack.push(curr->left);

   }
}
// void postorder(struct Node* root)
// {
//    if(root!=NULL)
//    {
//       postorder(root->left);
//       postorder(root->right);
//       cout<<root->data<<" ";
//    }
// }
void postorderIterative(Node*root)
{
   stack<Node*>stack;
   stack.push(root);
   stack<inti>out;
   while(!stack.empty())
   {
      Node*curr=stack.top();
      stack.pop();
      out.push(curr->data);
      if(curr->left)
      stack.push(curr->left);
      if(curr->right)
      stack.push(curr->right);
   }
   while(!out.empty())
   {
      cout<<out.top()<<" ";
      out.pop();
   }
}

int main()
{
   Node* root=new Node(2);
   root->left=new Node(4);
   root->right=new Node(1);
   root->left->left=new Node(7);
   root->right->left=new Node(8);
   root->right->right=new Node(3);

   cout<<"In order traversal of Binary tree is:";
   inorder(root);
   
   cout<<"Pre Order traversal of Binary tree is:";
   preorder(root);
   
   cout<<"post ordertraversal of Binary tree is:";
   postorder(root);
   

}