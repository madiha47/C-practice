#include<stdio.h>

int main()
{
	char name[50];
	int phone_number;
	int customer_id;

	int body_soap;
	int hair_cream;
	int hair_spray;
	int body_spray;

	int sugar;
	int tea;
	int coffee;
	int rice;
	int wheat;

	int pepsi;
	int sprite;
	int coke;
	int moijtos;
	int thumbs_up;

	int total;
	int cosmetics_total;
	int grocery_total;
	int beverage_total;

	printf("====================");
	printf("Billing System\n");
	printf("====================");
	printf("Customer Details\n\n");

	printf("Customer Name:");
	scanf("%s", &name);
	printf("customer number:");
	scanf("%d",&phone_number);
	printf("customer id:");
	scanf("%d",&customer_id);
	
	printf("---------------------\n");
	
	printf("Cosmetics\n\n");
	
	printf("body soap(rs 10)");
	scanf("%d",&body_soap);
	printf("Hair cream(rs 25)");
	scanf("%d",&hair_cream);
	printf("Body spray(rs 50)");
	scanf("%d",&body_spray);
	printf("Hair spray(rs 50)");
	scanf("%d",&hair_spray);

	printf("--------------------\n");
	printf("Groceries\n\n");

	printf("sugar(rs 100):");
	scanf("%d",&sugar);
	printf("Tea (rs 15)");
	scanf("%d",&tea);
	printf("coffee (rs 50)");
	scanf("%d",&coffee);
	printf("rice (rs 150)");
	scanf("%d",&rice);
	printf("wheat (rs 160)");
	scanf("%d",&wheat);
	printf("-----------------------\n");

	printf("Beverages\n\n");

	printf("pepsi (rs 30)");
	scanf("%d",&pepsi);
	printf("sprite (rs 35)");
	scanf("%d",&sprite);
	printf("coke (rs 30)");
	scanf("%d",&coke);
	printf("-----------------------\n");

	printf("---------------------\n");
	
	int boso;
	int hc;
	int hs;
	int bosp;

	boso=10*body_soap;
	hc=25*hair_cream;
	hs=50*hair_spray;
	bosp=50*body_spray;
	cosmetics_total=boso+hc+hs+bosp;

	printf("Body Soap");
	printf("%d rs\n", boso);
	printf("Hair cream:");
	printf("%d rs\n",hc);
	printf("Hair Spray:");
	printf("%d rs\n",hs);
	printf("body spray:");
	printf("%d rs\n",bosp);
	printf("Total cosmetic price:");
	printf("%d rs\n",cosmetics_total);
	printf("---------------------\n");

	int s; 
	int t;
	int c;
	int r;
	int w;

	s=100*sugar;
	t=15*tea;
	c=50*coffee;
	r=150*rice;
	w=160*wheat;
	grocery_total=s+t+c+r+w;

	printf("sugar:");
	printf("%d rs\n",s);
	printf("tea:");
	printf("%d rs\n",t);
	printf("coffee:");
	printf("%d rs\n",c);
	printf("rice:");
	printf("%d rs\n",r);
	printf("wheat:");
	printf("%d rs\n",w);
	printf("Total Grocery price:");
	printf("%d rs\n", grocery_total);

	printf("--------------------\n");

	int pep;
	int spr;
	int cok;

	pep=30*pepsi;
	spr=35*sprite;
	cok=30*coke;
	beverage_total=pep+spr+cok;

	printf("pepsi:");
	printf("%d rs\n", pep);
	printf("sprite:");
	printf("%d rs\n",spr);
	printf("coke");
	printf("%d rs\n",cok);
	printf("total beverage price:");
	printf("%d rs\n", beverage_total);

	printf("-----------------------\n");

	total= cosmetics_total+grocery_total+beverage_total;

	printf("Total Amount:");
	printf("%d rs\n",total);

	printf("---------------------\n");

	printf("---------------------------------\n");

	printf("Amar super market\n");

	printf("customer name:\n");
	printf("%s\n",name);
	printf("customer phone number:\n");
	printf("%d\n", phone_number);
	printf("customer id:\n");
	printf("%d\n",customer_id);


	printf("product Name                  Quantity                  price\n");
	printf("=====================================================================\n");
	printf("Body soap			%d 			%d\n",body_soap,boso);
	printf("Hair cream                      %d                      %d\n",hair_cream,hc);                
	printf("hair spray                      %d                      %d\n",hair_spray,hs);
	printf("body spray                      %d                      %d\n",body_spray,bosp);
	printf("sugar                           %d 			%d\n",sugar,s);
	printf("tea                             %d			%d\n",tea,t);
	printf("coffee                          %d			%d\n",coffee,c);
	printf("rice                            %d 			%d\n",rice,r);
	printf("wheat                           %d			%d\n",wheat,w);
	printf("pepsi 				%d			%d\n",pepsi,pep);
	printf("sprite 				%d			%d\n",sprite,spr);
	printf("coke 				%d			%d\n",coke,cok);

	printf("Grocery Total price: %d\n\n",grocery_total);

	printf("cosmetic total price:%d\n\n",cosmetics_total);

	printf("beverage total price:%d\n\n",beverage_total);
	
	printf("------------------------------------------\n");
	
	printf("Total price:%d\n\n",total);

	printf("------------------------------------------\n");

	return 0;
}




