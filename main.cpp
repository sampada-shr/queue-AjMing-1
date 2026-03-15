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

            if(price==0)
            {cout<<"We don't have that food. You don't have to pay."<<endl;}

            else if (price!=-1){
              cout<<"You have to pay "<<price<<endl;
            /* 1.Ask the customer to pay*/
            while(1){
              cout<<"Cash: ";
              int paid;
              cin>>paid;
              if (paid >= price) {
                cout<<"Thank you"<<endl;
                if (paid > price) {
                    cout << "Here is your " << paid - price << " change." << endl;
                }
                break; 
              } 
              else continue;
            }
            }

            cout<<"=============="<<endl;

        }
        else {
           /* 2.MODIFIED enqueue here to take in 2 info at a time*/
            q.enqueue(atoi(argv[i]),atoi(argv[i+1]));
            i++;
        }
 }

  cout<<"The shop is closed. There are "<<q.get_size()<<" left."<<endl;
  return 0;
}
