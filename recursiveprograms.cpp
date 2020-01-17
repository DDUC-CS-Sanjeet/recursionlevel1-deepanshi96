#include<iostream>
using namespace std;

int i_gcd(int a,int b);
int i_fact(int num);
void i_fibonacci(int num);
int i_power(int a,int b);
int rec_gcd(int a,int b);
int rec_fact(int num);
void rec_fibonacci(int num);
int rec_power(int a,int b);
int fib(int num);
int main()
{
	
	int a1,a2,b1,b2,num1,num2,gcd,fact,pow;
	cout<<"\n enter numbers for gcd ";
	cin>>a1>>b1;
	cout<<"\n enter numbers for power:";
	cin>>a2>>b2;
	cout<<"\n enter number for factorial:";
	cin>>num1;
	cout<<"\n enter no. of terms for fibonacci:";
	cin>>num2;
	//iterative programs
	gcd=i_gcd(a1,b1);
	cout<<"\n gcd by iteration: "<<gcd;
	fact=i_fact(num1);
	cout<<"\n factorial by iteration: "<<fact;
	i_fibonacci(num2);
	pow=i_power(a2,b2);
	cout<<"\n power by iteration: "<<pow;
	//recursive programs
	gcd=rec_gcd(a1,b1);
	cout<<"\n gcd by recursion: "<<gcd;
	fact=rec_fact(num1);
	cout<<"\n factorial by recursion: "<<fact;
	rec_fibonacci( num2);
	pow=rec_power(a2,b2);
	cout<<"\n power by frecursion: "<<pow;

	return 0;	
}


 int i_gcd(int a,int b)
 {
 	if(a<0||b<0)
 	 cout<<"\n invalid inputs!";
 	 else
 	{
	 
	  int temp=0;
      while(b!=0)
       {
           temp=a;
	    	a=b;
	    	b=temp%a;	
    	}
	 return a;	
   }
 }
 
 int rec_gcd(int a,int b)
 {  
 	if(a<0||b<0)
 	cout<<"\n invalid inputs!";
 	else
 	if (b==0)
 	   return 1;
 	else
	    return rec_gcd(b,a%b);   
 }
 
 void i_fibonacci(int num)
 {
 	if(num<0)
 	cout<<"\n invalid inputs!";
 	else
 	cout<<"\n fibanacci series by iteration :";
 	int temp;
 	int first=0,second=1,third=0;
 	cout<<"\n"<<first<<"\n"<<second;
 	
 	for(int i=3;i<=num;i++)
 	{
 		third=first+second;
 		cout<<"\n"<<third;
 		temp=first;
 		first=second;
 		second=third;
 		
	 }
 	
 }
 
 void rec_fibonacci(int num)
 {  
    if(num<0)
 	cout<<"\n invalid inputs";
 	else
 	cout<<"\n fibonacci series by recursion:";
 	for(int i=0;i<num;i++)
 	{
 		cout<<"\n"<<fib(i);
	 }	
 }
  int fib(int num)
	 {
	 	if((num==0)||(num==1))
	 	   return num;
	 	else 
	 	   return fib(num-1)+fib(num-2);
	 }
 
 
 
 int i_fact(int num)
 { 	if(num<0)
 	cout<<"\n invalid inputs";
 	else
 	{
	 
 	int result=1;
 	for(int i=num;i>=1;i--)
 	{
 		result*=i;
	 }
	 return result;
   }
}
 
 int rec_fact(int num)
 { 
   	if(num<0)
 	cout<<"\n invalid inputs";
 	else
 	if(num==0)
 	  return 1;
 	else
 	  return(num*rec_fact(num-1));
 }
 
 int i_power(int a,int b)
 {   
    if(a<0||b<0)
 	cout<<"\n invalid inputs";
 	else
 	{
	 
 	int result =1;
 	for(int i=b;i>=1;i--)
 	{
 		result*=a;
	 }
	 return result;
   }
}
 int rec_power(int a,int b)
 { 
    if(a<0||b<0)
 	cout<<"\n invalid inputs";
 	else
 	if(b==0)
 	  return 1;
 	else 
 	  return a*rec_power(a,b-1);
 }
 
