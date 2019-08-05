#include<iostream>
using namespace std;

class DLL
{
	private: struct node
	{
		struct node *prev;
		int data;
		struct node *next;
	}*start,*end;
	
	public:
	
			DLL()
			{
				start = NULL;
				end = NULL;
			}
			
			void insert()
			{
				struct node *temp;
				
				temp = (struct node *)malloc(sizeof(struct node));
				
				if(temp == NULL)
				{
					cout<<"\nMemory allocation failed";
					return;
				}
				
				cout<<"\nEnter data:";
				cin>>temp->data;
				
				temp->prev = NULL;
				temp->next = NULL;
				
				if(start == NULL)
				{
					start = temp;
					end = temp;
				}
				
				else
				{
					struct node *t = start;

					while(t->next !=NULL)
					{
						t = t->next;
					}
					
					t->next = temp;
					temp->prev = t;
					
					end = temp;
				}
			}
			
			void disp()
			{
				struct node *t = start;
				
				if(t == NULL) 
				{
					cout<<"\nList is MT";
					return;
				}
				
				while(t != NULL)
				{
					cout<<endl<<t->data;
					t = t->next;
				}
				
				cout<<"\nStart - "<<start->data<<" End - "<<end->data<<endl;
			}
			
			void del()
			{
				struct node *l,*sl;
				
				l = end;
				sl = l->prev;
				
				l->prev = NULL;
				sl->next = NULL;
				
				end = sl;
				
				free(l);
			}
};

int main()
{
DLL l;

l.insert();
l.insert();
l.insert();

l.disp();

l.del();
l.disp();

return 0;
}

