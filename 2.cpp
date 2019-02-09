#include<iostream.h>
#include<conio.h>
void main(){
char ch[40];
cout<<"type something\n";
cin.get(ch,40);
cout<<"you have entered : "<<ch;
  for(int i=0; i<=strlen(ch); i++)
  {
		if((ch[i]>='a' && ch[i]<='z')||(ch[i]>='A'&& ch[i]<='Z'))
			ch[i]=ch[i]+1;
	}
cout<<"\nnew string is: "<<ch;
getch();
}