void createScore(score *&sco,courses *&head)
{
		system("cls");
		int ok=1;
		int first=1,count=0;
		PortalDisplay();
		gotoxy(72, 13);
		txtColor(7);
	cout<<"This work only for input CSV"<<endl;
	txtColor(11);
	drawF(2, 29, 71, 12);
	score *pC=sco;
	gotoxy(66, 17);
		txtColor(7);
	cout<<"Enter file name";
	drawF(2, 16, 65, 16);
	drawF(2, 24, 83, 16);
	gotoxy(84, 17);
	txtColor(11);
	char fname[1024];
	
	scanf ("%s", fname);
	txtColor(7);
	FILE *file = fopen(fname, "r");
	int coName;
	int coID;
	score *here;
	char content[1024];
	while(fgets(content, 1024, file))
	{
		char *v = strtok(content, ",");
		while(v and ok==1)
			{
			
			if(ok==1)
				{
	
				coName=atoi(v);
				
				ok=0;	
				}
			courses *co=head;
				while(co!=NULL)
			{
	
				if(co->ID==coName)
				{
					coID=co->ID;break;
				}
				co=co->jump;
			}
			v = strtok(NULL, ",");

			}
		while(v)
		{
			int create=0;
			pC=sco;
			string perName=v;
			
			cout<<perName<<endl;
			getch();
			while(pC!=NULL)
			{
				
				if(pC->stuName.compare(perName)==0)break;
				if(pC->paper==NULL)
				{

					
					
					pC->paper=new score;
					pC=pC->paper;
					pC->paper=NULL;
					
					create=1;
					break;
				}
				
				pC=pC->paper;
			}

			pC->stuName=perName;
			v = strtok(NULL, ",");
			if(create==1)
			pC->subject=0;
			pC->subject+=1;
			pC->final[pC->subject-1][0]=coID;
			pC->final[pC->subject-1][1]=atoi(v);
			v = strtok(NULL, ",");

		}

	}
	pC->paper=NULL;
	fclose(file);
}
