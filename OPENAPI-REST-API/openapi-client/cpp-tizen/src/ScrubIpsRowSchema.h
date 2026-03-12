/*
 * ScrubIpsRowSchema.h
 *
 * 
 */

#ifndef _ScrubIpsRowSchema_H_
#define _ScrubIpsRowSchema_H_


#include <string>
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

class ScrubIpsRowSchema : public Object {
public:
	/*! \brief Constructor.
	 */
	ScrubIpsRowSchema();
	ScrubIpsRowSchema(char* str);

	/*! \brief Destructor.
	 */
	virtual ~ScrubIpsRowSchema();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	int getScrubIpId();

	/*! \brief Set 
	 */
	void setScrubIpId(int  scrub_ip_id);
	/*! \brief Get 
	 */
	long long getRepeatInvoicesCost();

	/*! \brief Set 
	 */
	void setRepeatInvoicesCost(long long  repeat_invoices_cost);
	/*! \brief Get 
	 */
	std::string getScrubIpIp();

	/*! \brief Set 
	 */
	void setScrubIpIp(std::string  scrub_ip_ip);
	/*! \brief Get 
	 */
	std::string getScrubIpStatus();

	/*! \brief Set 
	 */
	void setScrubIpStatus(std::string  scrub_ip_status);
	/*! \brief Get 
	 */
	std::string getServicesName();

	/*! \brief Set 
	 */
	void setServicesName(std::string  services_name);

private:
	int scrub_ip_id;
	long long repeat_invoices_cost;
	std::string scrub_ip_ip;
	std::string scrub_ip_status;
	std::string services_name;
	void __init();
	void __cleanup();

};
}
}

#endif /* _ScrubIpsRowSchema_H_ */
