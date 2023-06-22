#ifndef ADMIN_H
#define ADMIN_H

class Admin : Resident {


public:
	void login();

	void addApartment();

	void addResident();

	void addResBill();

	void menu();

	class apartment_info {

	public:
		char name[20];
		char address[100];
		char type[10];
		char pincode[5];
		char price[8];
	};
};

#endif
