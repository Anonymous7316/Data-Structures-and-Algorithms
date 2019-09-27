#include <iostream>
using namespace std;
struct Node
{
	Node* left;
	int data;
	Node* right;
}*root,*temp;

int d=0;
int create(int data)
{
  if(root==NULL)
  {
  	root=new Node();
  	root->data=data;
  	root->left=NULL;
  	root->right=NULL;
  }
  else if(root!=NULL)
  {
  	temp=new Node();
  	temp->data=data;
  	temp->left=NULL;
  	temp->right=NULL;
  }
}
void addleaf(int key,Node* ptr)
{
	if(root==NULL)
	{
		create(key);
	}
	else if(key<ptr->data)
	{
		if(ptr->left!=NULL)
		{
			addleaf(key,ptr->left);
		}
		else
		{ 
		   create(key);
		   ptr->left=temp;
		}
	
	}
	else if(key>=ptr->data)
	{
		if(ptr->right!=NULL)
		{
			addleaf(key, ptr->right);
		}
		else
		{
			create(key);
		    ptr->right=temp;
		}
	}
}
void inorder(Node* root) 
{ 
    if (root != NULL) 
    { 
        inorder(root->left); 
        
        inorder(root->right); 
    } 
    
} 

int main()
{
	char c;int n;
	while(1)
	{
	 cout<<"DO YOU TO ADD ELEMENT IN THE TREE??\n";
	 cin>>c;
	 if(c=='y'||c=='Y')
	 {
	 	cout<<"\nENTER THE ELEMENT---->>\t\n";
	 	cin>>n;
	 	addleaf(n,root);
	 }
	 else if(c=='n'||c=='N')
	 {
	 	while(1)
	 	{
	 	cout<<"DO YOU WANT TO TRAVERSE??\n";
	 	cin>>c;
	 	 if(c=='y'||c=='Y')
	 	 {
	 	 inorder(root);	
		  }
		  else 
		  break;
	}
	 	break;
	 }
	 else
	 cout<<"WRONG INPUT!!"<<endl;
    }
}
