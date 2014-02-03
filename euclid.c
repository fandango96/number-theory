/*
 * euclid.c
 * 
 * Copyright 2014 aman <aman@aman-Aspire-4750>
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


#include <stdio.h>
#include <stdlib.h>

int rmod(int x, int y)
{
	return (abs(x % y) <= abs(x % y - abs(y))) ? (x % y) : (x % y - abs(y));
}

int euclid(int a, int b)
{
	int t;
	while (b) {
		t = a;
		a = b;
		b = rmod(t, b);
	}
	return abs(a);
}

int main(int argc, char **argv)
{
	int u, v;
	printf("Enter 2 numbers: ");
	scanf("%d %d", &u, &v);
	printf("Their gcd is: %d\n", euclid(u, v));
	return 0;
}
