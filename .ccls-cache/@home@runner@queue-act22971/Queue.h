

typedef struct {
	 NodePtr headPtr,tailPtr;
	int size;
}Queue;


void enqueue_struct(Queue* q, int x,int y){
  Node *new_node=(Node*) malloc(sizeof(Node));
if(new_node){ 
  new_node->data = x;
  new_node->nextPtr = NULL;

  
  if(q->headPtr==NULL){q->headPtr = new_node;}
  else q->tailPtr->nextPtr=new_node;              
	   q->tailPtr =new_node;
     q->size++;
 }
  
}


int dequeue_struct(Queue *q){
   NodePtr t=q->headPtr;
    if(t){
   int value= t->data;
     q->headPtr= t->nextPtr; 
     if(q->headPtr==NULL){q->tailPtr = NULL;}
     free(t);
      q->size--;
   return value;
   }
   printf("Empty queue\n");
   return 0;
}

/*
void enqueue(NodePtr * head, NodePtr* tail, int x){
  Node* new_node=(NodePtr) malloc(sizeof(Node));
if(new_node){ new_node->data = x;
  new_node->nextPtr = NULL;
  if(*head==NULL){*head = new_node;}
  else (*tail)->nextPtr=new_node;              
	   *tail =new_node;


 }
}


int dequeue(NodePtr* head, NodePtr* tail){
  NodePtr t=*head;
  if(t){
   int value= t->data;
     *head= t->nextPtr; 
     if(*head==NULL){*tail=NULL;}
      
     free(t);
   return value;
   }
   printf("Empty queue");
   return 0;
}

*/