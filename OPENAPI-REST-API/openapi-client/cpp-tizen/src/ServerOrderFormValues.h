/*
 * ServerOrderFormValues.h
 *
 * Form values for the server order.
 */

#ifndef _ServerOrderFormValues_H_
#define _ServerOrderFormValues_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Form values for the server order.
 *
 *  \ingroup Models
 *
 */

class ServerOrderFormValues : public Object {
public:
	/*! \brief Constructor.
	 */
	ServerOrderFormValues();
	ServerOrderFormValues(char* str);

	/*! \brief Destructor.
	 */
	virtual ~ServerOrderFormValues();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Memory value for the server order.
	 */
	int getMemory();

	/*! \brief Set Memory value for the server order.
	 */
	void setMemory(int  memory);
	/*! \brief Get Bandwidth value for the server order.
	 */
	std::string getBandwidth();

	/*! \brief Set Bandwidth value for the server order.
	 */
	void setBandwidth(std::string  bandwidth);
	/*! \brief Get IPs value for the server order.
	 */
	std::string getIps();

	/*! \brief Set IPs value for the server order.
	 */
	void setIps(std::string  ips);
	/*! \brief Get Operating System value for the server order.
	 */
	std::string getOs();

	/*! \brief Set Operating System value for the server order.
	 */
	void setOs(std::string  os);
	/*! \brief Get Control Panel value for the server order.
	 */
	int getCp();

	/*! \brief Set Control Panel value for the server order.
	 */
	void setCp(int  cp);
	/*! \brief Get RAID value for the server order.
	 */
	std::string getRaid();

	/*! \brief Set RAID value for the server order.
	 */
	void setRaid(std::string  raid);
	/*! \brief Get Hard Drives value for the server order.
	 */
	std::string getHd();

	/*! \brief Set Hard Drives value for the server order.
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

#endif /* _ServerOrderFormValues_H_ */
