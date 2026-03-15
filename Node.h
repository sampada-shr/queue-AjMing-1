#ifndef node_h
#define node_h
#include <string>

/*6 You can put your menu list here*/
  string menu[] ={"Ramen","Somtum","Fried Chicken"};
  int price[]= {100,20,50};

class NODE{
    /*7 detail on node details*/
     int ord,qty;
    NODE *nextPtr;
public:

    NODE(int,int);
    ~NODE();
    void set_next(NODE*);
    NODE* get_next();
    int get_value();
     int get_price();/* ADDITIONAL FUNCTION */
};
typedef NODE* NodePtr;



NODE::NODE(int x,int y){
    ord=x;
    qty=y;
    nextPtr=NULL;
}
NODE* NODE::get_next(){
    return nextPtr;
}

int NODE::get_value(){
    return ord;
}



/* Your menu choice*/
int NODE::get_price(){

    
  if(ord<= sizeof(price)/sizeof(int)){
         cout<<menu[ord-1]<<endl;
         return price[ord-1]*qty;
  }
  else 
  cout<<"No Food"<<endl;

  return 0;
}


void NODE::set_next(NODE *t){
     nextPtr=t;

}
NODE::~NODE(){
     cout<<"dequeing "<<ord<< " Got: "<<menu[ord-1]<<endl;

}






#endif
