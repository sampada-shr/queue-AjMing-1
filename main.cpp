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
            do{
               cout<<"Cash:";
              cin>>cash;
            }
            while(price>cash);
            cout<<"Thank you"<<endl;
            if(cash-price >0) cout<<"Here is your "<<cash-price<<" change."<<endl;

            cout<<"=============="<<endl;

        }
        else {
           if(i+1<argc) q.enqueue(atoi(argv[i]),atoi(argv[i+1]));
           i++;
           
        }
 }
  return 0;
}
