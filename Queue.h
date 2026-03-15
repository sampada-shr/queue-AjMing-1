
#ifndef queue_h
#define queue_h
#include "Node.h"
class Queue {
	NodePtr headPtr,tailPtr;
	int size;
public:
  /*3. Modify enqueue here to take in 2 info*/
    void enqueue(int,int);
    int dequeue();
    Queue();
    ~Queue();
};


  /*4. Also odifiy enqueue here to take in 2 info*/
void Queue::enqueue(int x,int y){
 
  NodePtr new_node= new NODE(x,y);
if(new_node){ 
    /* Add head and tail for me please */
       if(size==0) headPtr=new_node;
       else tailPtr->set_next(new_node);
       tailPtr=new_node;
       size++;
	
 }
}

int Queue::dequeue(){
  if(size>0){
    
     NodePtr t=headPtr;
     headPtr=headPtr->get_next();
     /*5 Your node may need to have  get_price to track the price*/
     int v=t->get_price(); 
     if(headPtr==NULL) tailPtr=NULL;
     delete t;
     --size;
     return v;

  }
  cout<<"Empty queue";
  return -1;
}


Queue::Queue(){
    //initialize Queue
    headPtr=NULL;
    tailPtr=NULL;
    size=0;   
}

Queue::~Queue(){
      while(size>0) dequeue();
    //delete all remaning Queue (i.e. DQ all) 
    
}


#endif
