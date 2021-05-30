//traversing ,insertion and deletion in queue-experiment(4).
#include<stdio.h>
#include<conio.h>
#define size 200
typedef struct queue
{
    int front,rear;
    int element[size];
}queue;
//function declaration.
void create_queue(queue *);
void display_content(queue *);
void insert(queue *,int);//enqueue data.
int delete(queue *,int);//dequeue data.
//function declaration ends.
//main function start.
int main(){
    int item,choice;
    queue q;
    create_queue(&q);
    printf("Program shows working of queue using array.");
    do{
        printf("\nMenu:-");
        printf("\n1.Insert or enqueue:-");
        printf("\n2.Delete or dequeue:-");
        printf("\n3.Exit");
        printf("\nEnter your choice:");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
        if(q.rear>=size){
            printf("\nQueue if full!");
            continue;
        }
        else{
            printf("\nEnter data to be insert:");
            scanf("%d",&item);
            insert(&q,item);
            printf("\nElement of queue are:");
            display_content(&q);
            continue;
        }
        case 2:
        delete(&q,item);
        if(q.front==0){
            continue;
        }
        else{
            printf("\nElements in queue are:");
            display_content(&q);
            continue;
        }
        case 3:
        printf("\nFinish.");
        }
    }while (choice != 3);
    return 0;
}
//creating an empty queue.
void create_queue(queue *q){
    q->front=0;
    q->rear=0;
}
//inserting an item in queue.
void insert(queue *q,int item){
    if(q->rear>=size){
        printf("\nQueue if full.");
    }
    if(q->front==0){
        q->front=1;
        q->rear=1;
    }else{
        q->rear+=1;
    }
    q->element[q->rear]=item;
}
//deleting element from queue.
int delete(queue *q,int item){
    if(q->front==0){
        printf("\nQueue if empty.");
    }else{
        item=q->element[q->front];
        printf("\nElement %d is removed.",item);
    }
    if(q->front==q->rear){
        q->front=0;
        q->rear=0;
        printf("\nEmpty queue.");
    }
    else{
        q->front+=1;
    }
    return item;
}
//display the content of queue.
void display_content(queue *q){
    for(int i=q->front;i<=q->rear;i++){
        printf("%d",q->element[i]);
        printf(" ");
    }
    printf("\n\n");
}
