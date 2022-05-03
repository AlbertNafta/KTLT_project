void menuStudent(score *& sco,classes *&pHead_c,student *&pHead_s,string *use,int &courseAllow,courses *&head){

int choose,choose2,r;
string here=*use;
	do{
		system("cls");
		displayMenuStudent(r);
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
				system("cls");
				viewYourclass(pHead_c,pHead_s,here);
				system("cls");
				txtColor(7);
				break;
			case 2:
				system("cls");
				viewStudentPro(pHead_s,here);
				system("cls");
				txtColor(7);
				break;				
			case 3:{
				system("cls");
				if(courseAllow==1)
				{
					courseRegistration(head,here,pHead_s);
					
				}
				if(courseAllow==0)
				{
					txtColor(11);
					cout<<"Not availble !!!";
					sleep(1);
				}
				system("cls");
				txtColor(7);
				break;
			}
			case 4:{
				system("cls");
				courseScare(head,here,pHead_s);
				system("cls");
				txtColor(7);
				break;
			}
			case 5:{
				system("cls");
				viewScore(sco,here,pHead_s,head);
				system("cls");
				txtColor(7);
				break;
			}
				
		}
	
		
	}while(choose!=6);

}
