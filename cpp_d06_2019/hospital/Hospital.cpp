/*
** EPITECH PROJECT, 2020
** cpp_d06_2019
** File description:
** Hospital
*/

#include "Hospital.hpp"

Hospital::Hospital()
{
    this->doctorList = nullptr;
    this->nurseList = nullptr;
    this->sickList = nullptr;
}

Hospital::~Hospital()
{
    if (this->doctorList)
        delete(this->doctorList);
    if (this->nurseList)
        delete(this->nurseList);
    if (this->sickList)
        delete(this->sickList);
}

void Hospital::addDoctor(KoalaDoctorList *list)
{
    if (!this->doctorList->exists(list))
    {
        std::cout << "[HOSPITAL] Doctor " << list->getContent()->getName() << " just arrived!" << std::endl;
        list->getContent()->timeCheck();
    }
    if (!this->doctorList)
    {
        this->doctorList = new(KoalaDoctorList)(list->getContent());;
    }
    else
    {
        this->doctorList->append(list);
    }
}

void Hospital::addNurse(KoalaNurseList *list)
{
    if (!this->nurseList->exists(list))
    {
        std::cout << "[HOSPITAL] Nurse " << list->getContent()->getID() << " just arrived!" << std::endl;
        list->getContent()->timeCheck();
    }
    if (!this->nurseList)
    {
        this->nurseList = new(KoalaNurseList)(list->getContent());
    }
    else
    {
        this->nurseList->append(list);
    }
}

void Hospital::addSick(SickKoalaList *list)
{
    if (!this->sickList)
    {
        this->sickList = new(SickKoalaList)(list->getContent());
    }
    else
    {
        this->sickList->append(list);
    }
    if (!this->sickList->exists(list))
        std::cout << "[HOSPITAL] Patient " << list->getContent()->getName() << " just arrived!" << std::endl;
}

void Hospital::run()
{
    std::cout << "[HOSPITAL] Work starting with:" << std::endl;
    this->doctorList->dump();
    this->nurseList->dump();
    this->sickList->dump();
    std::cout << std::endl;

    SickKoalaList *sickListCpy = this->sickList;
    KoalaNurseList *koalaNurseCpy = this->nurseList;
    KoalaDoctorList *koalaDoctorCpy = this->doctorList;
    while (!sickListCpy->isEnd())
    {
        if (koalaDoctorCpy->isEnd())
            koalaDoctorCpy = this->doctorList;
        if (koalaNurseCpy->isEnd())
            koalaNurseCpy = this->nurseList;
        koalaDoctorCpy->getContent()->diagnose(sickListCpy->getContent());
        std::string drug = koalaNurseCpy->getContent()->readReport(sickListCpy->getContent()->getName() + ".report");
        koalaNurseCpy->getContent()->giveDrug(drug, sickListCpy->getContent());
        sickListCpy = sickListCpy->getNext();
    }
    this->nurseList->getContent()->timeCheck();
    this->doctorList->getContent()->timeCheck();
}