#include <stdio.h>
#include <string.h>
#include <windows.h>
#include "signupfunction.txt"
#include "loginfunction.txt"
#include "auction.txt"



int main()
{
	int choice;
	int transition = 0;
	
	system("color f4");
	printf("\t\t  Welcome to the auction system\n");
	printf("\t\t+-------------------------------+\n");
	initialpage:
    printf("\nPlease make a selection from the following:\n\n");
    puts("[1] Sign Up");
    puts("[2] Log in");
    scanf("%d",&choice);
    switch(choice)
    {
    	case 1:
    		signupfunction();
    		goto initialpage;
    		
    	case 2:
    		transition = loginfunction();
    		if(transition == 0)
    		{
    			break;
			}
    		if(transition == 1)
    		goto initialpage;
						
	}
	
	printf("\n\n\tLoading up the Auction System...\n\n");
	Sleep(2000);
	system("cls");
	
	auction();
	
	
		
	return 0;
}
