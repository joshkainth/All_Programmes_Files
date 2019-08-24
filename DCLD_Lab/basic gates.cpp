#include<stdio.h>
int AND(int a, int b){
	if(a==0 && b==0)
		return 0;
	if(a==0 && b==1)
		return 0;
	if(a==1 && b==0)
		return 0;
	if(a==1 && b==1)
		return 1;
}
int OR(int a, int b){
	if(a==0 && b==0)
		return 0;
	if(a==0 && b==1)
		return 1;
	if(a==1 && b==0)
		return 1;
	if(a==1 && b==1)
		return 1;
}
int NAND(int a, int b){
	if(a==0 && b==0)
		return 1;
	if(a==0 && b==1)
		return 1;
	if(a==1 && b==0)
		return 1;
	if(a==1 && b==1)
		return 0;
}
int NOR(int a, int b){
	if(a==0 && b==0)
		return 1;
	if(a==0 && b==1)
		return 0;
	if(a==1 && b==0)
		return 0;
	if(a==1 && b==1)
		return 0;
}
int XOR(int a, int b){
	if(a==0 && b==0)
		return 0;
	if(a==0 && b==1)
		return 1;
	if(a==1 && b==0)
		return 1;
	if(a==1 && b==1)
		return 0;
}
int XNOR(int a, int b){
	if(a==0 && b==0)
		return 1;
	if(a==0 && b==1)
		return 0;
	if(a==1 && b==0)
		return 0;
	if(a==1 && b==1)
		return 1;
}

int main(){
	int a , b;
	printf("Enter the Input (0,1) : ");
	scanf("%d",&a);
	printf("Enter the Input (0,1) : ");
	scanf("%d",&b);
	
	printf("\n1. AND GATE \n");
	printf("2. OR GATE \n");
	printf("3. NAND GATE \n");
	printf("4. NOR GATE \n");
	printf("5. XOR GATE \n");
	printf("6. XNOR GATE \n");
	
	int choice,output;
	printf("Enter the Choice : ");
	scanf("%d",&choice);
	switch(choice){
		case 1: {
			output = AND(a,b);
			printf("Output : %d",output);
			break;
		}
		case 2: {
			output = OR(a,b);
			printf("Output : %d",output);
			break;
		}
		case 3: {
			output = NAND(a,b);
			printf("Output : %d",output);
			break;
		}
		case 4: {
			output = NOR(a,b);
			printf("Output : %d",output);
			break;
		}
		case 5: {
			output = XOR(a,b);
			printf("Output : %d",output);
			break;
		}
		case 6: {
			output = XNOR(a,b);
			printf("Output : %d",output);
			break;
		}
		default : printf("You have't entered the choice");
	}
}
