#include <iostream>
using namespace std;
#include "tableheaders.h"

int main()
{
	table2();
	//For table generation..idetify the process of table generation..
	// As in tables..
	// 2 x 1 = 2
	// 2 x 2 = 4
	// and more...
	// is me dekho  phala number same rehta ha..pure table me.. jis ka table bnana hoga.. 1 variable for this.
	// us k bad " x "  ye same as he aye ga.
	// phir next number sequence me chal raha ha.. from 1 to 10 generally.. ya jahan tak
	// table bnana ha..   n times..   1 variable for this..
	// nex " = "  sign as it is...
	// and next number is its multiplication answer.. 1 variable for this...
	// total 3 variables..
	// Declare variables...
	int table, counter = 1, answer;
	//as counter will start from 1
	// next user se hum pochna chaye hen k konsa table bnana ha..
	// us k liey user se input lene hoge..or 3 variables konsy..always yhiii use krny
	// program k requirement k mutabiq..  is me 3 ke zrorat ha.. or name in k kuch b rakh
	// sakte hen... x, y ,z  b rakh sakte they..  lakin pura name likha ho to pta chalta ha
	// ye kis liey bnaya..hmm
	// input lene se phale user ko prompt dena hoga.. jo user ko btaye ga k ab value enter
	// krne ha..
	//
	cout << "Enter number of which you want to create table: ";
	//prompt means.. message.. jo user ko btata ha k krna kia ha..okk
	// now get value from user and save it in variable table...
	cin >> table;
	cout << endl;  //for going to next line..

	//is me hum table 10 tak generate krna chate hen.. is liey value ka phale se pta ha k
	// 10 time ha.. is liey for loop use kreen gay..
	for (;counter <= 10; counter++)
	{
		//calculate answer..
		answer = table * counter;

		//now print table on screen..
		cout << table << " x " << counter << " = " << answer << endl;
		//is me phala number wo ha jis ka table bnana ha.. or wo number table variable me save
		//ha is liey phale usy print krna ha..  next x aye ga.. use same as print krne k liey
		//"" k andar likh dia.. phir next counter ha... har bar 1 increase hota ha..
		//next = as it is...  and next is answer whhich is  table * counter  ( 3 * 1 = 3)..
		//
		//okay??okk or end1  new line dalne k liey.. endL< mens  end line..acha ye endL hai
		//sab 1 line me aa gia...
		//<<  ye stream insertion operator ha... is ka mutlab k ye deta cout ko bejh rahe
		//hen print krne k liey..
		//okkk... or dosra  >> cin k sath..  cin se data le kr variable me store krna ha...
		//this is explained at begining..
	}
	// for loop 10 times chale ga.. or given number ka table 1 se 10 tak generate kre ga..
	//lets check...
	////smaj lage? hann a gyii bs ye print waly ki ni ayii
}// ho gyaa bss..  ne thora or b ha...  isy ko improve krna ha...

//is me table 10 tak bnaya ha.. is me hum chate hen k ye b user btaye k table kahan tak bnana
// ha...
// us k liey user se ye b pochna hoga.. or counter kahan tak chale ga ye us value se pta
// chale ga...  is program me counter 10 tak chalta ha..
// is k liey 1 or variable ke zrorat hoge..  jis me store kren gay kitna table bnana ha..
// ne counter to 1 se he start hoga.. table 1 se he start hota ha..  lakin end kahan hoga wo
// change kr sakte hen..do variable use kr k..yes..hmm


void table2()
{
	//second version is ka yahan bnata hon...
	int table, counter = 1, end_limit, answer;
	//end_limit is used to store.. how long table is generated...
	// is me for loop b use kr sakte hen..  lakin yahan while loop use kron ga..
	// is me hameen abe pta ne k is ke endig value kitne hoge.. is liey ase situation me
	// while use krna chayea...
	cout << "Enter Number for which you want to create table: ";
	cin >> table;
	cout << endl << "How much long you want to create table: ";
	cin >> end_limit;
	cout << endl << endl;
	//ider 1 or value input lee ha..

	while (counter <= end_limit)
	{
		// there is change in condition..
		// jab tak counter user ke btaye hue value se ziada ne hota tab tak ye loop chale ga
		// or table generate krta rahe ga...
		answer = table * counter;
		cout << table << " x " << counter << " = " << answer << endl;
		counter++;
	}
	//smaj aye?  g <= okay...  abe or b is me add krna ha...kal kreen gay..okkk
	//do while loop ka use and if else ka use...  acha mai kesy practice kiaa kronn jis sy concepts
	//clear ho jayn...  programs bnane k liey mil jate hen bhoot sare...  taqreeban half course ho
	//jaye phir krna...  abe bhoot kuch rehta ha.. okk   vu ke assignments b hen...   net pr mil
	//jate hen  bhoot sare statements... jis ka program bnana hota ha...good night...
}