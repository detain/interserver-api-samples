
/*
 * DomainServiceInfo.h
 *
 * Detailed domain service record for a domain order.
 */

#ifndef TINY_CPP_CLIENT_DomainServiceInfo_H_
#define TINY_CPP_CLIENT_DomainServiceInfo_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief Detailed domain service record for a domain order.
 *
 *  \ingroup Models
 *
 */

class DomainServiceInfo{
public:

    /*! \brief Constructor.
	 */
    DomainServiceInfo();
    DomainServiceInfo(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~DomainServiceInfo();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	std::string getDomainId();

	/*! \brief Set 
	 */
	void setDomainId(std::string domain_id);
	/*! \brief Get 
	 */
	std::string getDomainHostname();

	/*! \brief Set 
	 */
	void setDomainHostname(std::string domain_hostname);
	/*! \brief Get 
	 */
	std::string getDomainUsername();

	/*! \brief Set 
	 */
	void setDomainUsername(std::string domain_username);
	/*! \brief Get 
	 */
	std::string getDomainPassword();

	/*! \brief Set 
	 */
	void setDomainPassword(std::string domain_password);
	/*! \brief Get 
	 */
	std::string getDomainType();

	/*! \brief Set 
	 */
	void setDomainType(std::string domain_type);
	/*! \brief Get 
	 */
	std::string getDomainCurrency();

	/*! \brief Set 
	 */
	void setDomainCurrency(std::string domain_currency);
	/*! \brief Get 
	 */
	std::string getDomainExpireDate();

	/*! \brief Set 
	 */
	void setDomainExpireDate(std::string domain_expire_date);
	/*! \brief Get 
	 */
	std::string getDomainOrderDate();

	/*! \brief Set 
	 */
	void setDomainOrderDate(std::string domain_order_date);
	/*! \brief Get 
	 */
	std::string getDomainCustid();

	/*! \brief Set 
	 */
	void setDomainCustid(std::string domain_custid);
	/*! \brief Get 
	 */
	std::string getDomainStatus();

	/*! \brief Set 
	 */
	void setDomainStatus(std::string domain_status);
	/*! \brief Get 
	 */
	std::string getDomainInvoice();

	/*! \brief Set 
	 */
	void setDomainInvoice(std::string domain_invoice);
	/*! \brief Get 
	 */
	std::string getDomainCoupon();

	/*! \brief Set 
	 */
	void setDomainCoupon(std::string domain_coupon);


    private:
    std::string domain_id{};
    std::string domain_hostname{};
    std::string domain_username{};
    std::string domain_password{};
    std::string domain_type{};
    std::string domain_currency{};
    std::string domain_expire_date{};
    std::string domain_order_date{};
    std::string domain_custid{};
    std::string domain_status{};
    std::string domain_invoice{};
    std::string domain_coupon{};
};
}

#endif /* TINY_CPP_CLIENT_DomainServiceInfo_H_ */
