#include "Person.h"
#include "CreditDossier.h"
#include "BankLoan.h"

/*
Теория расчета аннуитетного платежа
http://damoney.ru/bank/38_formula_annuitet.php
*/

int main() {
	BankLoan loanSixMonths("Six month loan", 100000.0, 6, 20);
    BankLoan loanTwelveMonths("Loan for a year", 500000.0, 12, 20);
	BankLoan loanTwoYears("Loan for two years", 2000000.0, 24, 20);

	Person ivanov("Ivanov", "Ivan", "Ivanovich");
	Person petrov("Petrov", "Petr", "Petrovich");
	Person sidorov("Sidorov", "Sidor", "Sidorovich");

	CreditDossier cardIvanov, cardPetrov, cardSidorov;

	cardIvanov.setPerson(ivanov);
	cardIvanov.setLoan(loanSixMonths);
	
	cardPetrov.setPerson(petrov);
	cardPetrov.setLoan(loanSixMonths);
	cardPetrov.setLoan(loanTwoYears);

	cardSidorov.setPerson(sidorov);
	cardSidorov.setLoan(loanTwelveMonths);
	cardSidorov.setLoan(loanTwoYears);

	/*cardIvanov.getLoanByName();*/
	
	cardIvanov.getLoanBySumm();
	/*
	cardIvanov.getLoanByRepaymentAmount();

	BankLoan::getLoanRepaymentSchedule(loanSixMonths);
	BankLoan::getLoanRepaymentSchedule(loanTwoYears);

	cardIvanov.getRepaymentSchedule();
	cardPetrov.getRepaymentSchedule();
	cardSidorov.getRepaymentSchedule();

	return 0;
}*/
}

/*
for metods: getLoanByName, getLoanBySumm, getLoanByRepaymentAmount

Name: Ivanov I.I. --- Loans
----------------------------------------------------
Name			Summ		Amount
...			...		...
...			...		...
...			...		...
----------------------------------------------------
*/

/*
for metod: getLoanRepaymentSchedule

Loan name: ...
Loan summ: ...
----------------------------------------------------
Months			Amount
...			...
...			...
...			...
----------------------------------------------------
Overpayments : ...
*/

/*
for metod: getRepaymentSchedule

Name: Ivanov I.I.
-------------------------------------------------------------------------
Months			Amount			Decryption of payment
...			...			...
...			...			...
...			...			...
-------------------------------------------------------------------------
Overpayments : ...

*/

bankload.h
#pragma once
#include <iostream>
#include <string>

using namespace std;
class BankLoan
{

	string _name;
	size_t _quantity_month;
	size_t _percentage;
	double _sum_credit;

public:
	BankLoan(const char* _Nm, double _sm_crdt, size_t _qntt_mnth, size_t _prcnt);
	double credit_size();
	BankLoan();
};

person.h
#pragma once
#include <iostream>
#include <string>
using namespace std;

class Person
{
	string _name;
	string _surname;
	string _sec_name;

public:
	Person();
	Person(string _srnnm , string _nm , string _sc_nm);
};

creditdossier.h
#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "BankLoan.h"
#include "Person.h"
using namespace std;

class CreditDossier
{
	Person person;
	std::vector<BankLoan> loans;
public:
	CreditDossier();
	void setPerson(Person prsn);
	void setLoan(BankLoan loan);
	void getLoanByName();
};


person.cpp
#include "Person.h"

Person::Person()
{
}

Person::Person(string _srnnm, string _nm, string _sc_nm)
{
	this->_surname = _srnnm;
	this->_name = _nm;
	this->_sec_name = _sc_nm;
}

creditdossier.cpp
#include "CreditDossier.h"

CreditDossier::CreditDossier()
{
}

void CreditDossier::setPerson(Person prsn)
{
	this->person = person;
}

void CreditDossier::setLoan(BankLoan loan)
{
	loans.push_back(loan);
}

void CreditDossier::getLoanByName()
{
    size_t SIZE = loans.size();
    BankLoan temp;
    for (auto i = 0; i < SIZE - 1; i++) {
        for (auto j = 0; j < SIZE - i - 1; j++) {
            if (loans[j].credit_size() > loans[j + 1].credit_size()) {
                // меняем элементы местами
                temp = loans[j];
                loans[j] = loans[j + 1];
                loans[j + 1] = temp;
            }
        }
    }
}



bankloan.cpp

#include "BankLoan.h"

BankLoan::BankLoan(const char* _Nm, double _sm_crdt, size_t _qntt_mnth, size_t _prcnt)
{
	this->_name = _Nm;
	this->_sum_credit = _sm_crdt;
	this->_quantity_month = _qntt_mnth;
	this->_percentage = _prcnt;
}

double BankLoan::credit_size()
{
	return this->_sum_credit;
}

BankLoan::BankLoan()
{
}
