/*
 * MailStatsType.h
 *
 * Statistics about the mail usage including volume by IP, To address, and From address; as well as total sent / delivered counts and cost.
 */

#ifndef _MailStatsType_H_
#define _MailStatsType_H_


#include <string>
#include "MailStatsType_volume.h"
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Statistics about the mail usage including volume by IP, To address, and From address; as well as total sent / delivered counts and cost.
 *
 *  \ingroup Models
 *
 */

class MailStatsType : public Object {
public:
	/*! \brief Constructor.
	 */
	MailStatsType();
	MailStatsType(char* str);

	/*! \brief Destructor.
	 */
	virtual ~MailStatsType();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::string getTime();

	/*! \brief Set 
	 */
	void setTime(std::string  time);
	/*! \brief Get 
	 */
	int getUsage();

	/*! \brief Set 
	 */
	void setUsage(int  usage);
	/*! \brief Get 
	 */
	std::string getCurrency();

	/*! \brief Set 
	 */
	void setCurrency(std::string  currency);
	/*! \brief Get 
	 */
	std::string getCurrencySymbol();

	/*! \brief Set 
	 */
	void setCurrencySymbol(std::string  currencySymbol);
	/*! \brief Get 
	 */
	double getCost();

	/*! \brief Set 
	 */
	void setCost(double  cost);
	/*! \brief Get 
	 */
	int getReceived();

	/*! \brief Set 
	 */
	void setReceived(int  received);
	/*! \brief Get 
	 */
	int getSent();

	/*! \brief Set 
	 */
	void setSent(int  sent);
	/*! \brief Get 
	 */
	MailStatsType_volume getVolume();

	/*! \brief Set 
	 */
	void setVolume(MailStatsType_volume  volume);

private:
	std::string time;
	int usage;
	std::string currency;
	std::string currencySymbol;
	double cost;
	int received;
	int sent;
	MailStatsType_volume volume;
	void __init();
	void __cleanup();

};
}
}

#endif /* _MailStatsType_H_ */
