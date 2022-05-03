void inputCourse(courses *&head,int &courseAllow,timeTable &time)
{ 
		courses *pC=head;
		int ok=1;
	FILE *file = fopen("Courses.CSV", "r");
	char content[1024];

	while(fgets(content, 1024, file))
	{
			char *v = strtok(content, ",");
			while(v and ok==1)
			{
			
					if(ok==1)
			{

			courseAllow=atoi(v);
			ok=0;	
			}
			v = strtok(NULL, ",");
			}
		while(v)
		{			
	
			pC->name=v;
			v = strtok(NULL, ",");
			pC->teacher=v;
			v = strtok(NULL, ",");
			pC->startDate=v;
			v = strtok(NULL, ",");
			pC->endDate=v;
			v = strtok(NULL, ",");
			pC->numberStu=atoi(v);
			v = strtok(NULL, ",");
			for(int a=0;a<pC->numberStu;a++)
			{
				pC->StuID[a]=atoi(v);
				v = strtok(NULL, ",");
			}
			pC->ID=atoi(v);
			v = strtok(NULL, ",");
			pC->credits=atoi(v);
			v = strtok(NULL, ",");
			pC->nums=atoi(v);
			v = strtok(NULL, ",");
			for(int i=0;i<=1;i++){
			int day=atoi(v);	
			v = strtok(NULL, ",");
			int sess=atoi(v);
			time.week[sess-1][day-2]=pC->ID;
			v = strtok(NULL, ",");
			}
		}
		if(ok==2)
		{
		pC->jump=new courses;
		pC=pC->jump;	
		}
		ok=2;

	}
	pC=head;
	while(pC->jump->jump!=NULL)
	{
		pC=pC->jump;
	}
	courses *pDel=pC->jump;
	pC->jump=NULL;
	delete pDel;
	fclose(file);
}
