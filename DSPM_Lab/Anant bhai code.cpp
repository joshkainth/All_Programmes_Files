#include<iostream>
using namespace std;

main()
{
	int size = 5;
	int arr[size],top=-1,element,i,value;
	char choice;
	//cout<<"enter the elements in the array"<<endl;
	//cout<<"enter your choice if you want to do push operation  'y' for yes 'n' for no"<<endl;
	//cin>>choice;
	cout<<endl;
	while(size>0)
{
		cout<<"enter your choice if you want to do push operation  'y' for yes 'n' for no "<<endl<<"enter your choice if you want to do pop operation 'Y' for YES and 'N' for NO "<<endl;
	    cin>>choice;
	    cout<<endl;
	switch(choice)
	 {
	    case 'y':
		 {
		
	          cout<<"enter the value to be pushed "<<endl;
	           cin>>element;
	           cout<<endl;
	           if(top >= size-1)
	           {
		         cout<<endl<<"stack is overflow";
	           }
	          else
	           {
		          top++;
		          arr[top]=element;
	           }
        }
        	break;

    	case 'n':{
	       cout<<"new array after push operation is:-"<<endl;
	        for(i=top;i>=0;i--){
		        cout<<arr[i]<<"\t";
	         }
	           size =0 ;
        }
        	break;
   		case 'Y':
         {
	        cout<<"enter the element to be poped out of the stack"<<endl;
	         cin>>value;
	          cout<<endl;
	          if(top<=-1)
	           {
	 
                  cout<<"Stack Underflow"<<endl;
              }
             else 
             {
                value = arr[top];	  
                 top--;
             }
         }
         	break;
        case 'N':
          {
	        //cout<<"new array after pop operation is:-"<<endl;
	        for(i=top;i>=0;i++)
	         {
		       cout<<arr[i]<<"\t";
		
	         }
	           size = 0;
         }
          break;
        default: cout <<"invalid choice";
        	break;
       }
   }
}

