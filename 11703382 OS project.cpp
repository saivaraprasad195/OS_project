 #include<stdio.h>
#include<stdbool.h> 
struct requirement
{
bool pen ; 
bool paper ;
bool question_paper ; 
bool all_three ;
};

int main()
{
int n=3;
struct requirement	s[n]; 
s[0].pen=true;
s[0].paper = false;
 s[0].question_paper = false;
  s[0].all_three= false; 
  s[1].pen=false;
s[1].paper = true; 
s[1].question_paper = false;
 s[1].all_three = false; 
 s[2].pen=false;
s[2].paper = false;
 s[2].question_paper = true;
  s[2].all_three = false	;

while(s[0].all_three==false||s[1].all_three==false||s[2].all_three == false)
 {
int ch1,ch2;
printf("\nResources:\n1.pen\n2.paper\n3.question paper\n Enter the two things which is to be placed on the shared table: ");
scanf ("%d%d",&ch1,&ch2);
if(ch1==1 && ch2==2 && s[2].all_three==false)
{
s[2].all_three=true ;
printf("Third Student has completed the task\n");
}
if(ch1==2 && ch2==3 && s[0].all_three==false)
{
s[0].all_three=true;
printf("First Student has completed the task\n");
}

	if(ch1==1 && ch2==3 && s[1].all_three==false)
{
	s[1].all_three=true;
	printf("Second Student has completed the task\n");
}
}

	printf("All the students now have completed their respective tasks succesfully\n");
return 0;

}

