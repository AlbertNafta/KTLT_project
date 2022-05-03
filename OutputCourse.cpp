void outputCourse(courses *&head,int &courseAllow,timeTable &time)
{
	fstream fout;
  
    // opens an existing csv file or creates a new file.
    fout.open("Courses.CSV", ios::out );

  	fout<<courseAllow<<endl;
  	courses *pC=head;
    // Read the input
    while(pC!=NULL) 
	{
		if(pC!=head)fout<<endl;
		
        fout <<pC->name<<","
			<<pC->teacher<<","
			<<pC->startDate<<","
			<<pC->endDate<<","
			<<pC->numberStu<<",";
		for(int a=0;a<pC->numberStu;a++)
		{
			fout<<pC->StuID[a];
			fout<<",";
		}
			fout<<pC->ID<<","
			<<pC->credits<<","
			<<pC->nums;
		for(int x=0;x<7;x++)
		{
			for(int z=0;z<4;z++)
			{
				if(time.week[z][x]==pC->ID)
				{
					cout<<"found ";
					fout<<","<<x+2<<","<<z+1;
				}
			}
		}
	pC=pC->jump;
	}
}
