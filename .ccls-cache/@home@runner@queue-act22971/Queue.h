

typedef struct {
	 NodePtr headPtr,tailPtr;
	int size;
}Queue;


void enqueue_struct(Queue* q, int x,int y){
  Node *new_node=(Node*) malloc(sizeof(Node));
if(new_node){ 
  new_node->order_number = x;
  new_node->nextPtr = NULL;
  new_node->quantity = y;
  
  if(q->headPtr==NULL){q->headPtr = new_node;}
  else q->tailPtr->nextPtr=new_node;              
	   q->tailPtr =new_node;
 
q->size++;
  printf("My order is %d\n",x);
 }
  
}


int dequeue_struct(Queue *q){
   NodePtr t=q->headPtr;
    if(t){
  // int order_num= t->order_number;
   int quan = t->quantity;
   int price;//ราคาของลูกค้าคนนั้น
   int money;//เงินที่ลูกค้าจ่ายมา
   switch(t->order_number){
     case 1: printf("Ramen\n"); price = 100*quan; break;
     case 2: printf("Somtum\n"); price = 20*quan; break;
     case 3: printf("Fried chicken\n"); price = 50*quan; break;
     default:   printf("No food!!\n"); return 0;
   }
      printf("You have to pay for %d\n",price);
      do{
      printf("|C A S H|:");
      scanf("%d",&money);
      if((money-price)==0){ printf("Thank you\n");}   
      if((money-price)>0){ printf("the change is: %d\n",money-price); printf("Thank you\n");}
      if((money-price)<0){ printf("Not enough\n");}
        }while((money-price)<0);
      
     q->headPtr= t->nextPtr; 
     if(q->headPtr==NULL){q->tailPtr = NULL;}
     free(t);
      q->size--;
   return price;
   }
   printf("Empty queue\n");
   return 0;
}
int dequeue_all(Queue *q){
   NodePtr t=q->headPtr;
  printf("clearing all nodes\n");
    while(t)
    {q->headPtr= t->nextPtr; 
     if(q->headPtr==NULL){q->tailPtr = NULL;}
     free(t);
     }
   printf("Empty queue\n");
   return 0;
  
}
/*Instruction
1.Ramen 100 Baht

2.Somtum 20 Baht

3.Fried Chicken 50 Baht

*/