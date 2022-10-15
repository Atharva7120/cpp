#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;

struct treeNode
{
    int data;
    treeNode*left;
    treeNode*right;
};

treeNode*Insert(treeNode*node,int data)
{
    if(node==NULL)
    {
        treeNode*temp;
        temp=new treeNode;
        temp->data=data;
        temp->left=temp->right=NULL;
        return temp;
    }
    if(data>(node->data))
    {
        node->right=Insert(node->right,data);
    }
    else if(data<(node->data))
    {
        node->left=Insert(node->left,data);
    }
    return node;
}
treeNode*FindMin(treeNode*node)
{
    if(node==NULL)
    {
        return NULL;
    }
    if(node->left)
     return FindMin(node->left);
    else
    return node;

}
treeNode*FindMax(treeNode*node)
{
    if(node==NULL)
    {
        return NULL;
    }
    if(node->right)
     return FindMin(node->right);
    else
    return node;

}
treeNode*Delet(treeNode*node,int data)
{
    treeNode*temp;
    if(node==NULL)
    {
        cout<<"Element Not Found";
    }
    else if(data<node->data)
    {
        node->left=Delet(node->left,data);
    }
    else if(data>node->data)
    {
        node->right=Delet(node->right,data);
    }
    else
    {
        if(node->right&&node->left)
        {
            temp=FindMin(node->right);
            node->data=temp->data;
            node->right=Delet(node->right,temp->data);
        }
        else
        {
            temp=node;
            if(node->left==NULL)
            node=node->right;
            else if(node->right==NULL)
            node=node->left;
        }

    }
    return node;
}
treeNode*Find(treeNode*node,int data)
{
    if(node==NULL)
    {
        return NULL;
    }
    if(data>node->data)
    {
        return Find(node->right,data);
    }
    else if(data<node->data)
    {
        return Find(node->left,data);
     }
     else
     {
         return node;

     }
}
void Inorder(treeNode*node)
{
    if(node==NULL)
    {
        return;
    }
    Inorder(node->left);
    cout<<node->data<<" ";
    Inorder(node->right);
}
void Preorder(treeNode*node)
{
    if(node==NULL)
    {
        return;
    }
    cout<<node->data<<" ";
    Preorder(node->left);
    Preorder(node->right);
}
void Postorder(treeNode*node)
{
    if(node==NULL) 
    {
        return;
    }
    Postorder(node->left);
    Postorder(node->right);
    cout<<node->data<<" ";
}
void display(treeNode*node)
{
    if(node==NULL)
    {
        return;
    }
    Inorder(node->left);
    if(node->left==NULL &&node->right==NULL)
    cout<<node->data<<" ";
    Inorder(node->right);
}
int main()
{
    treeNode*root=NULL,*temp;
    int ch;
    while(1)
    {
        cout<<"\n1.Insert\n2.Delete\n3.Inorder\n4.Preorder\n5.Postorder\n6.Search\n7.Display leaf nodes\n8.Exit\n";
        cout<<"Enter your choice:";
        cin>>ch;
        switch(ch)
        {
            case1:
            cout<<"\nEnter element to be insert:";
            cin>>ch;
            root=Insert(root,ch);
            cout<<"\nElements in BST are:";
            Inorder(root);
            break;
            case2:
            cout<<"\nEnter element to be deleted:";
            cin>>ch;
            root=Delet(root,ch);
            cout<<"\nAfter deletion elements in BST are;";
            Inorder(root);
            break;
            case3:
            cout<<"\nInorder Traversal is:";
            Inorder(root);
            break;
            case4:
            cout<<"\nPreorderTraversal is:";
            Preorder(root);
            break;
            case5:
            cout<<"\nPostorder Traversal is:";
            Postorder(root);
            break;
            case6:
            cout<<"\nEnter element to be searched:";
            cin>>ch;
            temp=Find(root,ch);
            if(temp==NULL)
            {
                cout<<"Element is not found";
            }
            else
            {
                cout<<"Element    "<<temp->data<<"     is found\n ";
            }
            break;
            case7:
            display(root);
            break;
            case8:
            exit(0);
            break;
            default:
            cout<<"\nEnter correct choice:";
            break;
        }
    }
    return 0;
}


