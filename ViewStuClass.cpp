void viewYourclass(classes *&pHead_c,student *&pHead_s,string use)
{
	txtColor(7);
						classes *pc=pHead_c;
						student *ps=pHead_s;
						student *ps2;
						while(ps!=NULL)
						{
							if(ps->userName.compare(use)==0)
							{
								ps2=ps;
								break;
							}
							ps=ps->pNext;
						}
						
						int found=0;
						while(pc!=NULL)
						{

							for(int z=0;z<pc->number;z++)
							{
								if(pc->student[z]==ps2->social_ID)
								{
									found=1;
									break;
								}
								
							
							}
						
							if(found==1)break;
							pc=pc->pDoor;
						}
						if(found==0)
						{
							PortalDisplay();
							gotoxy(70, 13);
							cout<<"You have no class !";
							_getch();
							system("cls");
							return;
						}
						cout<<"Name: ";txtColor(11);cout<<pc->className<<endl;txtColor(7);
							cout<<"Number of student: "<<pc->number<<endl;
							for(int z=0;z<pc->number;z++)
							{
								cout<<z+1<<".|";
								ps=pHead_s;
								while(ps!=NULL)
								{
									if(ps->social_ID==pc->student[z])
									{
										break;
									}
									ps=ps->pNext;
								}
								cout<<pc->student[z]<<" | ";txtColor(11);cout<<ps->lastName<<endl;txtColor(7);
							}
						cout<<endl<<"Press any key to continue...";
						_getch();
}
