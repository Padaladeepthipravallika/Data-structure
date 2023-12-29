#include<stdio.h>
#define Max 50;
void insert();
void delete();
void display();
int queue_array[Max];
int rear=-1;
int front=-1;
int main()
{
	int choice;
	while(1)
	{
		printf("1.enter an elemnt to insert\n");
		printf("2.enter an element to delete\n");
		printf("3.enter an element to dispaly\n");
		printf("4.quit\n");
		printf("enter your choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				insert();
				break;
				case 2:
				delete();
				break;
				case 3:
					display();
					break;
					case 4:
						exit(1)
						default:
							printf("wrong choice\n");
						}
					}
				}
				void insert(int x)
				{
					if(rear>max-1)
					{
						printf("queue is full\n");
					}
					else
					rear=rear+1;
					queue[rear]=x;
				}
				void delete(int x)
				{
					if(front<0)
					{
						printf("queue is empty\n");
					}
					else
					x=queue[front];
				}
				if(front==rear)
				{
					front=0;
					rear=-1;
				}
				else
				front=front+1;
			}
			void display()
			{
				int i;
				if(front==-1)
				{
					printf("queue  is empty\n");
					else
					printf("queue is \n");
				}
				for(i=front;i<=rear;++i)
				{
					printf("%d",&queue -arr[i]);
				}
				
				}
			
