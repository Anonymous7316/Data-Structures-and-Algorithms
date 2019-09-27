#include<iostream>
using namespace std;
struct Node
{
	int data;
	Node *link;
}*head,*temp,*tail,*trav;
int d;
void create()
{
	if(head==NULL)
	{
		temp=new Node();
		cin>>d;
		temp->data=d;
		temp->link=NULL;
		head=temp;
		tail=temp;
	}
else if(head!=NULL)
	{
		tail=new Node();
		cin>>d;
		tail->data=d;
		tail->link=NULL;
		while(temp->link!=NULL)
		temp=temp->link;
		temp->link=tail;
		
	}
}
	
	void b_create()
{
	if(head==NULL)
	{
		temp=new Node();
		cin>>d;
		temp->data=d;
		temp->link=NULL;
		head=temp;
		tail=temp;
	}
else if(head!=NULL)
	{
		tail=new Node();
		cin>>d;
		tail->data=d;
		tail->link=head;
		head=tail;
		
	}
}
void traverse()
{
	trav=head;
	cout<<"\nLIST: ";
	while(trav->link!=NULL)
	{
		cout<<"->"<<trav->data;
		trav=trav->link;
	}
	cout<<"->"<<trav->data<<"\n";
}
int main()
{ 
cout<<"PRESS 'Y' TO CONTINUE OR 'N' TO EXIT!......";
char s;
cin>>s;
if(s=='y'||s=='Y')
{
while(s!='n'&&s!='N')
{
cout<<"----------------------------------------------------------\n";
cout<<"----------------LINKED LIST OPERATIONS!-------------------\n";
cout<<"----------------------------------------------------------\n\n\n\n";
cout<<"1. INSERT ELEMNT AT THE BEGINING.\n";
cout<<"2. INSERT ELEMNT AT THE LAST.[OR]TO CREATE A LIST.\n";
cout<<"3. INSERT ELEMNT AT THE DESIRED LOCATION.\n";
cout<<"4. DELETE ELEMNT AT THE BEGINING.\n";
cout<<"5. DELETE ELEMNT AT THE LAST.\n";
cout<<"6. DELETE ELEMNT AT THE DESIRED LOCATION.\n";
cout<<"7. EXIT.\n\n\n";
int p;
cout<<"ENTER YOUR CHOISE----->>";
cin>>p;
switch(p)
{
	case 1: 
	   cout<<"HOW MANY ELEMENTS DO YOU WANT TO ENTER?-->>\n";
	  int q;
	  cin>>q;
	  cout<<"DO YOU WANT TO ENTER ELEMENT IN THE LIST?\n";
	  char x;int y;
	  cin>>x;
	  switch(x)
	  {
	   case'y':
	     for(y=1;y<=q;y++)
	      {
		    b_create();
	      }
    	 traverse();
    	break;
       case'Y':
    
    	 for(y=1;y<=q;y++)
	     {
	     	b_create();
	     }
    	   traverse();
        	break;
		
    	case'n':
		
			cout<<"OKAY!";
			break;
		
	    case'N':
		
		  cout<<"OKAY!";
	    break;
	
	    default:
		  cout<<"INVALID INPUT!";
       }
	break;
	case 2:
      cout<<"HOW MANY ELEMENTS DO YOU WANT TO ENTER?-->>\n";
	  int n;
	  cin>>n;
	  cout<<"DO YOU WANT TO ENTER ELEMENT IN THE LIST?\n";
	  char c;int a;
	  cin>>c;
	  switch(c)
	  {
	   case'y':
	     for(a=1;a<=n;a++)
	      {
		    create();
	      }
    	 traverse();
    	break;
       case'Y':
    
    	 for(a=1;a<=n;a++)
	     {
	     	create();
	     }
    	   traverse();
        	break;
		
    	case'n':
		
			cout<<"OKAY!";
			break;
		
	    case'N':
		
		  cout<<"OKAY!";
	    break;
	
	    default:
		  cout<<"INVALID INPUT!";
       }
    break;
    case 3: 
	  cout<<"COMING SOON!";
	break;
	case 4: 
	  cout<<"COMING SOON!";
	break;
	case 5: 
	  cout<<"COMING SOON!";
	break;
	case 6: 
	  cout<<"COMING SOON!";
	break;
	case 7:
		s='N';
		break;
	default:
		cout<<"INVALID INPUT!";
	break;
   }
 }
}
	return 0;
}
