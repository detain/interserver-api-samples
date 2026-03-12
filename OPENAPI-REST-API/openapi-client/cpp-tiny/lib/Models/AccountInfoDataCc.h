
/*
 * AccountInfoDataCc.h
 *
 * Credit card information stored on the account.
 */

#ifndef TINY_CPP_CLIENT_AccountInfoDataCc_H_
#define TINY_CPP_CLIENT_AccountInfoDataCc_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "AccountInfoMaxMindResponse.h"

namespace Tiny {


/*! \brief Credit card information stored on the account.
 *
 *  \ingroup Models
 *
 */

class AccountInfoDataCc{
public:

    /*! \brief Constructor.
	 */
    AccountInfoDataCc();
    AccountInfoDataCc(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~AccountInfoDataCc();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	std::string getCc();

	/*! \brief Set 
	 */
	void setCc(std::string cc);
	/*! \brief Get 
	 */
	std::string getCcExp();

	/*! \brief Set 
	 */
	void setCcExp(std::string cc_exp);
	/*! \brief Get 
	 */
	std::string getName();

	/*! \brief Set 
	 */
	void setName(std::string name);
	/*! \brief Get 
	 */
	std::string getAddress();

	/*! \brief Set 
	 */
	void setAddress(std::string address);
	/*! \brief Get 
	 */
	std::string getCity();

	/*! \brief Set 
	 */
	void setCity(std::string city);
	/*! \brief Get 
	 */
	std::string getState();

	/*! \brief Set 
	 */
	void setState(std::string state);
	/*! \brief Get 
	 */
	std::string getZip();

	/*! \brief Set 
	 */
	void setZip(std::string zip);
	/*! \brief Get 
	 */
	std::string getCountry();

	/*! \brief Set 
	 */
	void setCountry(std::string country);
	/*! \brief Get 
	 */
	std::string getMaxmindRiskscore();

	/*! \brief Set 
	 */
	void setMaxmindRiskscore(std::string maxmind_riskscore);
	/*! \brief Get 
	 */
	AccountInfoMaxMindResponse getMaxmind();

	/*! \brief Set 
	 */
	void setMaxmind(AccountInfoMaxMindResponse maxmind);
	/*! \brief Get 
	 */
	bool isVerified();

	/*! \brief Set 
	 */
	void setVerified(bool verified);


    private:
    std::string cc{};
    std::string cc_exp{};
    std::string name{};
    std::string address{};
    std::string city{};
    std::string state{};
    std::string zip{};
    std::string country{};
    std::string maxmind_riskscore{};
    AccountInfoMaxMindResponse maxmind;
    bool verified{};
};
}

#endif /* TINY_CPP_CLIENT_AccountInfoDataCc_H_ */
