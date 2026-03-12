
/*
 * DomainBillingExtra.h
 *
 * Extended billing context for a domain including registrar order details and contact info.
 */

#ifndef TINY_CPP_CLIENT_DomainBillingExtra_H_
#define TINY_CPP_CLIENT_DomainBillingExtra_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "DomainOrderResponse.h"
#include "DomainProvProcessPending.h"

namespace Tiny {


/*! \brief Extended billing context for a domain including registrar order details and contact info.
 *
 *  \ingroup Models
 *
 */

class DomainBillingExtra{
public:

    /*! \brief Constructor.
	 */
    DomainBillingExtra();
    DomainBillingExtra(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~DomainBillingExtra();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	DomainOrderResponse getOrder();

	/*! \brief Set 
	 */
	void setOrder(DomainOrderResponse order);
	/*! \brief Get 
	 */
	std::string getOrderId();

	/*! \brief Set 
	 */
	void setOrderId(std::string order_id);
	/*! \brief Get 
	 */
	std::string getDomainId();

	/*! \brief Set 
	 */
	void setDomainId(std::string domain_id);
	/*! \brief Get 
	 */
	DomainProvProcessPending getProvProcessPending();

	/*! \brief Set 
	 */
	void setProvProcessPending(DomainProvProcessPending provProcessPending);
	/*! \brief Get 
	 */
	std::string getEmail();

	/*! \brief Set 
	 */
	void setEmail(std::string email);
	/*! \brief Get 
	 */
	std::string getFirstname();

	/*! \brief Set 
	 */
	void setFirstname(std::string firstname);
	/*! \brief Get 
	 */
	std::string getLastname();

	/*! \brief Set 
	 */
	void setLastname(std::string lastname);
	/*! \brief Get 
	 */
	std::string getCompany();

	/*! \brief Set 
	 */
	void setCompany(std::string company);
	/*! \brief Get 
	 */
	std::string getAddress();

	/*! \brief Set 
	 */
	void setAddress(std::string address);
	/*! \brief Get 
	 */
	std::string getAddress2();

	/*! \brief Set 
	 */
	void setAddress2(std::string address2);
	/*! \brief Get 
	 */
	std::string getAddress3();

	/*! \brief Set 
	 */
	void setAddress3(std::string address3);
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
	std::string getPhone();

	/*! \brief Set 
	 */
	void setPhone(std::string phone);
	/*! \brief Get 
	 */
	std::string getFax();

	/*! \brief Set 
	 */
	void setFax(std::string fax);


    private:
    DomainOrderResponse order;
    std::string order_id{};
    std::string domain_id{};
    DomainProvProcessPending provProcessPending;
    std::string email{};
    std::string firstname{};
    std::string lastname{};
    std::string company{};
    std::string address{};
    std::string address2{};
    std::string address3{};
    std::string city{};
    std::string state{};
    std::string zip{};
    std::string country{};
    std::string phone{};
    std::string fax{};
};
}

#endif /* TINY_CPP_CLIENT_DomainBillingExtra_H_ */
