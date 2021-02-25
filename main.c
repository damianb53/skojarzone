#include<stdlib.h>
#include<stdio.h>

// Wyświetlanie tablicy z etykietą
void print_arr(char* label, int *ptr, int size) {
	printf("%s[ ", label);

	for(int i = 0; i < size; ++i) {
		// Nie wyświetlaj zer
		if(ptr[i] != 0) {
			if(i != 0) printf(", ");
			printf("%d", ptr[i]);
		}
	}

	printf(" ]\n");
}

// Wprowadza dzielniki do tablicy
void insert_divisors(int* arr, int n, int* suma) {
	for(int i = 0; i < (n - 1); ++i) {
		if(n % (i + 1) == 0)  {
			arr[i] = i + 1;
			*suma += i + 1;
		}
	}
}

int main(int argc, char **argv) {
	int a = 0, b = 0, 
	    suma_a = 0, suma_b = 0;
	
	// Tablice dzielników
	int *div_a = NULL;
	int *div_b = NULL;

	// Wprowadzanie danych
	printf("Podaj a: ");
	scanf("%d", &a);
	printf("Podaj b: ");
	scanf("%d", &b);

	printf("\nWprowadzono: %d, %d\n\n", a, b);

	// Walidacja danych
	if(a < 1 || b < 1) {
		printf("Błędne dane\n");
		return 1;
	}

	// Alokacja pamięci, wprowadzanie dzielników do tablicy i ich zsumowanie
	div_a = calloc(a, sizeof(int));
	insert_divisors(div_a, a, &suma_a);
	div_b = calloc(b, sizeof(int));
	insert_divisors(div_b, b, &suma_b);

	// Podsumowanie
	print_arr("DZIELNIKI A: ", div_a, a);
	printf("SUMA A: %d\n", suma_a);
	print_arr("DZIELNIKI B: ", div_b, b);
	printf("SUMA B: %d\n", suma_b);

	// Wynik
	printf("\n=================================\n\n");
	if(suma_a == (b + 1) && suma_b == (a + 1)) {
		printf("%d i %d są liczbami skojarzonymi\n", a, b); 
	} else {
		printf("%d i %d nie są liczbami skojarzonymi\n", a, b);
	}
	printf("\n=================================\n\n");

	// Zwalnianie pamięci
	free(div_a);
	free(div_b);

	return 0;
}
