#include "Binary_tree.h"

BTree CreateHFMTree(T w[],int n)
{
    BTree zero,ht[MaxSize];
    int i,k,k1,k2;
    CreateBT(&zero);
    for(i=0;i<n;i++)MakeBT(&ht[i],w[i],&zero,&zero);
    for(k=n-1;k>0;k--)
    {
        Fmin(ht,&k1,&k2,k);
        MakeBT(&ht[k1],ht[k1].Root->Element+ht[k2].Root->Element,&ht[k1],&ht[k2]);
        ht[k2]=ht[k];
    }
    return ht[0];
}
