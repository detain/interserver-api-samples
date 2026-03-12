/*
 * DomainServiceInfo.h
 *
 * Detailed domain service record for a domain order.
 */

#ifndef _DomainServiceInfo_H_
#define _DomainServiceInfo_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Detailed domain service record for a domain order.
 *
 *  \ingroup Models
 *
 */

class DomainServiceInfo : public Object {
public:
	/*! \brief Constructor.
	 */
	DomainServiceInfo();
	DomainServiceInfo(char* str);

	/*! \brief Destructor.
	 */
	virtual ~DomainServiceInfo();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::string getDomainId();

	/*! \brief Set 
	 */
	void setDomainId(std::string  domain_id);
	/*! \brief Get 
	 */
	std::string getDomainHostname();

	/*! \brief Set 
	 */
	void setDomainHostname(std::string  domain_hostname);
	/*! \brief Get 
	 */
	std::string getDomainUsername();

	/*! \brief Set 
	 */
	void setDomainUsername(std::string  domain_username);
	/*! \brief Get 
	 */
	std::string getDomainPassword();

	/*! \brief Set 
	 */
	void setDomainPassword(std::string  domain_password);
	/*! \brief Get 
	 */
	std::string getDomainType();

	/*! \brief Set 
	 */
	void setDomainType(std::string  domain_type);
	/*! \brief Get 
	 */
	std::string getDomainCurrency();

	/*! \brief Set 
	 */
	void setDomainCurrency(std::string  domain_currency);
	/*! \brief Get 
	 */
	std::string getDomainExpireDate();

	/*! \brief Set 
	 */
	void setDomainExpireDate(std::string  domain_expire_date);
	/*! \brief Get 
	 */
	std::string getDomainOrderDate();

	/*! \brief Set 
	 */
	void setDomainOrderDate(std::string  domain_order_date);
	/*! \brief Get 
	 */
	std::string getDomainCustid();

	/*! \brief Set 
	 */
	void setDomainCustid(std::string  domain_custid);
	/*! \brief Get 
	 */
	std::string getDomainStatus();

	/*! \brief Set 
	 */
	void setDomainStatus(std::string  domain_status);
	/*! \brief Get 
	 */
	std::string getDomainInvoice();

	/*! \brief Set 
	 */
	void setDomainInvoice(std::string  domain_invoice);
	/*! \brief Get 
	 */
	std::string getDomainCoupon();

	/*! \brief Set 
	 */
	void setDomainCoupon(std::string  domain_coupon);

private:
	std::string domain_id;
	std::string domain_hostname;
	std::string domain_username;
	std::string domain_password;
	std::string domain_type;
	std::string domain_currency;
	std::string domain_expire_date;
	std::string domain_order_date;
	std::string domain_custid;
	std::string domain_status;
	std::string domain_invoice;
	std::string domain_coupon;
	void __init();
	void __cleanup();

};
}
}

#endif /* _DomainServiceInfo_H_ */
