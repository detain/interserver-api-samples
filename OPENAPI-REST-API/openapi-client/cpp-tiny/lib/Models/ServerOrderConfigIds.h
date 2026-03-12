
/*
 * ServerOrderConfigIds.h
 *
 * Configuration IDs for the server order.
 */

#ifndef TINY_CPP_CLIENT_ServerOrderConfigIds_H_
#define TINY_CPP_CLIENT_ServerOrderConfigIds_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief Configuration IDs for the server order.
 *
 *  \ingroup Models
 *
 */

class ServerOrderConfigIds{
public:

    /*! \brief Constructor.
	 */
    ServerOrderConfigIds();
    ServerOrderConfigIds(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~ServerOrderConfigIds();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get Memory configuration ID for the server order.
	 */
	int getMemory();

	/*! \brief Set Memory configuration ID for the server order.
	 */
	void setMemory(int memory);
	/*! \brief Get Bandwidth configuration ID for the server order.
	 */
	std::string getBandwidth();

	/*! \brief Set Bandwidth configuration ID for the server order.
	 */
	void setBandwidth(std::string bandwidth);
	/*! \brief Get IPs configuration ID for the server order.
	 */
	std::string getIps();

	/*! \brief Set IPs configuration ID for the server order.
	 */
	void setIps(std::string ips);
	/*! \brief Get Operating System configuration ID for the server order.
	 */
	std::string getOs();

	/*! \brief Set Operating System configuration ID for the server order.
	 */
	void setOs(std::string os);
	/*! \brief Get Control Panel configuration ID for the server order.
	 */
	int getCp();

	/*! \brief Set Control Panel configuration ID for the server order.
	 */
	void setCp(int cp);
	/*! \brief Get RAID configuration ID for the server order.
	 */
	std::string getRaid();

	/*! \brief Set RAID configuration ID for the server order.
	 */
	void setRaid(std::string raid);
	/*! \brief Get Hard Drives configuration ID for the server order.
	 */
	std::string getHd();

	/*! \brief Set Hard Drives configuration ID for the server order.
	 */
	void setHd(std::string hd);


    private:
    int memory{};
    std::string bandwidth{};
    std::string ips{};
    std::string os{};
    int cp{};
    std::string raid{};
    std::string hd{};
};
}

#endif /* TINY_CPP_CLIENT_ServerOrderConfigIds_H_ */
