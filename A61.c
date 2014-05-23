/* Jonathan Kramer */ 
						/* Short Assignment 6 : Number 1 */
#include <stdio.h>
int main(void)
{
int nmr, dnm, ave1;
float ave2, ave3, ave4, ave5;

dnm = 9;
nmr = 101;

ave1 = nmr/dnm;
ave2 = (float)(nmr/dnm);
ave3 = nmr/(float)dnm;
ave4 = (float)nmr/dnm;
ave5 = (float)nmr/(float)dnm;

printf("ave1 = %d\nave2 = %f\nave3 = %f\nave4 = %f\nave5 = %f",ave1,ave2,ave3,ave4,ave5);

return (0);
}

/*
ave1 = 11
ave2 = 11.000000
ave3 = 11.222222
ave4 = 11.222222
ave5 = 11.222222

ave = nmr/dnm = 11
	*The division of these two integers will yield an integer type. So while the real 
	value of 9/101 is 11.222222, the remainder is ignored, and the integer 11 is what 
	is actually stored in ave.
		
ave = (float)(nmr/dnm) = 11.000000
	*The parenthesis hold the float cast until after the integer division is completed. 
	As we saw in the first situation, the integer division yields 11. THEN, the float 
	cast acts on the integer 11 and turns it into the float 11.000000. Note the remainder 
	is not retained, so while the real value is still 11.222222, the float 11.000000 is 
	actually stored in ave.
		
ave = nmr/(float)dnm = 11.222222
	*Here the float cast works on the integer dnm before the division.  Therefore, dnm
	becomes a float and due to the ability of C Programming to implement automatic type
	conversions in a situation with mixed variable types, nmr is also treated as a float.
	This results in float division yielding the float 11.222222, which is both the real 
	value of the expression and the value stored in ave in this situation.

ave = (float)nmr/dnm = 11.222222
	*Here the float cast works on the integer nmr before the division.  Therefore, nmr
	becomes a float and due to the ability of C Programming to implement automatic type
	conversions in a situation with mixed variable types, dnm is also treated as a float.
	This results in float division yielding the float 11.222222, which is both the real 
	value of the expression and the value stored in ave in this situation.

ave = (float)nmr/(float)dnm = 11.222222
	*In this situation the float cast is used on both nmr and dnm before division occurs.
	This converts both nmr and dmn into floats. As a result, float division follows and 
	yields the float 11.222222, which is both the real value of the expression and the 
	value stored in ave in this situation.	
*/