# Liczby Skojarzone

Przykładowy program sprawdzający czy dwie podane liczby są ze sobą skojarzone.

[Link]("http://cke.gov.pl/images/_EGZAMIN_MATURALNY_OD_2015/Arkusze_egzaminacyjne/2016/formula_od_2015/MIN-R1_1P-162.pdf")
do arkusza z zadaniem

Możemy nazwać dwie różne liczby całkowite `a` i `b` większe od 1 skojarzonymi,
jeśli suma wszystkich różnych dodatnich dzielników `a` mniejszych od `a`
jest równa `b + 1`, a suma wszystkich różnych dzielników `b` mniejszych
od `b` jest równa `a + 1`

Skojarzone są, np. liczby 140 i 195, ponieważ:


- dzielnikami 140 są: 1, 2, 4, 5, 7, 10, 14, 20, 28, 35, 70, a ich suma wynosi 196 = 195 + 1
- dzielnikami 195 są: 1, 3, 5, 13, 15, 39, 65, a ich suma wynosi 141 = 140 + 1

---------------

### Kompilowanie

```bash
mkdir build; cd build; cmake ..; make;
```
