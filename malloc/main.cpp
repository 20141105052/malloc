//
//  main.cpp
//  malloc
//
//  Created by 20141105052 on 15/11/18.
//  Copyright (c) 2015年 20141105052. All rights reserved.
//

#include <iostream>
#define N 5

int main(int argc, const char * argv[]) {
    // insert code here...
    int *a;
    int i,j;
    //int N;
    int temp;
    //scanf("%d",&N);
    //a=(int *)malloc(N*4);
    a=new int[N];
    if(a==0)
        exit(0);
    for(i=0;i<N;i++)
        scanf("%d",&a[i]);
    for(i=0;i<N-1;i++)
    {
        for(j=0;j<N-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(i=0;i<N;i++)
        printf("%d\n",a[i]);
    delete a;
    return 0;
}