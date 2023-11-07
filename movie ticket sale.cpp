#include<iostream>
using namespace std;
int main (){
	int sold_ticket_of_children,sold_ticket_of_adult,no_of_tickets,gross_amout,adult_ticket_price;
	int children_ticket_price,gross_amount,number_of_tickets_sold;
	float perctange,amout_donated,net_sale;
	string movie_name;
	cout<<"\t*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n";
	cout<<"Enter a Movie Name"<<endl;
	cin>>movie_name;
	cout<<"Enter a Adult Ticket Price"<<endl;
	cin>>adult_ticket_price;
	cout<<"Enter a Number Of Adult Tickets Sold "<<endl;
	cin>>sold_ticket_of_adult;
	cout<<"Enter a Children Ticket Price"<<endl;
	cin>>children_ticket_price;
	cout<<"Enter a Number Of Children Tickets Sold "<<endl;
	cin>>sold_ticket_of_children;
	cout<<"Enter a Perctange(%) Of Grass Amount";
	cin>>perctange;
	gross_amount=(adult_ticket_price*sold_ticket_of_adult)+(children_ticket_price*sold_ticket_of_children);
	number_of_tickets_sold=sold_ticket_of_adult+sold_ticket_of_children;
	amout_donated=(gross_amount*perctange)/100;
	net_sale=gross_amount-amout_donated;
	cout<<"\tMovie Name:............"<<movie_name<<endl;
	cout<<"\tNumber Of Tickets Sold:....."<<number_of_tickets_sold<<endl;	
	cout<<"\tGross Amount:.........$"<<gross_amount<<endl;
	cout<<"\tPerctange Of Grass Amout Donated:"<<perctange<<"%"<<endl;
	cout<<"\tAmout Donated:........$"<<amout_donated<<endl;
	cout<<"\tNet Sale:.............$"<<net_sale<<endl;
	
	cout<<"\t.........THANKU SO MUCH............."<<endl;
	return 0;
	
}
	
	
	
	
	
	
	
