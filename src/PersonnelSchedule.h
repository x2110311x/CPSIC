/**
 * @file PersonnelShedule.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2020-03-31
 * 
 * @copyright Copyright (c) 2020
 * 
 */
#include <string>
#include datetime.h
#include Personnel.h
#include Appointment.h
#include AppointmentSlot.h
#include Schedule.h

class PersonnelShedule : public Schedule {


    private: 
        Personnel personnel;


    public:
        /**
         * @brief Construct a new Personel Shedule object
         * 
         */
        PersonnelShedule();
        /**
         * @brief Construct a new Personel Shedule object
         * 
         * @param personnel 
         * @param date 
         * @param appointments 
         * @param AvailableSlots 
         */
        PersonnelShedule(Personnel personnel, Date date, Appointment appointments, AppointmentSlot AvailableSlots);
        /**
         * @brief Destroy the Personel Shedule object
         * 
         */
        ~PersonnelShedule();

        /**
         * @brief Get the Personnel object
         * 
         * @return Personnel 
         */
        Personnel getPersonnel();

        /**
         * @brief Set the Personnel object
         * 
         * @param personnel 
         */
        void setPersonnel(Personnel personnel);

}