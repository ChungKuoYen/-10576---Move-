#include<stdio.h>
#include <iostream>
#include <string>
using namespace std;
typedef struct node
{
    int data;
    struct node *next;
    struct node *prev;
}link;



int main()
{
    int N;
    scanf("%d",&N);
    link *curr,*tmp,*first;
    link *head = new link[N];
    curr=head;
    curr->data=1;
    curr->next=curr+1;
    curr->prev=NULL;

    curr=curr->next;
    for(int i=1;i<N-1;i++)
    {
        curr->data=i+1;
        curr->next=curr+1;
        curr->prev=curr-1;
        curr++;

    }
    curr->prev=curr-1;
    curr->next=NULL;
    curr->data=N;
    string command;
    int a,b,flag=1;
    first=head;
    while(cin>>command)
    {
        curr=head;

        if(command=="Move")
            {

             scanf("%d %d",&a ,&b);

                if(curr[a-1].next->data==b)
                    continue;

             curr[a-1].next->prev=NULL;
             curr[b-1].prev->next=first;
             first=curr[a-1].next;
             curr[a-1].next=&curr[b-1];
             curr[b-1].prev=&curr[a-1];


            }
        else
        {
            for(curr=first;curr!=NULL;curr=curr->next)
            {
                if(flag==1)
                {
                    printf("%d",curr->data);
                    flag=0;
                }
                else
                    printf(" %d",curr->data);

            }
                printf("\n");
        }
    }


}
