void viewScore(score *&sco,string name,student *&pHead_s,courses *&head)
{
	score *pc=sco;
	student *pp=pHead_s;
	while(pp!=NULL)
	{
		if(pp->userName.compare(name)==0)break;
		pp=pp->pNext;
	}
						courses *ps=head;
						while(pc!=NULL)
						{
							if(pc->stuName.compare(pp->lastName)==0)break;
							pc=pc->paper;
							if(pc->paper==NULL){
								system("cls");
								cout<<"You have no score !!!";
								sleep(1);
								system("cls");
								return;
							}
						}
							cout<<"Name: ";txtColor(11);cout<<pc->stuName<<endl;
							
							for(int z=0;z<pc->subject;z++)
							{
								txtColor(7);
								cout<<z+1<<".|";
								ps=head;
								while(ps!=NULL)
								{
									if(ps->ID==pc->final[z][0])
									{
										break;
									}
									ps=ps->jump;
								}
								cout<<ps->name<<": ";txtColor(11);cout<<pc->final[z][1]<<endl;
							}
						
							cout<<endl;
						txtColor(7);
						cout<<"Press any key to back..."<<endl;
						_getch();
}
