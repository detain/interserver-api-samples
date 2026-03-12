/*
 * CreateFirewallRule.h
 *
 * Create firewall rule for your ip
 */

#ifndef _CreateFirewallRule_H_
#define _CreateFirewallRule_H_


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

class CreateFirewallRule : public Object {
public:
	/*! \brief Constructor.
	 */
	CreateFirewallRule();
	CreateFirewallRule(char* str);

	/*! \brief Destructor.
	 */
	virtual ~CreateFirewallRule();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 1 = TCP, 2 = UDP
	 */
	int getProtocolId();

	/*! \brief Set 1 = TCP, 2 = UDP
	 */
	void setProtocolId(int  protocol_id);
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
	/*! \brief Get 
	 */
	std::string getSourceIp();

	/*! \brief Set 
	 */
	void setSourceIp(std::string  source_ip);
	/*! \brief Get 
	 */
	int getSourcePort();

	/*! \brief Set 
	 */
	void setSourcePort(int  source_port);

private:
	int protocol_id;
	int xdp_action;
	int destination_port;
	std::string source_ip;
	int source_port;
	void __init();
	void __cleanup();

};
}
}

#endif /* _CreateFirewallRule_H_ */
