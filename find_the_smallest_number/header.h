#pragma once

void swap_values(int& a, int& b) {
	int c = a;
	a = b;
	b = c;
}

 int return_smallest(int a, int b, int c, int d) {

	 int values[4]{ a,b,c,d };
	 int size = sizeof(values) / sizeof(values[0]);
	 int last_element = size - 1;

	 for (int i = 0; i < size; i++) {

	      for (int j = 0; j < size - i - 1; j++) {
		       if (values[j] > values[j + 1]) 
		       swap_values(values[j], values[j + 1]); 
	       }
		  size--;

	 }
	 return values[last_element];
}




 