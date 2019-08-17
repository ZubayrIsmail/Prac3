/*
 * test.c
 * 
 * Copyright 2019 Zubayr Ismail <zubayr@raspberrypi>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */
int units;
const int LEDS[] = {0,2,3,25,7,22,21,27,4,6};
	
	void int_to_bin_digit(unsigned int in, int count, int* out)
{
    /* assert: count <= sizeof(int)*CHAR_BIT */
    unsigned int mask = 1U << (count-1);
    int i;
    for (i = 0; i < count; i++) {
        out[i] = (in & mask) ? 1 : 0;
        in <<= 1;
    }
}
	
#include <stdio.h>

int main(int argc, char **argv)
{
units = 0b0101100;
    int digit[7];
    int_to_bin_digit(units, 7, digit);
      
      int loop;
      int i=4;
   for(loop = 1; loop < 7; loop++){
      printf("LED Pin %d logic = ",LEDS[i]);
      printf("%d \n", digit[loop]);
      i++;
    }
    return 0;
	
}

