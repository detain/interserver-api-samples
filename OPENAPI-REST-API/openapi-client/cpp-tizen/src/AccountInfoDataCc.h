/*
 * AccountInfoDataCc.h
 *
 * Credit card information stored on the account.
 */

#ifndef _AccountInfoDataCc_H_
#define _AccountInfoDataCc_H_


#include <string>
#include "AccountInfoMaxMindResponse.h"
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Credit card information stored on the account.
 *
 *  \ingroup Models
 *
 */

class AccountInfoDataCc : public Object {
public:
	/*! \brief Constructor.
	 */
	AccountInfoDataCc();
	AccountInfoDataCc(char* str);

	/*! \brief Destructor.
	 */
	virtual ~AccountInfoDataCc();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::string getCc();

	/*! \brief Set 
	 */
	void setCc(std::string  cc);
	/*! \brief Get 
	 */
	std::string getCcExp();

	/*! \brief Set 
	 */
	void setCcExp(std::string  cc_exp);
	/*! \brief Get 
	 */
	std::string getName();

	/*! \brief Set 
	 */
	void setName(std::string  name);
	/*! \brief Get 
	 */
	std::string getAddress();

	/*! \brief Set 
	 */
	void setAddress(std::string  address);
	/*! \brief Get 
	 */
	std::string getCity();

	/*! \brief Set 
	 */
	void setCity(std::string  city);
	/*! \brief Get 
	 */
	std::string getState();

	/*! \brief Set 
	 */
	void setState(std::string  state);
	/*! \brief Get 
	 */
	std::string getZip();

	/*! \brief Set 
	 */
	void setZip(std::string  zip);
	/*! \brief Get 
	 */
	std::string getCountry();

	/*! \brief Set 
	 */
	void setCountry(std::string  country);
	/*! \brief Get 
	 */
	std::string getMaxmindRiskscore();

	/*! \brief Set 
	 */
	void setMaxmindRiskscore(std::string  maxmind_riskscore);
	/*! \brief Get 
	 */
	AccountInfoMaxMindResponse getMaxmind();

	/*! \brief Set 
	 */
	void setMaxmind(AccountInfoMaxMindResponse  maxmind);
	/*! \brief Get 
	 */
	bool getVerified();

	/*! \brief Set 
	 */
	void setVerified(bool  verified);

private:
	std::string cc;
	std::string cc_exp;
	std::string name;
	std::string address;
	std::string city;
	std::string state;
	std::string zip;
	std::string country;
	std::string maxmind_riskscore;
	AccountInfoMaxMindResponse maxmind;
	bool verified;
	void __init();
	void __cleanup();

};
}
}

#endif /* _AccountInfoDataCc_H_ */
