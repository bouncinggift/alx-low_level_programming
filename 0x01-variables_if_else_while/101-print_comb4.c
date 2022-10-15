#include <stdio.h>

int main(void)
{
	    int x, y, z;
	        /*ASCII code for 0*/
	        x = 48;
		    while (x < 58)
			        {
					        y=49;
						        
						        while (y < 58)
								        {
										            z=50;
											                if (x != y && y > x)
														            {
																                    while (z < 58)
																			                    {
																						                        if (y != z && z > y)
																										                    {
																													                            putchar(x);
																																                            putchar(y);
																																			                            putchar(z);
																																						                            if (x < 55)
																																										                            {
																																														                                putchar(',');
																																																		                            putchar(' ');
																																																					                                
																																																					                            }
																																									                            
																																									                        }
																									                    z++;
		
