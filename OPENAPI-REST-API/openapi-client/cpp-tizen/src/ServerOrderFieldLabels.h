/*
 * ServerOrderFieldLabels.h
 *
 * Field labels for the server order.
 */

#ifndef _ServerOrderFieldLabels_H_
#define _ServerOrderFieldLabels_H_


#include <string>
#include "ServerOrderFieldLabel.h"
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Field labels for the server order.
 *
 *  \ingroup Models
 *
 */

class ServerOrderFieldLabels : public Object {
public:
	/*! \brief Constructor.
	 */
	ServerOrderFieldLabels();
	ServerOrderFieldLabels(char* str);

	/*! \brief Destructor.
	 */
	virtual ~ServerOrderFieldLabels();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Bandwidth field label.
	 */
	ServerOrderFieldLabel getBandwidth();

	/*! \brief Set Bandwidth field label.
	 */
	void setBandwidth(ServerOrderFieldLabel  bandwidth);
	/*! \brief Get IPs field label.
	 */
	ServerOrderFieldLabel getIps();

	/*! \brief Set IPs field label.
	 */
	void setIps(ServerOrderFieldLabel  ips);
	/*! \brief Get Operating System field label.
	 */
	ServerOrderFieldLabel getOs();

	/*! \brief Set Operating System field label.
	 */
	void setOs(ServerOrderFieldLabel  os);
	/*! \brief Get Control Panel field label.
	 */
	ServerOrderFieldLabel getCp();

	/*! \brief Set Control Panel field label.
	 */
	void setCp(ServerOrderFieldLabel  cp);
	/*! \brief Get RAID field label.
	 */
	ServerOrderFieldLabel getRaid();

	/*! \brief Set RAID field label.
	 */
	void setRaid(ServerOrderFieldLabel  raid);
	/*! \brief Get Memory field label.
	 */
	ServerOrderFieldLabel getMemory();

	/*! \brief Set Memory field label.
	 */
	void setMemory(ServerOrderFieldLabel  memory);
	/*! \brief Get Hard Drives field label
	 */
	ServerOrderFieldLabel getHd();

	/*! \brief Set Hard Drives field label
	 */
	void setHd(ServerOrderFieldLabel  hd);

private:
	ServerOrderFieldLabel bandwidth;
	ServerOrderFieldLabel ips;
	ServerOrderFieldLabel os;
	ServerOrderFieldLabel cp;
	ServerOrderFieldLabel raid;
	ServerOrderFieldLabel memory;
	ServerOrderFieldLabel hd;
	void __init();
	void __cleanup();

};
}
}

#endif /* _ServerOrderFieldLabels_H_ */
