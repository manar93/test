#include<iostream.h>
#include<string.h>
struct preporty
{
	char name_preporty[50] ;
	float degree_preporty;
};
struct product
{
	int id;
	char name_product[100];
	int number_property;
	preporty* prep;
};
void main()
{
int numberproduct,imax,number_of_search_Property;
float maxdagree=0;
cout<<"please input number product  = "	;
cin>>numberproduct;
product* products=new product[numberproduct];
for(int i=0;i< numberproduct ;i++)
{
	cout<<"\ninput id product = ";cin>>products[i].id;
	cout<<"\ninput name   product = ";cin>>products[i].name_product;
	cout<<"\ninput number properties to product "<<products[i].name_product<<" = ";
	cin>>products[i].number_property;
	products[i].prep = new preporty[products[i].number_property];
	for(int j= 0;j<products[i].number_property;j++)
	{
		cout<<"\ninput name property "<<j+1<<" to "<<products[i].name_product<<" = ";
		cin>>products[i].prep[j].name_preporty;
		cout<<"\ninput dagree property "<<j+1<<" to "<<products[i].name_product<<" = ";
		cin>>products[i].prep[j].degree_preporty;
	}

}
char namepro[100];
cout<<"\n*******************\n";
cout<<"\n===================\n";
cout<<"\n===================\n";
cout<<"\n*******************\n";
cout<<"\n\n input information  product  do you want\n";
cout<<"\n name product ";cin>>namepro;
cout<<"\n input number properties want to search about it";cin>>number_of_search_Property;
preporty* prepsearch = new preporty[number_of_search_Property];
for(i=0;i<number_of_search_Property;i++)
{
	cout<<"input name property  "<<i+1<<" = ";
	cin>>prepsearch[i].name_preporty;
}
for( i=0;i< numberproduct ;i++)
{	
	float dagree_search=0;
	if(strcmp(products[i].name_product,namepro)==0)
	for( int j= 0;j<products[i].number_property;j++)
	{
		for( register int k=0;k<products[i].number_property;k++)
			if(strcmp(products[i].prep[j].name_preporty,prepsearch[k].name_preporty)==0)
			   		   dagree_search += products[i].prep[j].degree_preporty;
		if(dagree_search>maxdagree)imax=i;
	}
}
cout<<"\n*******************";
cout<<"\n*=================*";
cout<<"\n*=================*";
cout<<"\n*******************";
cout<<"favorite proudcut is number "<<products[imax].id<<" and name it ";
cout<<products[imax].name_product;
for(int j= 0;j<products[imax].number_property;j++)
	{
		cout<<"\n property "<<j+1<<" to "<<products[imax].name_product<<" = ";
		cout<<products[imax].prep[j].name_preporty<<endl;
	
	}



}
	