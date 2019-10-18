# Linked-List
## Aim:-Implemention Of Linked Lists
### Theory:-
            A linked list is a sequence of data structures, which are connected together via links. Linked List is a sequence of links                 which contains items. Each link contains a connection to another link. Linked list is the second most-used data structure after             array.
#### Algoritm:-
                1)Start
                2)struct node
	                  int info;
	                  struct node *next;
                3)int main()
	                  struct node *p1,*p2,*p3,*temp;
	                  p1=(struct node*)malloc(sizeof(struct node));
                              p2=(struct node*)malloc(sizeof(struct node));
                              p3=(struct node*)malloc(sizeof (struct node));
                              p1->info=20;
                              p2->info=30;
                              p3->info=45;
                              p1->next=p2;
                              p2->next=p3;
                              p3->next=NULL;
                              temp=p1;
                 4)while(temp!=NULL)
                 5)printf("data=%d\npresent address=%u\nnext address=%u\n\n",temp->info,temp,temp->next);
                   temp=temp->next;
                 6)End
##### Conclusion:-
                  From this program we learnt hoe to implement od use linked lists in c
