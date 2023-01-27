using namespace std;

bool controllo(){
	bool r=true;
	if(cin.fail()){
		cin.clear();
		cin.ignore(1000,'\n');
		cout << "Errore: inserimento errato. non hai inserito numeri." << endl;
		r=false;
		system("pause");
	}else{
		cin.ignore(1000,'\n');
		if(cin.gcount()>1){
			cout << "Errore: inserimento errato. hai inserito delle lettere." << endl;
			r=false;
			system("pause");
		}
	}
	return r;
}

int menu(){
	int r;
	bool c;
	do{
		r=0;
		system("cls");
		cout << "Menu delle opzioni:" << endl;
		cout << "1. input." << endl;
		cout << "2. ." << endl;
		cout << "3. ." << endl;
		cout << "4. fine programma." << endl;
		cout << "scelta: ";
		cin >> r;
		c=controllo();
	}while(c==false);
	return r;
}


