/*
 * CreateGeoFirewallRule.h
 *
 * Create firewall rule for your ip
 */

#ifndef _CreateGeoFirewallRule_H_
#define _CreateGeoFirewallRule_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Create firewall rule for your ip
 *
 *  \ingroup Models
 *
 */

class CreateGeoFirewallRule : public Object {
public:
	/*! \brief Constructor.
	 */
	CreateGeoFirewallRule();
	CreateGeoFirewallRule(char* str);

	/*! \brief Destructor.
	 */
	virtual ~CreateGeoFirewallRule();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 1 = Block,  0 = Whitelist
	 */
	int getXdpAction();

	/*! \brief Set 1 = Block,  0 = Whitelist
	 */
	void setXdpAction(int  xdp_action);
	/*! \brief Get 
	 */
	int getDestinationPort();

	/*! \brief Set 
	 */
	void setDestinationPort(int  destination_port);
	/*! \brief Get To get country code refer our countries api - https://my.interserver.net/apiv2/account/countries?fetch_by=numcode
	 */
	int getCountryCode();

	/*! \brief Set To get country code refer our countries api - https://my.interserver.net/apiv2/account/countries?fetch_by=numcode
	 */
	void setCountryCode(int  country_code);
	/*! \brief Get ASN number
	 */
	int getAsn();

	/*! \brief Set ASN number
	 */
	void setAsn(int  asn);

private:
	int xdp_action;
	int destination_port;
	int country_code;
	int asn;
	void __init();
	void __cleanup();

};
}
}

#endif /* _CreateGeoFirewallRule_H_ */
