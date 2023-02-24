#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Node.h"

#include "Queue.h"

int main(int argc , char **argv) {
  NodePtr headPtr=NULL;
   NodePtr tailPtr=NULL;
/* For struct Queue*/
  Queue  q;
   q. headPtr=NULL;
   q.tailPtr=NULL;
   q.size=0;

   int i,x,y=1;//x=ราคาที่ต้องจ่าย  y=คิวลูกค้า
   

 for(i=1;i<argc;i++){
        if(strcmp(argv[i],"x")==0){
           printf("Customer No: %d\n",y);
            dequeue_struct(&q);
          y++;
        }
        else {
       enqueue_struct(&q, atoi(argv[i]), atoi(argv[i+1]));
           i++;
        }
 }
   printf("===========================================================\n");
  if(q.size!=0) {
    if(q.size==1)printf("There is %d customers left in the queue\n",q.size);
    else printf("There are %d customers left in the queue\n",q.size);
    } if(q.size==0)printf("There is no one left\n");
  
  dequeue_all(&q);
  return 0;
}
/*Instruction
1.Ramen 100 Baht

2.Somtum 20 Baht

3.Fried Chicken 50 Baht
./q 1 2 3 2 x 3 2 x
*/