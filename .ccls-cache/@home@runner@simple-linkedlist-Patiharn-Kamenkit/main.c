//
//  main.c
//  simple linkedlist
//
//  Created by Mingmanas Sivaraksa on 4/2/2566 BE.
//

#include <stdio.h>
#include <stdlib.h>
#include "node.h"

int main(int argc, const char * argv[]) {
    int c=5;
    struct node a,b,x,z,*head ;
    head=&z;
    z.next=&a;
    z.value=2;
    
    a.value = c;
    a.next=&b;
    head=&z;
    b.value=head->next->value+3;
    
    //printf("%d\n", head ->value ); //what value for 5
    //printf("%d\n", head ->next->value ); //what value for 8
/*  Exercise I
    1. Add 1 more than at the end
    2. Add value(11)
    3. Make next become NULL
 */
    b.next=&x;
    x.value=11;
    x.next=NULL;
    //printf("%d\n", head ->next->next->value );
    
/*  Exercise II
        1. Add 1 more than at the begining!!!!
        2. Add value (2)
        
*/
    /*printf("%d\n", head ->value );
    printf("%d\n", head ->next->value );
    printf("%d\n", head ->next->next->value );
    printf("%d\n", head ->next->next->next->value );*/
    
  
    typedef struct node* NodePtr;
    NodePtr tmp=head; //add temp value to faciliate
        
    /*  Exercise III Use loop to print everything
        int i,n=5;
        for(i=0;i<n;i++){
            printf("%3d", tmp->value);
          // What is missing???
        }
    */
        int i,n=4;
        for(i=0;i<n;i++){
        printf("%3d->", tmp->value);
          tmp=tmp->next;
        }
        printf("NULL\n");
   /*  Exercise IV change to while loop!! (you can use NULL to help)
       
         while(){
            printf("%3d", tmp->value);
           // What is missing???
        }
    */
      tmp=head;
      while(tmp!=NULL){
            printf("%3d ->", tmp->value);
            tmp=tmp->next;
           // What is missing???
        }
      printf("NULL\n");
        
 /*  Exercise V Use malloc to create all nodes, instead of create a struct!!
         //use a loop to help
          
     */
    typedef struct node Node;
    typedef Node* NodePtr;
  
    NodePtr p= (NodePtr) malloc (sizeof(Node));
    head=p;
    p->value = c;
    for(i=0;i<=n;i++) {
      printf("%3d->",p->value);
      p->next=(NodePtr) malloc (sizeof(Node));
      p=p->next;
      p->value=c+i+1;
      p->next=NULL;
      }
    /*p->next= (NodePtr) malloc (sizeof(Node));
    p->next->value=head->value+3;

    p->next->next= (NodePtr) malloc (sizeof(Node));
    p->next->next->value=11;
    p->next->next->next=NULL;*/
    printf("NULL\n");
    /*  Exercise VI Free all node !!
         //use a loop to help
    
     */
      tmp=head;
      while(tmp!=NULL){
        head=tmp->next;
        printf("delete %3d->",tmp->value);
        free(tmp);
        tmp=head;      


      }
    
    return 0;
}
