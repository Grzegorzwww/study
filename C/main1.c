

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