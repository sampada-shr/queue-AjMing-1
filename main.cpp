#include <iostream>
#include <cstring>
using namespace std;
#include "Queue.h"

int main(int argc , char **argv) {
  Queue q;
   int i,x;
   

 for(i=1;i<argc;i++){
      int price,cash;
        if(strcmp(argv[i],"x")==0){
            price=q.dequeue();
            cout<<"You have to pay "<<price<<endl;
            /* 1.Ask the customer to pay*/
            while(1){
              cout<<"Cash: ";
              int paid;
              cin>>paid;
              if (paid==price) break;
              else 
            }

            cout<<"=============="<<endl;

        }
        else {

           /* 2.MODIFIED enqueue here to take in 2 info at a time*/
          /* make a loop till the argc ends 
           make sure we get both the order and the quantity
           put it in the queue/ join nodes
           use the getprice funtion to return the price to the user*/

          /* if (atoi(argv[i])!=1 || atoi(argv[i])!=2 || atoi(argv[i])!=3){
            cout<<"We don't have that order. You don't have to pay."<<endl;
           }*/
           
            q.enqueue(atoi(argv[i]),atoi(argv[i+1]));
            i++;
        }
 }
  return 0;
}
