#include <stdio.h>

struct Marks {
    int roll_no;
    char name[10];
    float chem, maths, phy;
};


int main() { 
	
    struct Marks m;
    int i,n;
    
    printf("Student number :");
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
    
       	printf("Enter the Name :",i+1);
	scanf("%s",&m.name);
    
    	printf("Chemistry Subject :");
	scanf("%f",&m.chem);
	
		printf("Maths subject :");
	scanf("%f",&m.maths);
	
		printf("Physics subject :");
	scanf("%f",&m.phy);

		printf("Enter the roll number :");
	scanf("%d",&m.roll_no);

	printf("=================================\n");
	
	 float percentage = (m.maths + m.phy + m.roll_no)/300.0*100;
	printf("Percentage : %f\n", percentage);
	}
  
}
