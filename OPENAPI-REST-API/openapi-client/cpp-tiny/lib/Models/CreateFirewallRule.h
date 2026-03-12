
/*
 * CreateFirewallRule.h
 *
 * Create firewall rule for your ip
 */

#ifndef TINY_CPP_CLIENT_CreateFirewallRule_H_
#define TINY_CPP_CLIENT_CreateFirewallRule_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief Create firewall rule for your ip
 *
 *  \ingroup Models
 *
 */

class CreateFirewallRule{
public:

    /*! \brief Constructor.
	 */
    CreateFirewallRule();
    CreateFirewallRule(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~CreateFirewallRule();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 1 = TCP, 2 = UDP
	 */
	int getProtocolId();

	/*! \brief Set 1 = TCP, 2 = UDP
	 */
	void setProtocolId(int protocol_id);
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
	/*! \brief Get 
	 */
	std::string getSourceIp();

	/*! \brief Set 
	 */
	void setSourceIp(std::string source_ip);
	/*! \brief Get 
	 */
	int getSourcePort();

	/*! \brief Set 
	 */
	void setSourcePort(int source_port);


    private:
    int protocol_id{};
    int xdp_action{};
    int destination_port{};
    std::string source_ip{};
    int source_port{};
};
}

#endif /* TINY_CPP_CLIENT_CreateFirewallRule_H_ */
