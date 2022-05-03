void deleteCourse(courses *&head,timeTable &time)
{
	courses *pC=head;
	int fou=0;
	string name;
	PortalDisplay();
	do{
		pC=head;
		fou=0;
		txtColor(7);
		gotoxy(61, 13);
	cout<<"Enter the name of course to delete: ";
	gotoxy(97, 13);
	cout<<"                 ";
	gotoxy(97, 13);
	txtColor(11);
	cin>>name;
	txtColor(7);
	if(head->name.compare(name)==0)
	{
		courses *del=head;
			for(int x=0;x<7;x++)
		{
			for(int z=0;z<4;z++)
			{
				if(time.week[z][x]==del->ID)
				{
					time.week[z][x]=0;
				}
			}
		}
		head=head->jump;
		delete del;
		system("cls");
		cout<<"DONE !!!";
		sleep(1);
		system("cls");
		return;
	}
	while(pC->jump!=NULL)
	{
		if(pC->jump->name.compare(name)==0)
		{
			fou=1;
			break;
		}
		pC=pC->jump;
	}
		if(fou==0)
		{
			
			gotoxy(71, 16);
			cout<<"No such course !"<<endl;
		}
	}while(fou!=1);
	courses *del=pC->jump;
	pC->jump=del->jump;
			for(int x=0;x<7;x++)
		{
			for(int z=0;z<4;z++)
			{
				if(time.week[z][x]==del->ID)
				{
					time.week[z][x]=0;
				}
			}
		}
	delete del;
		system("cls");
		cout<<"DONE !!!";
		sleep(1);
		system("cls");
}
