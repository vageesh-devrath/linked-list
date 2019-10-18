#include <stdio.h>
#include <stdlib.h>
struct node
{
	int info;
	struct node *next;
};
int main()
{
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
	while(temp!=NULL)
	{
	printf("data=%d\npresent address=%u\nnext address=%u\n\n",temp->info,temp,temp->next);
	temp=temp->next;
}


	return 0;

}
