#include<stdio.h>
#define MAX 50

int queue_array[MAX];
int rear = -1;
int front = -1;
void quit();
main()
{
    int choice;
    while(1)
    {
        printf("\ninsert the elements press 1\n");
        printf("\ndelete the elements press 2\n");
        printf("\ndisplay the elements press 3\n");
        printf("\n Quit for queue 4\n");
        printf("\nEnter the choice : ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:insert();
            break;
        case 2:delete();
            break;
        case 3:display();
            break;
        case 4:quit(1);
            break;
        
        default: printf("Wrong selection ");
            break;
        }
    }
}
int insert()
{
    int add_element;
    if(rear == MAX-1)
    {
        printf("queue id overflow ");
    }
    else
    {
        if(rear == -1)
        {
            front = 0;
            printf("insert the element ");
            scanf("%d",&add_element);
            rear = rear+1;
            queue_array[rear] = add_element;
        }
    }

}
int delete()
{
    if(rear == -1|| front>rear)
    {
        printf("queue is underflow ");
    }
    else
    {
        printf("delete element ");
        front = front+1;
    }

}
int display()
{
    if(rear == -1)
    {
        printf("queue id empty ");
    }
    else
    {
        printf("Queue is .. ");
        int i;
        for(i=1;i<rear;++i)
        {
            printf("%d ",queue_array[i]);
        }
    }

}