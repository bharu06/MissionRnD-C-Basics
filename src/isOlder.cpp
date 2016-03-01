/*
OVERVIEW: 	Given date of births of two persons as inputs, return 1 if person one is elder,
2 if person two is elder, 0 if both are of same age.
Example: isOlder("24-07-2000", "25-07-2000") should return 1 as person one
is elder than person two.

INPUTS: 	DOBs of two persons as parameters in the format "DD-MM-YYYY".

OUTPUT: 	1 if person one is elder, 2 if person two is elder, 0 if both are of same age.

ERROR CASES: Return -1 if any DOB is invalid.

NOTES: 		Don't use any built-in C functions for comparisions. You are free to write any helper functions.
*/

int isOlder(char *dob1, char *dob2) {
	int i,mm1,mm2,dd1,dd2,yy1,yy2;
	
	if (dob1[10] == '\0' && dob2[10] == '\0')
	{
		for (i = 0; i <= 9; i++)
		{
			if ((i != 2 || i != 5)|| ((dob1[i] - 48 >= 0 && dob1[i] - 48 <= 9) && (dob2[i] - 48 >= 0 && dob2[i] - 48 <= 9)))
			{
			}
			
			else{
				return(-1);
			}
		}
	}
	else
	{
		return(-1);
	}
	dd1 = (dob1[0] - 48) * 10 + dob1[1] - 48;
	dd2 = (dob2[0] - 48) * 10 + dob2[1] - 48;
	mm1 = (dob1[3] - 48) * 10 + dob1[4] - 48;
	mm2 = (dob2[3] - 48) * 10 + dob2[4] - 48;
	yy1 = (dob1[6] - 48) * 1000 + (dob1[7] - 48) * 100 + (dob1[8] - 48) * 10 + dob1[9] - 48;
	yy2 = (dob2[6] - 48) * 1000 + (dob2[7] - 48) * 100 + (dob2[8] - 48) * 10 + dob2[9] - 48;
	if (yy1 == yy2&&dd1==dd2&&mm1==mm2)
	{
		return(0);
	}
	else if ((mm1 > 12 || mm2 > 12 || dd1 > 31 || dd2 > 31) || (mm1 == 2 && (yy1 % 4 != 0) && dd1>28) || (mm2 == 2 && (yy2 % 4 != 0) && dd2>28))
	{
		return(-1);
	}
	
	else if ((yy1 < yy2) || (yy1 == yy2) && ((mm1<mm2) || (mm1==mm2)&&(dd1<dd2)))
	{
		return(1);
	}
	else
		return(2);
}
