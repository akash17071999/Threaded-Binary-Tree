#include<iostream>
using namespace std;
struct node
{
	char data;
	node *l, *r; 
	int lth,rth;
};
class TBT
{

	public:
	node *dummy,*nn, *root;
	TBT()
	{
		dummy=new node;
		dummy->data=-100;
		dummy->l=dummy->r=NULL;
		dummy->lth=dummy->rth=0;
		root=NULL;
	}
	void create();
	void inor_tbt();
	void pre_rec();
	//void inor_nonrec(node *temp);
	/*void pre_rec(node *temp);
	void post_rec(node *temp);
	void search();		
	void modify();
	void delet();*/
};
int main()
{
	TBT t;
	int n;
	char x,c;
	do
	{
	cout<<"\nENTER \n 1 to enter new data \n 2 For Inorder Display \n 3 For Preorder Display \n 4 For Postorder Display \n  ";
	cin>>n;
	switch(n)
	{
		case 1:do
			{
			int j;
			cout<<"enter the no. of entries to be entered";
			cin>>j;
			for(int i=0;i<j;i++)
				t.create();
			cout<<"Do you want to enter more values(Y/n)";
			cin>>x;
			}while(x=='y'||x=='Y');
			break;
			
		case 2:t.inor_tbt();break;
		case 3:t.pre_rec();break;
		/*case 3:b.pre_rec(b.root);break;
		case 4:b.post_rec(b.root);break;
		case 5:b.search();
			break;
		case 6:b.modify();break;
		case 7:b.delet();break;	*/
		default:cout<<"Entered Value is WRONG";break;
	}
	cout<<"Do you want to continue(Y/n)";
	cin>>c;
	}while(c=='y'||c=='Y');
return 0;	
}
void TBT::create()
{
		
		nn=new node;
		cout<<"Enter The data:";
		cin>>nn->data;
		nn->lth=nn->rth=0;
		nn->l=nn->r=NULL;
		if(root==NULL)
		{
			root=nn;
			dummy->l=root;
			root->l=root->r=dummy;
		}
		else
		{
			node *temp, *parent;
			temp=root;
			while(temp!=NULL)
			{
				parent=temp;
				if(nn->data<temp->data)
				{
					if(temp->lth==1)
					temp=temp->l;
					else
					temp=NULL;
				
				}
				else
				{
					if(temp->rth==1)
					temp=temp->r;
					else
					temp=NULL;		
				}	
			}
		if(nn->data<parent->data)
		{
			nn->l=parent->l;
			nn->r=parent;
			parent->lth=1;
			parent->l=nn;
		}
		else
		{	
			nn->r=parent->r;
			nn->l=parent;
			parent->rth=1;
			parent->r=nn;		
		}
		}
}
void TBT::inor_tbt()
{
	node *temp;
	temp=root;
	while(1)
	{
		while(temp->lth==1)
		{
		temp=temp->l;
		}
		cout<<temp->data<<"\t";
		while(temp->rth==0)
		{
			if(temp->r==dummy)
			return;
			else
			temp=temp->r;
			cout<<temp->data<<"\t";
		}
		temp=temp->r;
	}
	
}
void BST::pre_rec()
{
        	node *temp;
        	temp=root;
        	while()
        	{
        		while(temp->lth==1)
        		{
        		cout<<temp->data;
        		temp=temp->l;
        		}
        	cout<<temp->data;
			while(temp->rth==0)
			{
			if(temp->r==dummy)
			return;
			else
			temp=temp->r;
				
			}
		temp=temp->r;
        	}
		}

