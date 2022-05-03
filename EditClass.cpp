void editClasses(classes *&pHead_c,student *&pHead_s)
{
	int choose3,r3=0;
	DisplayEditClass(r3);
	if(r3==15)choose3=1;
	if(r3==19)choose3=2;
	if(r3==23)choose3=3;
	if(choose3==1){
			addStudentToClass(pHead_c,pHead_s);
		}
	else if(choose3==2)
	{
		removeStudentFromClass(pHead_c,pHead_s);
	}
	else if(choose3==3)return;
}
