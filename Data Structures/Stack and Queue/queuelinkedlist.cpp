#include"queuelinkedlist.h"

queue *NewQueue(){
	queue *qu=new queue;
	qu->front=NULL;
	qu->rear=NULL;
	return qu;
}

void Enqueue(queue *q, int value){
	nodeT *temp=NewNode();
	temp->data=value;
	temp->next=NULL;
	if(q->front==NULL && q->rear==NULL){
		q->rear=temp;
		q->front=temp;
	}else{
		temp->next=q->rear;
		q->rear=temp;
	}
	cout<<"New item inserted"<<endl;
}

int Dequeue(queue *q){
	if(q->front==q->rear){
		if(q->rear==NULL) cout<<"ERROR: Stack is empty."<<endl;
		else{
			//delete q->rear;
			cout<<"Old value at the top: "<<q->rear->data<<endl;
		q->rear=NULL;
		q->front=NULL;
		return 2048;
		}
	}
	else{
		nodeT *temp=q->rear;
		while(temp->next!=q->front){
			temp=temp->next;
		}
		q->front=temp;
		q->front->next=NULL;
		return q->front->data;
	}
	return 9415;
}

void EmptyQueue(queue *q){
	if(q->rear==NULL) cout<<"Queue is already empty."<<endl;
	else{
		q->rear=NULL;
		q->front=NULL;
		cout<<"Queue is now empty."<<endl;
	}
}

void FreeQueue(queue *q){
	if(isEmpty(q)){
		delete q;
		cout<<"The memory space for Queue has been emptied."<<endl;
	}
	else{
		cout<<"The Queue is not empty. Empty it first before freeing up space."<<endl;
	}
}

bool isEmpty(queue *q){
	if(q->front==q->rear&&q->rear==NULL) return true;
	return false;
}


nodeT *NewNode(){
	nodeT *node=new nodeT;
	return node;
}

void display(queue *q){
	if(q->front==NULL){
        cout<<"Nothing to Display"<<endl;
    }else{
        cout<<"\nThe contents of Queue are:\n";
        queue *p=NewQueue();
        p->rear=q->rear;
		p->front=q->front;
		if(p->rear==p->front) cout<<p->rear->data<<endl;
        else{
        	while(p->rear!=p->front){
            cout<<p->rear->data<<endl;
            p->rear = p->rear->next;
        }cout<<p->rear->data<<endl;
		}
    }
}


int main(){
	queue *q=NewQueue();

int choice, counter=1;								// To clear the screen and print initial message
        cout<<endl;
        cout<<""<<endl;
        cout<<"enter your choice to perform the action"<<endl<<endl;
	cout<<"press 0 to exit"<<endl;
	cout<<"press 1 to enqueue"<<endl;
	cout<<"press 2 to dequeue"<<endl;
	cout<<"press 3 to display the queue"<<endl;
    cout<<"press 4 to empty the queue"<<endl;
    cout<<"press 5 to free a queue"<<endl;
    cout<<"press 6 to check if queue is empty"<<endl;
    cout<<"press 7 to exit the loop"<<endl;
    while(1)										// Infinite Loop
    {
        cout<<"Enter your choice(1-4): "<<endl;
        cin>>choice;
        switch(choice)								// Switch to implement user input
        {
            case 1:
            	int value;
            	cout<<"Enter value to be enqueued."<<endl;
            	cin>>value;
                Enqueue(q, value);					// Calling Enqueue to add value in Queue 
                break;
            case 2:
            	int result;
                result=Dequeue(q);
                if(result!=9415&&result!=2048)		// Check if Queue is empty. If not Dequeue the front node
                cout<<"New value at the front: "<<result<<endl;
                else cout<<"No element left in the queue"<<endl;
                break;
            case 3:
                display(q);
                break;
            case 4:
            	EmptyQueue(q);
            	break;
            case 5:
            	FreeQueue(q);
            	break;
            case 6:
            	bool cic;
				cic=isEmpty(q);
            	if(cic) cout<<"Queue is empty."<<endl;
            	else cout<<"Queue is not empty."<<endl;
            	break;
            case 7:
                return 0;
                break;
                case 0:
                	system("cls");
			cout<<"enter your choice to perform the action"<<endl<<endl;
			cout<<"press 0 to exit"<<endl;
			cout<<"press 1 to create a queue data structure"<<endl;
			cout<<"press 2 to push an element in queue"<<endl;
  			cout<<"press 3 to pop an element from queue"<<endl;
  			cout<<"press 4 to check if queue is empty"<<endl;
    		cout<<"press 5 to display the queue"<<endl;
   			cout<<"press 6 to free a queue"<<endl;
   			cout<<"press 7 to empty the queue"<<endl;
				break;
        }
    }
system("pause");
return 0;
}
