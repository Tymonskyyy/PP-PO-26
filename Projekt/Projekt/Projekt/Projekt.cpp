#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;
//szczebel gorny
class szef {
private:
	int wyplata_szefa;
protected:
	int info_chronione;
public:
	virtual ~szef() {};
	virtual void wyswietl_info() {
		cout << "To jest info publiczne szefa" << endl;
	}
};
//szczebel srodek
class kierownik_B:  public szef{
private:
	int wyplata_kierownika_B;
protected:
	int info_chronione_kierownik_B;
public:
	virtual void wyswietl_info() override {
		cout << "------Dane kierownika B------" << endl;
		cout << "Wyplata kierownika B: " << wyplata_kierownika_B << endl;
		cout << "Info chronione kierownika B: " << info_chronione_kierownik_B << endl;
	}
};
class kierownik_C: public szef {
private:
	int wyplata_kierownika_C;
protected:
	int info_chronione_kierownik_C;
public:
	virtual void wyswietl_info() override {
		cout << "------Dane kierownika C------" << endl;
		cout << "Wyplata kierownika C: " << wyplata_kierownika_C << endl;
		cout << "Info chronione kierownika C: " << info_chronione_kierownik_C << endl;
	}
};
class kierownik_D: public szef {
private:
	int wyplata_kierownika_D;
protected:
	int info_chronione_kierownik_D;
public:
	virtual void wyswietl_info() override {
		cout << "------Dane kierownika D------" << endl;
		cout << "Wyplata kierownika D: " << wyplata_kierownika_D << endl;
		cout << "Info chronione kierownika D: " << info_chronione_kierownik_D << endl;
	}
};
class kierownik_E: public szef {
private:
	int wyplata_kierownika_E;
protected:
	int info_chronione_kierownik_E;
public:
	
	virtual void wyswietl_info() override {
		cout << "------Dane kierownika E------" << endl;
		cout << "Wyplata kierownika E: " << wyplata_kierownika_E << endl;
		cout << "Info chronione kierownika E: " << info_chronione_kierownik_E << endl;
	}
};
//szczebel najnizszy
class pracownik_F: public kierownik_C {
private:
	int wyplata_pracownika_F;
protected:
	int info_chronione_pracownik_F;
public:
	virtual void wyswietl_info() override {
		cout << "------Dane pracownika F------" << endl;
		cout << "Wyplata pracownika F: " << wyplata_pracownika_F << endl;
		cout << "Info chronione pracownika F: " << info_chronione_pracownik_F << endl;
	}
};
class pracownik_G: public kierownik_C {
private:
	int wyplata_pracownika_G;
protected:
	int info_chronione_pracownik_G;
public:
		virtual void wyswietl_info() override {
		cout << "------Dane pracownika G------" << endl;
		cout << "Wyplata pracownika G: " << wyplata_pracownika_G << endl;
		cout << "Info chronione pracownika G: " << info_chronione_pracownik_G << endl;
		}
};
class pracownik_H: public kierownik_D {
private:
	int wyplata_pracownika_H;
protected:
	int info_chronione_pracownik_H;
public:
	virtual void wyswietl_info() override {
		cout << "------Dane pracownika H------" << endl;
		cout << "Wyplata pracownika H: " << wyplata_pracownika_H << endl;
		cout << "Info chronione pracownika H: " << info_chronione_pracownik_H << endl;
	}
};
class pracownik_I: public kierownik_D {
private:
	int wyplata_pracownika_I;
protected:
	int info_chronione_pracownik_I;
public:
	virtual void wyswietl_info() override {
		cout << "------Dane pracownika I------" << endl;
		cout << "Wyplata pracownika I: " << wyplata_pracownika_I << endl;
		cout << "Info chronione pracownika I: " << info_chronione_pracownik_I << endl;
	}
};
class pracownik_J:public kierownik_E {
private:
	int wyplata_pracownika_J;
protected:
	int info_chronione_pracownik_J;
public:
	virtual void wyswietl_info() override {
		cout << "------Dane pracownika J------" << endl;
		cout << "Wyplata pracownika J: " << wyplata_pracownika_J << endl;
		cout << "Info chronione pracownika J: " << info_chronione_pracownik_J << endl;
	}
};

int main() {
	string komenda;
	string gdzie_jestem = "szef";
	
	
	while (true) {
		#ifdef _WIN32
			system("cls");
		#else
			system("clear");
		#endif

		cout << "===============================" << endl;
		cout << "Witaj w systemie zarządzania firmą!" << endl;
		cout << "===============================" << endl;
		cout << "Menu:" << endl;
		cout << "1. CD [Nazwa wezla(klasy)] - zmiana wezla w strukturze" << endl;
		cout << "2. MO [Obiekt] - tworzenie obiektu o nazwie Obiekt dla biezacego liscia - nalezy podac parametru obiektu" << endl;
		cout << "3. DO [Obiekt] - usuwa obiekt o nazwie Obiekt dla biezacego liscia " << endl;
		cout << "4. MDO [Obiekt] - modyfikuje obiekt o nazwie Obiekt dla biezacego liscia" << endl;
		cout << "5. DIR - wysiwetla informacje o obiektach widocznych z danego poziomu - domyslnie tylko informacje o nazwach obiektow" << endl;
		cout << "6. SHOW [Obiekt] - wyswietla szczegolowe informacje o obiecie" << endl;
		cout << "7. SAVE - zapis zbioru do pliku" << endl;
		cout << "8. READ - odczyt zbioru z pliku" << endl;
		cout << "9. TREE - wyswietla strukture drzewa" << endl;
		cout << "10. EXIT - wyjscie z programu" << endl;

		cout << "\n[" << gdzie_jestem << "]> ";
		cin >> komenda;
		
		if (komenda == "EXIT") {
			cout << "Zamykanie programu..." << endl;
			cout << "===============================" << endl;
			break;
		}
		else if (komenda == "CD") {
			string cel;
			cin >> cel;
			gdzie_jestem = cel;
			cout << "Przejscie do: " << gdzie_jestem << endl;
			cout << "\nNacisnij Enter, aby kontynuowac...";
			cin.ignore();
			cin.get();
		}
		else if (komenda == "TREE") {
			cout << "Struktura drzewa:" << endl;
			cout << "Szef (A)" << endl;
			cout << "├── Kierownik B (B)" << endl;
			cout << "├── Kierownik C (C)" << endl;
			cout << "│   ├── Pracownik F (F)" << endl;
			cout << "│   └── Pracownik G (G)" << endl;
			cout << "├── Kierownik D (D)" << endl;
			cout << "│   ├── Pracownik H (H)" << endl;
			cout << "│   └── Pracownik I (I)" << endl;
			cout << "└── Kierownik E (E)" << endl;
			cout << "    └── Pracownik J (J)" << endl;
			
			cout << "\nNacisnij Enter, aby kontynuowac...";
			cin.ignore();
			cin.get();
		
		
		}
		else {
			cout << "Blad:: nieznana komenda: " << komenda << endl;
			cout << "Nacisnij Enter, aby kontynuowac...";
			cin.ignore();
			cin.get();

		}
	}
	return 0;
}

//Następny etap to kolejne punkty z projektu i kolejne komendy