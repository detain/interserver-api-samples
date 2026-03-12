
/*
 * BillingAddCcRequest.h
 *
 * Request to add a new creditcard into the system.
 */

#ifndef TINY_CPP_CLIENT_BillingAddCcRequest_H_
#define TINY_CPP_CLIENT_BillingAddCcRequest_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief Request to add a new creditcard into the system.
 *
 *  \ingroup Models
 *
 */

class BillingAddCcRequest{
public:

    /*! \brief Constructor.
	 */
    BillingAddCcRequest();
    BillingAddCcRequest(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~BillingAddCcRequest();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

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
	std::string getCountry();

	/*! \brief Set 
	 */
	void setCountry(std::string country);
	/*! \brief Get 
	 */
	std::string getZip();

	/*! \brief Set 
	 */
	void setZip(std::string zip);
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
	std::string getCcCcv2();

	/*! \brief Set 
	 */
	void setCcCcv2(std::string cc_ccv2);


    private:
    std::string name{};
    std::string address{};
    std::string city{};
    std::string state{};
    std::string country{};
    std::string zip{};
    std::string cc{};
    std::string cc_exp{};
    std::string cc_ccv2{};
};
}

#endif /* TINY_CPP_CLIENT_BillingAddCcRequest_H_ */
