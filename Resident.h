#ifndef RESIDENT_H
#define RESIDENT_H

class Resident {


public:
	void exitBanner();

	void login();

	void dispResident();

	void dispApartment();

	void menu();

	class resident_info {

	public:
		char name[50];
		char age[50];
		char phone_no[20];
		char aadhar_no[20];
		char email[15];
		char bill[40];
	};
};

#endif
