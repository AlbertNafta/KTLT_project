void createClass(classes *&pHead_c)
{
	system("cls");
	txtColor(11);
	gotoxy(60, 1);
	cout << "  8888888b.                   888             888 ";
	gotoxy(60, 2);
	cout << "  888   Y88b                  888             888 ";
	txtColor(3);
	gotoxy(60, 3);
	cout << "  888    888                  888             888 ";
	gotoxy(60, 4);
	cout << "  888   d88P  .d88b.  888d888 888888  8888b.  888 ";
	gotoxy(60, 5);
	cout << "  8888888P\"  d88\"\"88b 888P\"   888        \"88b 888 ";
	txtColor(1);
	gotoxy(60, 6);
	cout << "  888        888  888 888     888    .d888888 888 ";
	gotoxy(60, 7);
	cout << "  888        Y88..88P 888     Y88b.  888  888 888 ";
	gotoxy(60, 8);
	cout << "  888         \"Y88P\"  888      \"Y888 \"Y888888 888 ";
	gotoxy(60, 9);
	cout << "                                                  ";  	
	
	txtColor(15);
	drawF(2,29, 73, 13);
	gotoxy(74,14);
	txtColor(13);
	cout<<"This work only for input CSV"<<endl;
	
	classes *pC=pHead_c;
	txtColor(11);
	drawF(2,17, 69, 17);
	gotoxy(70,18);
	txtColor(15);
	cout<<"Enter file name:";
	drawF(2,17, 87, 17);
	gotoxy(88,18);
	char fname[1024];
	scanf ("%s", fname);
	FILE *file = fopen(fname, "r");
	while(pC->pDoor!=NULL)pC=pC->pDoor;
	pC->pDoor=new classes;
	pC=pC->pDoor;
	char content[1024];
	while(fgets(content, 1024, file))
	{
		char *v = strtok(content, ",");
		while(v)
		{
			pC->className=v;
			v = strtok(NULL, ",");
			pC->number=atoi(v);
			v = strtok(NULL, ",");
			for(int a=0;a<pC->number;a++)
			{
				pC->student[a]=atoi(v);
				v = strtok(NULL, ",");
			}
		}
		pC->pDoor=new classes;
		pC=pC->pDoor;
	}
	pC=pHead_c;
	while(pC->pDoor->pDoor!=NULL)
	{
		pC=pC->pDoor;
	}
	classes *pDel=pC->pDoor;
	pC->pDoor=NULL;
	delete pDel;
	fclose(file);
}
