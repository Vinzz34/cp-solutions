/*
GROCERY MANAGEMENT

NAME : ANOUSHKA GUPTA
USN :  1MS21CI005

*/

#include<stdio.h>
#include<string.h>

// Structure for items in store
struct items{
	char name[50][20];//name of item
	int quantity;//quantity of item
	int price;//price of item
};

//Structure for items bought
struct bill{
	int sno;//serial no of item
	int quan;//quantity of the item bought
};

//Global variables
struct items s[100];
struct bill b[100];

int n=1,count=0;

//function to add items to stock
void stock(){
	int ch,i=0;
	printf("ENTER THE ITEMS IN STOCK...\n");
	while(1){
		printf("\nEnter the name of your %d item : ",i+1);
		scanf("%s",s[i].name);
		printf("\nEnter the quantity of %s in stock : ",s[i].name);
		scanf("%d",&s[i].quantity);
		printf("\nEnter the price of %s in Rs : ",s[i].name);
		scanf("%d",&s[i].price);
		printf("\nDo you want to continue ? (1-Yes/2-No) : ");  
		scanf("%d",&ch);
		if(ch==2){
			break;
		}
		else if(ch!=1){
			printf("\nInvalid choice\n");
			break;
		}
		i++;
		n++;
	}
}

//function to display menu
void menu(){
	printf("\n==========MAIN-MENU==========");
	printf("\n1.Buy an item");
	printf("\n2.Search item");
	printf("\n3.Add an item");
	printf("\n4.Calculate bill");
	printf("\n5.Pay");
	printf("\n6.Exit");
}

//function to buy items
void buyitem(){
	int ch;
	printf("\n================ITEM-LIST=================");
	printf("\n S.no       Item      Quantity       Price");
	for(int i=0;i<n;i++){
		printf("\n %d          %-10s%-3d            Rs %-4d",i+1,s[i].name,s[i].quantity,s[i].price);
	}
	while(1){
		printf("\nEnter the serial no of the item you want to buy : ");
		scanf("%d",&b[count].sno);
		if(b[count].sno>n){
			printf("\nInvalid Serail no!!!\n");
			continue;
		}
		if(s[count].quantity==0){
			printf("\nOut of stock\n");
			continue;
		}
		printf("\nEnter the quantity of %s you want to buy : ",s[b[count].sno-1].name);
		scanf("%d",&b[count].quan);
		s[count].quantity-=b[count].quan;
		printf("\nDo you want to continue ? (1-Yes/2-No) : ");
		scanf("%d",&ch);
		if(ch==2){
			break;
		}
		else if(ch!=1){
			printf("\nInvalid choice!!!");
			break;
		}
		count++;
	}
	printf("\n");
}

//function to search an item and check if it is in stock
void search(){
	char sh[20];
	printf("\nEnter the name of the item you want to search : ");
	scanf("%s",sh);
	int flag=0;
	for(int i=0;i<n;i++){
		if(strcmp(s[i].name,sh)==0 && s[i].quantity!=0){
				printf("\nItem : %s    Quantity : %d   Price : Rs %d",sh,s[i].quantity,s[i].price);
				flag=1;
				break;
		}
	}
	if(flag==0){
		printf("\n%s Out of stock",sh);
	}
	printf("\n");
}

//function to add an item to the current stock
void additem(){
	int ch,i=n;
	n++;
	while(1){
		printf("\nEnter the name of your %d item : ",i+1);
		scanf("%s",s[i].name);
		printf("\nEnter the quantity of %s in stock : ",s[i].name);
		scanf("%d",&s[i].quantity);
		printf("\nEnter the price of %s : ",s[i].name);
		scanf("%d",&s[i].price);
		printf("\nDo you want to continue ? (1-Yes/2-No) : ");
		scanf("%d",&ch);
		if(ch==2){
			break;
		}
		else if(ch!=1){
			printf("\nInvalid Choice!!!\n");
			break;
		}
		i++;
		n++;
	}
	printf("\n");
}

//function to calculate the bill
void calbill(){
	float tamount=0;
	printf("\n*********************BILL********************");
	printf("\nS.no       Item        Quantity         Price");
	for(int i=0;i<count+1;i++){
		printf("\n%d          %-10s %3d              Rs %4d",i+1,s[b[i].sno-1].name,b[i].quan,b[i].quan*s[b[i].sno-1].price);
		tamount+=b[i].quan*s[b[i].sno-1].price;
	}
	printf("\nTotal amount : Rs %0.2f",tamount);
	tamount+=0.1*tamount;
	printf("\nAfter tax : RS %0.2f",tamount);
	tamount-=0.15*tamount;
	printf("\nAfter 15%% discount : RS %0.2f",tamount);
	printf("\nTotal amount to be paid : Rs %0.2f\n",tamount);
}

//function for payment
void payment(){
	int pay,pin;
	printf("\n1.Card");
	printf("\n2.Cash");
	printf("\n3.UPI");
	printf("\nEnter the mode of payment : ");
	scanf("%d",&pay);
	if(pay==1){
		printf("\nInsert Card");
		printf("\nAuthenticating...");
		printf("\nEnter pin : ");
		scanf("%d",&pin);
		printf("\nPaid with card successfully!!!");
	}
	else if(pay==2){
		printf("\nPaid with cash successfully!!!");
	}
	else if(pay==3){
		printf("\nEnter UPI : ");
		printf("\nAuthenticating...");
		printf("\nEnter pin : ");
		scanf("%d",&pin);
		printf("\nPaid with UPI successfully!!!");
	}
	else{
		printf("\nInvalid choice");
	}
	printf("\n");
}

//main function
void main(){
	int ch;
	stock();
	while(1){
		menu();
		printf("\nEnter your choice : ");
		scanf("%d",&ch);
		if(ch==1){
			buyitem();
		}
		else if(ch==2){
			search();
		}
		else if(ch==3){
			additem();
		}
		else if(ch==4){
			calbill();
		}
		else if(ch==5){
			payment();
		}
		else if(ch==6){
			printf("\nExited successfully...\n");
			break;
		}
		else{
			printf("\nInvalid choice!!!\n");
		}
	}
}

//end
