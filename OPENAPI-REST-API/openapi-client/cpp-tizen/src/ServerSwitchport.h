/*
 * ServerSwitchport.h
 *
 * 
 */

#ifndef _ServerSwitchport_H_
#define _ServerSwitchport_H_


#include <string>
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

class ServerSwitchport : public Object {
public:
	/*! \brief Constructor.
	 */
	ServerSwitchport();
	ServerSwitchport(char* str);

	/*! \brief Destructor.
	 */
	virtual ~ServerSwitchport();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Unique identifier for the switchport.
	 */
	int getSwitchportId();

	/*! \brief Set Unique identifier for the switchport.
	 */
	void setSwitchportId(int  switchport_id);
	/*! \brief Get Unique identifier for the switch associated with the switchport.
	 */
	std::string getSwitchId();

	/*! \brief Set Unique identifier for the switch associated with the switchport.
	 */
	void setSwitchId(std::string  switch_id);
	/*! \brief Get Name of the switch associated with the switchport.
	 */
	std::string getRSwitch();

	/*! \brief Set Name of the switch associated with the switchport.
	 */
	void setRSwitch(std::string  r_switch);
	/*! \brief Get Port name on the switch.
	 */
	std::string getPort();

	/*! \brief Set Port name on the switch.
	 */
	void setPort(std::string  port);
	/*! \brief Get Blade name associated with the port.
	 */
	std::string getBlade();

	/*! \brief Set Blade name associated with the port.
	 */
	void setBlade(std::string  blade);
	/*! \brief Get Port identifier.
	 */
	std::string getJustport();

	/*! \brief Set Port identifier.
	 */
	void setJustport(std::string  justport);
	/*! \brief Get Identifier for the graph associated with the switchport.
	 */
	std::string getGraphId();

	/*! \brief Set Identifier for the graph associated with the switchport.
	 */
	void setGraphId(std::string  graph_id);
	/*! \brief Get Unique identifier of the asset associated with the switchport.
	 */
	int getAssetId();

	/*! \brief Set Unique identifier of the asset associated with the switchport.
	 */
	void setAssetId(int  asset_id);
	/*! \brief Get List of VLANs associated with the switchport.
	 */
	std::list<std::string> getVlans();

	/*! \brief Set List of VLANs associated with the switchport.
	 */
	void setVlans(std::list <std::string> vlans);
	/*! \brief Get List of IPv6 VLANs associated with the switchport.
	 */
	std::list<std::string> getVlans6();

	/*! \brief Set List of IPv6 VLANs associated with the switchport.
	 */
	void setVlans6(std::list <std::string> vlans6);

private:
	int switchport_id;
	std::string switch_id;
	std::string r_switch;
	std::string port;
	std::string blade;
	std::string justport;
	std::string graph_id;
	int asset_id;
	std::list <std::string>vlans;
	std::list <std::string>vlans6;
	void __init();
	void __cleanup();

};
}
}

#endif /* _ServerSwitchport_H_ */
