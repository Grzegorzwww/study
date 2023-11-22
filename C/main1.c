

 	str[i] == *(str + i)
 	&str[i] == str+i // <- wskazuje na adres i'tego elementu w tablicy 

	const int i = 1;	// przykład niezdefinowanego zachowania
	int *p = (int *)&i;
	*p = 2;


	if (ui > UINT_MAX - sum)		// Sprawdzenie czy nie następuje przepełnienie zmiennej
	{
		//to_big
	}else{
		sum = sum + ui;
	}

	if (j > i)						// sprawdzenie czy nie schodzimy ponizej zera
	{
		//negatic (< 0)
	}else{
		i = i - j;
	}



	signed int si = INT_MIN;
	signed int abs_si = si * -1; // niezdefinowane zachowanie ponieważ kod uzupełnienia do U2
	printf("%d\n", si);


	signed char c;
	int i = INT_MAX;
	c = i; // c = ffffffff		// Uwaga na żutowanie w dół 


	bool is_odd(int n)
	{
		return n % 2 != 0 // poprawne sprawdzenie czy liczba jest nieparzysta -> poprawna
		return n % 2 == 1 // niepoprawne sprawdzenie ponieważ (-n % 2) = - 1
	}


	()						// priorytety operatorów 
	i++, i--
	[]
	. -> 
	++i, --i
	+, - (jednoarumentowy)
	! ~
	*
	sizeof 
	* / %
	+ -
	<< >> (bitowe operatory przesuniecia)
	& |
	&& ||
	=
	+= -= 

	++*p // najpier dereferencja a potem inkrementacja  == ++(*p)
	*p++ // najpier inkrementacja s później dereferencja == *(p++)


	sizeof i // wielkosc obiektu i
	sizeof(i) // wielkosc typu i

	bool l					// operator negacji
	!l == (0 == l)


	E1 << E2  // to samo co E1 == 2^E2

	int si1, si2, sresult

	if(si2 < 0 || si2 >= sizeof(int )* CHAR_BIT){		// sprawdzenie czy można przesówać 
		//błąd
	}else{
		sresult = si1 >> si2
	}
