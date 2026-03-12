/*
 * GetScrubIpDetails_200_response_filter_firewall_rules_inner.h
 *
 * 
 */

#ifndef _GetScrubIpDetails_200_response_filter_firewall_rules_inner_H_
#define _GetScrubIpDetails_200_response_filter_firewall_rules_inner_H_


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

class GetScrubIpDetails_200_response_filter_firewall_rules_inner : public Object {
public:
	/*! \brief Constructor.
	 */
	GetScrubIpDetails_200_response_filter_firewall_rules_inner();
	GetScrubIpDetails_200_response_filter_firewall_rules_inner(char* str);

	/*! \brief Destructor.
	 */
	virtual ~GetScrubIpDetails_200_response_filter_firewall_rules_inner();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::string getId();

	/*! \brief Set 
	 */
	void setId(std::string  id);
	/*! \brief Get 
	 */
	std::string getSourceIp();

	/*! \brief Set 
	 */
	void setSourceIp(std::string  source_ip);
	/*! \brief Get 
	 */
	std::string getDestinationIp();

	/*! \brief Set 
	 */
	void setDestinationIp(std::string  destination_ip);
	/*! \brief Get 
	 */
	std::string getProtocolId();

	/*! \brief Set 
	 */
	void setProtocolId(std::string  protocol_id);
	/*! \brief Get 
	 */
	std::string getSourcePort();

	/*! \brief Set 
	 */
	void setSourcePort(std::string  source_port);
	/*! \brief Get 
	 */
	std::string getDestinationPort();

	/*! \brief Set 
	 */
	void setDestinationPort(std::string  destination_port);
	/*! \brief Get 
	 */
	std::string getXdpAction();

	/*! \brief Set 
	 */
	void setXdpAction(std::string  xdp_action);
	/*! \brief Get 
	 */
	std::string getGlobalDrop();

	/*! \brief Set 
	 */
	void setGlobalDrop(std::string  global_drop);

private:
	std::string id;
	std::string source_ip;
	std::string destination_ip;
	std::string protocol_id;
	std::string source_port;
	std::string destination_port;
	std::string xdp_action;
	std::string global_drop;
	void __init();
	void __cleanup();

};
}
}

#endif /* _GetScrubIpDetails_200_response_filter_firewall_rules_inner_H_ */
