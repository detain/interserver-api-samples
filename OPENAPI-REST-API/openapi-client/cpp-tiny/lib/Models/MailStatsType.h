
/*
 * MailStatsType.h
 *
 * Statistics about the mail usage including volume by IP, To address, and From address; as well as total sent / delivered counts and cost.
 */

#ifndef TINY_CPP_CLIENT_MailStatsType_H_
#define TINY_CPP_CLIENT_MailStatsType_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "MailStatsType_volume.h"

namespace Tiny {


/*! \brief Statistics about the mail usage including volume by IP, To address, and From address; as well as total sent / delivered counts and cost.
 *
 *  \ingroup Models
 *
 */

class MailStatsType{
public:

    /*! \brief Constructor.
	 */
    MailStatsType();
    MailStatsType(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~MailStatsType();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	std::string getTime();

	/*! \brief Set 
	 */
	void setTime(std::string time);
	/*! \brief Get 
	 */
	int getUsage();

	/*! \brief Set 
	 */
	void setUsage(int usage);
	/*! \brief Get 
	 */
	std::string getCurrency();

	/*! \brief Set 
	 */
	void setCurrency(std::string currency);
	/*! \brief Get 
	 */
	std::string getCurrencySymbol();

	/*! \brief Set 
	 */
	void setCurrencySymbol(std::string currencySymbol);
	/*! \brief Get 
	 */
	double getCost();

	/*! \brief Set 
	 */
	void setCost(double cost);
	/*! \brief Get 
	 */
	int getReceived();

	/*! \brief Set 
	 */
	void setReceived(int received);
	/*! \brief Get 
	 */
	int getSent();

	/*! \brief Set 
	 */
	void setSent(int sent);
	/*! \brief Get 
	 */
	MailStatsType_volume getVolume();

	/*! \brief Set 
	 */
	void setVolume(MailStatsType_volume volume);


    private:
    std::string time{};
    int usage{};
    std::string currency{};
    std::string currencySymbol{};
    double cost{};
    int received{};
    int sent{};
    MailStatsType_volume volume;
};
}

#endif /* TINY_CPP_CLIENT_MailStatsType_H_ */
