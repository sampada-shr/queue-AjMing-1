
#ifndef queue_h
#define queue_h
#include "Node.h"
class Queue {
	NodePtr headPtr,tailPtr;
	int size;
public:
    void enqueue(int,int);
    int dequeue();
    Queue();
    ~Queue();
};


void Queue::enqueue(int x,int y){
  cout<<"ENQ"<<endl;
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
     int v=t->get_price(); // TO RETREIVE the price
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
