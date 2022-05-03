void courseRegistration(courses *&head,string here,student *&pHead_s)
{
	courses *pc=head;
	student *pT2=pHead_s;
	int line,want,no=0;
	do{
		txtColor(7);
		gotoxy(03, 0);cout<<"Name";
		gotoxy(014, 0);cout<<"Course ID";
		gotoxy(25, 0);cout<<"Number of credit";
		gotoxy(44, 0);cout<<"Teacher";
		gotoxy(066, 0);cout<<"Number of student";
	

		 
					no=0;
					pc=head;
					line=1;
					while(pc!=NULL)
					{
						txtColor(7);
						gotoxy(00, line);
						cout<<line<<":"<<endl;
						txtColor(11);
						gotoxy(3, line);	cout<<pc->name;
						gotoxy(014, line);	cout<<pc->ID;
						gotoxy(32, line);	cout<<pc->credits;
						gotoxy(44, line);	cout<<pc->teacher;
						gotoxy(61, line);	cout<<pc->numberStu;

							pc=pc->jump;
							
							line++;
						txtColor(7);
					}
					gotoxy(003, line+3);
					txtColor(7);
					cout<<"Press 0 to exit"<<endl;
					txtColor(11);
					drawF(2, 16, 002, line+2);gotoxy(003, line+6);
					txtColor(7);
					cout<<"What course you want to sign up ? (1 to "<<line-1<<") "<<endl;
					txtColor(11);
					drawF(2, 45, 002, line+5);
					drawF(2, 2, 49, line+5);
					gotoxy(50,line+6);
					txtColor(7);
					cin>>want;
					if(want!=0)
					{
						pc=head;
						for(int a=1;a<want;a++)
						{
							pc=pc->jump;
						}
						
//------------------------------------------student matching
					pT2=pHead_s;
					while(pT2!=NULL)
					{
						if(pT2->userName.compare(here)==0)
						{
							break;
						}
						pT2=pT2->pNext;
					}
//----------------------------------------
					for(int a=0;a<pc->numberStu;a++){
					if(pc->StuID[a]==pT2->social_ID)
					{
						system("cls");
						txtColor(7);
						cout<<"You already in class !!!";
						sleep(1);
						no=1;
						system("cls");
					}
					}
					if(no==1)continue;
						pc->numberStu+=1;
						pc->StuID[pc->numberStu-1]=pT2->social_ID;
					}
					system("cls");
					cout<<"DONE !!!";
					sleep(1);
					system("cls");
	}while(want!=0);
}
