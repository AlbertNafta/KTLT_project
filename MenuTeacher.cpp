void MenuTeacher(score *&sco,staff *&pHead_t,student *&pHead_s,string *use,classes *&pHead_c,courses *&head,int &courseAllow,timeTable &time)
{
	int choose,choose2;
	string here=*use;
	int r;
	int rr;
	do{
		displayMenuTeacher(r);
		if(r==15)choose=1;
		if(r==19)choose=2;
		if(r==23)choose=3;
		if(r==27)choose=4;
		if(r==31)choose=5;
		if(r==35)choose=6;
		choose2=0;
		switch(choose)
		{
			case 1:
				do{
				system("cls");
				
				DisplayManagingClass(rr);
				system("cls");
				if(rr==15)choose2=1;
				if(rr==19)choose2=2;
				if(rr==23)choose2=3;
				if(rr==27)choose2=4;
				switch(choose2)
				{
					case 1:{
						createClass(pHead_c);
						txtColor(15);
						outputClass(pHead_c);
						break;
					}
					case 2:{
						
						viewClass(pHead_c,pHead_s);
						
						break;
					}
					case 3:
					{
					
						system("cls");
						
						editClasses(pHead_c,pHead_s);
						outputClass(pHead_c);
						sleep(2);system("cls");
						}break;
						
				}
				}while(choose2!=4);system("cls");break;
			case 2:{
				int choose3;
				do{
				system("cls");
				int r3;
				DisplayManageCourse(r3);
				if(r3==15)choose3=1;
				if(r3==19)choose3=2;
				if(r3==23)choose3=3;
				if(r3==27)choose3=4;
				if(r3==31)choose3=5;
				if(r3==35)choose3=6;

				switch(choose3)
				{
					case 1:{
						system("cls");
						createCourse(head,time);
						system("cls");
						cout<<"DONE !!!";
						sleep(1);
						outputCourse(head,courseAllow,time);
						system("cls");
						break;
					}
						
					case 2:{
						system("cls");
						viewCourses(head,pHead_s);
						system("cls");
						break;
					}
					
					case 3:{
						system("cls");
						char allow;
						PortalDisplay();
							txtColor(7);
							gotoxy(58, 13);
							cout<<"Do you want to allow student to sign up courses ? (y/n) " ;
						txtColor(11);
						cin>>allow;
						txtColor(7);
						if(allow=='y'||allow=='Y')courseAllow=1;
						if(allow=='n'||allow=='N')courseAllow=0;
						outputCourse(head,courseAllow,time);
						system("cls");
						cout<<"OK...";
						sleep(1);
						system("cls");
						break;
					}
					case 4:			
					{
				system("cls");
				viewTime(time,head);
				getch();
				system("cls");
				break;
					}

				
				case 5:
					{
						system("cls");
						deleteCourse(head,time);
						outputCourse(head,courseAllow,time);
						break;
					}
				}
				}while(choose3!=6);
				system("cls");
				break;
			}
			
			case 3:{
				creatSchoolYear();
				system("cls");
				break;
			}
			case 4:{
				system("cls");
				int pick;
				int r4;
				do{
					
				DisplayEditScore(r4);
					if(r4==15)pick=1;
					if(r4==19)pick=2;
					if(r4==23)pick=3;
				switch(pick)
				{
					case 1:{
						system("cls");
						createScore(sco,head);
						outputScore(sco);
						system("cls");
						cout<<"DONE !!!";
						sleep(1);
						system("cls");
						break;
					}
					case 2:{
						viewScore(sco,head);
						outputScore(sco);
						system("cls");
						break;
					}
				}			
				}while(pick!=3);system("cls");break;
					}
			
			case 5:
			{
			viewTeacherPro(pHead_t,here);
			system("cls");
			break;	
			}
			

				
		}
	
		
	}while(choose!=6);
}
