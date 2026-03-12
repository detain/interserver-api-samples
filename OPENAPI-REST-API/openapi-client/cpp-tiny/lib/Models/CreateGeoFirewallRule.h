
/*
 * CreateGeoFirewallRule.h
 *
 * Create firewall rule for your ip
 */

#ifndef TINY_CPP_CLIENT_CreateGeoFirewallRule_H_
#define TINY_CPP_CLIENT_CreateGeoFirewallRule_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief Create firewall rule for your ip
 *
 *  \ingroup Models
 *
 */

class CreateGeoFirewallRule{
public:

    /*! \brief Constructor.
	 */
    CreateGeoFirewallRule();
    CreateGeoFirewallRule(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~CreateGeoFirewallRule();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 1 = Block,  0 = Whitelist
	 */
	int getXdpAction();

	/*! \brief Set 1 = Block,  0 = Whitelist
	 */
	void setXdpAction(int xdp_action);
	/*! \brief Get 
	 */
	int getDestinationPort();

	/*! \brief Set 
	 */
	void setDestinationPort(int destination_port);
	/*! \brief Get To get country code refer our countries api - https://my.interserver.net/apiv2/account/countries?fetch_by=numcode
	 */
	int getCountryCode();

	/*! \brief Set To get country code refer our countries api - https://my.interserver.net/apiv2/account/countries?fetch_by=numcode
	 */
	void setCountryCode(int country_code);
	/*! \brief Get ASN number
	 */
	int getAsn();

	/*! \brief Set ASN number
	 */
	void setAsn(int asn);


    private:
    int xdp_action{};
    int destination_port{};
    int country_code{};
    int asn{};
};
}

#endif /* TINY_CPP_CLIENT_CreateGeoFirewallRule_H_ */
