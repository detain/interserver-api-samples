/*
 * ServerOrderConfigIds.h
 *
 * Configuration IDs for the server order.
 */

#ifndef _ServerOrderConfigIds_H_
#define _ServerOrderConfigIds_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Configuration IDs for the server order.
 *
 *  \ingroup Models
 *
 */

class ServerOrderConfigIds : public Object {
public:
	/*! \brief Constructor.
	 */
	ServerOrderConfigIds();
	ServerOrderConfigIds(char* str);

	/*! \brief Destructor.
	 */
	virtual ~ServerOrderConfigIds();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Memory configuration ID for the server order.
	 */
	int getMemory();

	/*! \brief Set Memory configuration ID for the server order.
	 */
	void setMemory(int  memory);
	/*! \brief Get Bandwidth configuration ID for the server order.
	 */
	std::string getBandwidth();

	/*! \brief Set Bandwidth configuration ID for the server order.
	 */
	void setBandwidth(std::string  bandwidth);
	/*! \brief Get IPs configuration ID for the server order.
	 */
	std::string getIps();

	/*! \brief Set IPs configuration ID for the server order.
	 */
	void setIps(std::string  ips);
	/*! \brief Get Operating System configuration ID for the server order.
	 */
	std::string getOs();

	/*! \brief Set Operating System configuration ID for the server order.
	 */
	void setOs(std::string  os);
	/*! \brief Get Control Panel configuration ID for the server order.
	 */
	int getCp();

	/*! \brief Set Control Panel configuration ID for the server order.
	 */
	void setCp(int  cp);
	/*! \brief Get RAID configuration ID for the server order.
	 */
	std::string getRaid();

	/*! \brief Set RAID configuration ID for the server order.
	 */
	void setRaid(std::string  raid);
	/*! \brief Get Hard Drives configuration ID for the server order.
	 */
	std::string getHd();

	/*! \brief Set Hard Drives configuration ID for the server order.
	 */
	void setHd(std::string  hd);

private:
	int memory;
	std::string bandwidth;
	std::string ips;
	std::string os;
	int cp;
	std::string raid;
	std::string hd;
	void __init();
	void __cleanup();

};
}
}

#endif /* _ServerOrderConfigIds_H_ */
