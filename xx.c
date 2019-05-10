#include<stdio.h>
#include<stdlib.h>
#define LEN sizeof(struct tree)
struct tree
{
    char data;
    struct tree *lchild, *rchild;
};

struct tree * precreat(struct tree *root)
{
    char ch;
    scanf("%c",&ch);
    if(ch=='#') root=NULL;
    else
        {
          root=(struct tree *)malloc(sizeof(LEN));
          root->data=ch;
          root->lchild=precreat(root->lchild);
          root->rchild=precreat(root->rchild);

        }
    return root;
}

void prepus(struct tree * root)
{
    if(root)
    {

        prepus(root->lchild);
        prepus(root->rchild);
        printf("%c",root);
    }

}


void midthread(struct tree *root)
{
    if(root)
{
    midpus(root->lchid);
    if(root->lchild==NULL)
    {
        root->lchild=pre;
        root->ltag==1;
    }
    else root->ltag==0;
    if(pre->rchild==NULL)
    {
        pre->rchild=root;
        pre->rtag==1;
    }
    else pre->rtag==0;
    root=pre;
    midthread(root->rchild);
}
}
int main()
{
   struct tree * root;
    pre = (struct tree *)malloc(LEN);
    root = inpush(root);
}









