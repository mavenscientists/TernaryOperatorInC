  /**  
    * This program is free software: you can redistribute it and/or modify
    * it under the terms of the GNU General Public License as published by
    * the Free Software Foundation, either version 3 of the License, or
    * (at your option) any later version.
    * 
    * This program is distributed in the hope that it will be useful,
    * but WITHOUT ANY WARRANTY; without even the implied warranty of
    * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    * GNU General Public License for more details.
    * 
    * Copyright 2013 Maven Scientists http://mavenscientists.com
    */

 /**
   * @author	Maven Scientists (http://mavenscientists.com) 
   * @email	info@mavenscientists.com
   * Ternary Operator - This program shows the use of ternary operator
   */

#include <stdio.h>

int main()
{
	
	int A = 8;
	int B = 10;
	int max = 0;
	
	max = (A > B)? A : B;
	printf("Maximum is : %d\n", max);

	//OR .. you can also include printf statement with the ternary operator
	
	(A > B)? printf("A:%d > B:%d is TRUE", A, B) : printf("A:%d > B:%d is FALSE", A, B);

	return 0;
}
