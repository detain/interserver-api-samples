
/*
 * ServerOrderFieldLabels.h
 *
 * Field labels for the server order.
 */

#ifndef TINY_CPP_CLIENT_ServerOrderFieldLabels_H_
#define TINY_CPP_CLIENT_ServerOrderFieldLabels_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "ServerOrderFieldLabel.h"

namespace Tiny {


/*! \brief Field labels for the server order.
 *
 *  \ingroup Models
 *
 */

class ServerOrderFieldLabels{
public:

    /*! \brief Constructor.
	 */
    ServerOrderFieldLabels();
    ServerOrderFieldLabels(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~ServerOrderFieldLabels();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get Bandwidth field label.
	 */
	ServerOrderFieldLabel getBandwidth();

	/*! \brief Set Bandwidth field label.
	 */
	void setBandwidth(ServerOrderFieldLabel bandwidth);
	/*! \brief Get IPs field label.
	 */
	ServerOrderFieldLabel getIps();

	/*! \brief Set IPs field label.
	 */
	void setIps(ServerOrderFieldLabel ips);
	/*! \brief Get Operating System field label.
	 */
	ServerOrderFieldLabel getOs();

	/*! \brief Set Operating System field label.
	 */
	void setOs(ServerOrderFieldLabel os);
	/*! \brief Get Control Panel field label.
	 */
	ServerOrderFieldLabel getCp();

	/*! \brief Set Control Panel field label.
	 */
	void setCp(ServerOrderFieldLabel cp);
	/*! \brief Get RAID field label.
	 */
	ServerOrderFieldLabel getRaid();

	/*! \brief Set RAID field label.
	 */
	void setRaid(ServerOrderFieldLabel raid);
	/*! \brief Get Memory field label.
	 */
	ServerOrderFieldLabel getMemory();

	/*! \brief Set Memory field label.
	 */
	void setMemory(ServerOrderFieldLabel memory);
	/*! \brief Get Hard Drives field label
	 */
	ServerOrderFieldLabel getHd();

	/*! \brief Set Hard Drives field label
	 */
	void setHd(ServerOrderFieldLabel hd);


    private:
    ServerOrderFieldLabel bandwidth;
    ServerOrderFieldLabel ips;
    ServerOrderFieldLabel os;
    ServerOrderFieldLabel cp;
    ServerOrderFieldLabel raid;
    ServerOrderFieldLabel memory;
    ServerOrderFieldLabel hd;
};
}

#endif /* TINY_CPP_CLIENT_ServerOrderFieldLabels_H_ */
