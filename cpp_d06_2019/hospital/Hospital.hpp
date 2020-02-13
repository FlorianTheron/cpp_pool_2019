/*
** EPITECH PROJECT, 2020
** cpp_d06_2019
** File description:
** Hospital
*/

#ifndef HOSPITAL_HPP_
#define HOSPITAL_HPP_

#include "KoalaDoctorList.hpp"
#include "KoalaNurseList.hpp"
#include "SickKoalaList.hpp"

class Hospital {
    public:
        Hospital();
        ~Hospital();
        void addDoctor(KoalaDoctorList *doctorList);
        void addNurse(KoalaNurseList *nurseList);
        void addSick(SickKoalaList *sickList);
        void run();
    private:
        KoalaDoctorList *doctorList;
        KoalaNurseList *nurseList;
        SickKoalaList *sickList;
};

#endif /* !HOSPITAL_HPP_ */
