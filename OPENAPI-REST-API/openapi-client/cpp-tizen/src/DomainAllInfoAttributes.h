/*
 * DomainAllInfo_attributes.h
 *
 * 
 */

#ifndef _DomainAllInfo_attributes_H_
#define _DomainAllInfo_attributes_H_


#include <string>
#include "DomainAllInfo_attributes_contact_set.h"
#include "DomainNameServer.h"
#include <list>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class DomainAllInfo_attributes : public Object {
public:
	/*! \brief Constructor.
	 */
	DomainAllInfo_attributes();
	DomainAllInfo_attributes(char* str);

	/*! \brief Destructor.
	 */
	virtual ~DomainAllInfo_attributes();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	DomainAllInfo_attributes_contact_set getContactSet();

	/*! \brief Set 
	 */
	void setContactSet(DomainAllInfo_attributes_contact_set  contact_set);
	/*! \brief Get 
	 */
	std::string getRegistryCreatedate();

	/*! \brief Set 
	 */
	void setRegistryCreatedate(std::string  registry_createdate);
	/*! \brief Get 
	 */
	std::string getRegistryExpiredate();

	/*! \brief Set 
	 */
	void setRegistryExpiredate(std::string  registry_expiredate);
	/*! \brief Get 
	 */
	std::string getTldData();

	/*! \brief Set 
	 */
	void setTldData(std::string  tld_data);
	/*! \brief Get 
	 */
	std::string getLetExpire();

	/*! \brief Set 
	 */
	void setLetExpire(std::string  let_expire);
	/*! \brief Get 
	 */
	std::string getAutoRenew();

	/*! \brief Set 
	 */
	void setAutoRenew(std::string  auto_renew);
	/*! \brief Get 
	 */
	std::string getSponsoringRsp();

	/*! \brief Set 
	 */
	void setSponsoringRsp(std::string  sponsoring_rsp);
	/*! \brief Get 
	 */
	std::string getGdprConsentStatus();

	/*! \brief Set 
	 */
	void setGdprConsentStatus(std::string  gdpr_consent_status);
	/*! \brief Get 
	 */
	std::list<DomainNameServer> getNameserverList();

	/*! \brief Set 
	 */
	void setNameserverList(std::list <DomainNameServer> nameserver_list);
	/*! \brief Get 
	 */
	std::string getRegistryUpdatedate();

	/*! \brief Set 
	 */
	void setRegistryUpdatedate(std::string  registry_updatedate);
	/*! \brief Get 
	 */
	std::string getAffiliateId();

	/*! \brief Set 
	 */
	void setAffiliateId(std::string  affiliate_id);
	/*! \brief Get 
	 */
	std::string getExpiredate();

	/*! \brief Set 
	 */
	void setExpiredate(std::string  expiredate);

private:
	DomainAllInfo_attributes_contact_set contact_set;
	std::string registry_createdate;
	std::string registry_expiredate;
	std::string tld_data;
	std::string let_expire;
	std::string auto_renew;
	std::string sponsoring_rsp;
	std::string gdpr_consent_status;
	std::list <DomainNameServer>nameserver_list;
	std::string registry_updatedate;
	std::string affiliate_id;
	std::string expiredate;
	void __init();
	void __cleanup();

};
}
}

#endif /* _DomainAllInfo_attributes_H_ */
