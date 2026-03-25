#include<iostream>
struct BinaryTree
{
    int v;
    BinaryTree* left,* right;
};
void get_son(int l,int r,int n,BinaryTree* f,int* preOrder,
    int* inOrder,int &cnt)
{
    f->left=f->right=NULL;
    for(int i=n-1;i>l;--i)
    {
        if(inOrder[i]==preOrder[cnt])
        {
            f->left=new BinaryTree;
            f->left->v=preOrder[cnt];
            get_son(l,n,i,f->left,preOrder,inOrder,++cnt);
            break;
        }
    }
    for(int i=n+1;i<r;i++)
    {
        if(inOrder[i]==preOrder[cnt])
        {
            f->right=new BinaryTree;
            f->right->v=inOrder[i];
            get_son(n,r,i,f->right,preOrder,inOrder,++cnt);
            break;
        }
    }
}
void P(BinaryTree* root,int* outOrder,int& cnt) 
{  
    outOrder[cnt++]=root->v;
    if(root->right)P(root->right,outOrder,cnt);
    if(root->left)P(root->left,outOrder,cnt);
}
void solve(int n,int* preOrder,int* inOrder,int* outOrder)
{
    BinaryTree* root=new BinaryTree;
    int cnt=0;
    root->v=preOrder[0];
    for(int i=0;i<n;i++)
        if(preOrder[cnt]==inOrder[i])
        {
            get_son(-1,n,i,root,preOrder,inOrder,++cnt);
            break;
        }
    cnt=0;
    P(root,outOrder,cnt);
}
