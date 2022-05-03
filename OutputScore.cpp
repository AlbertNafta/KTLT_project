void outputScore(score *&sco)
{
		fstream fout;
  
    // opens an existing csv file or creates a new file.
    fout.open("FinalMark.CSV", ios::out );

  	score *pC=sco;
    // Read the input
    while(pC!=NULL) 
	{
		if(pC!=sco)fout<<endl;
		
        fout <<pC->stuName<<","
			<<pC->subject<<",";
		for(int a=0;a<pC->subject;a++)
		{
			fout<<pC->final[a][0];
			fout<<",";
			fout<<pC->final[a][1];
			if(a<pC->subject-1)fout<<",";
		}

	pC=pC->paper;
	}
}
