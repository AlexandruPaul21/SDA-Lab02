#pragma once
#include "MD.h"

class MD;

class IteratorMD
{
	friend class MD;

private:

	//constructorul primeste o referinta catre Container
	//iteratorul va referi primul element din container
	IteratorMD(const MD& c);

	//contine o referinta catre containerul pe care il itereaza
	const MD& md;

	/* aici e reprezentarea  specifica a iteratorului */
    Node* act;

public:

		//reseteaza pozitia iteratorului la inceputul containerului
        //Teta(1) CF=CD=CM=CT
		void prim();

		//muta iteratorul in container
		// arunca exceptie daca iteratorul nu e valid
        //Teta(1) CF=CD=CM=CT
		void urmator();

		//verifica daca iteratorul e valid (indica un element al containerului)
        //Teta(1) CF=CD=CM=CT
		bool valid() const;

		//returneaza valoarea elementului din container referit de iterator
		//arunca exceptie daca iteratorul nu e valid
        //Teta(1) CF=CD=CM=CT
		TElem element() const;
};

