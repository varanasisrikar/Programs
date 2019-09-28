#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct queue
{
								int sno;
								char sname[20];
								int tmarks;
								struct queue* next;
} queue;
struct queue* front=NULL;
struct queue* rear=NULL;
struct queue* q;

void enqueue(int no,char name[],int marks)
{
								q=(struct queue*)malloc(sizeof(queue));
								q->sno=no;
								strcpy(q->sname,name);
								q->tmarks=marks;
								q->next=NULL;
								if(front) {
																rear->next=q;
																rear=rear->next;
								}
								else
								{
																front=q;
																rear=q;
								}
}

void dequeue()
{
								front=front->next;
}

void display()
{
								struct queue* disp=front;
								if(front==NULL) {
																printf("queue is empty\n");
								}
								else{

																while(disp!=NULL) {
																								printf("%d %s %d\n",disp->sno,disp->sname,disp->tmarks);
																								disp=disp->next;
																}
								}
}

int main()
{
								int i,n,id,marks;
								char sname[10];
								printf("Enter no.of students\n");
								scanf("%d",&n);
								for(i=0; i<n; i++) {
																printf("Enter id name marks\n");
																scanf("%d %s %d",&id,sname,&marks);
																enqueue(id,sname,marks);
								}
								printf("data in queue\n");
								display();
								dequeue();
								printf("after removing the front node\n");
								display();
}
