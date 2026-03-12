
/*
 * ServerOrderFormValues.h
 *
 * Form values for the server order.
 */

#ifndef TINY_CPP_CLIENT_ServerOrderFormValues_H_
#define TINY_CPP_CLIENT_ServerOrderFormValues_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief Form values for the server order.
 *
 *  \ingroup Models
 *
 */

class ServerOrderFormValues{
public:

    /*! \brief Constructor.
	 */
    ServerOrderFormValues();
    ServerOrderFormValues(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~ServerOrderFormValues();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get Memory value for the server order.
	 */
	int getMemory();

	/*! \brief Set Memory value for the server order.
	 */
	void setMemory(int memory);
	/*! \brief Get Bandwidth value for the server order.
	 */
	std::string getBandwidth();

	/*! \brief Set Bandwidth value for the server order.
	 */
	void setBandwidth(std::string bandwidth);
	/*! \brief Get IPs value for the server order.
	 */
	std::string getIps();

	/*! \brief Set IPs value for the server order.
	 */
	void setIps(std::string ips);
	/*! \brief Get Operating System value for the server order.
	 */
	std::string getOs();

	/*! \brief Set Operating System value for the server order.
	 */
	void setOs(std::string os);
	/*! \brief Get Control Panel value for the server order.
	 */
	int getCp();

	/*! \brief Set Control Panel value for the server order.
	 */
	void setCp(int cp);
	/*! \brief Get RAID value for the server order.
	 */
	std::string getRaid();

	/*! \brief Set RAID value for the server order.
	 */
	void setRaid(std::string raid);
	/*! \brief Get Hard Drives value for the server order.
	 */
	std::string getHd();

	/*! \brief Set Hard Drives value for the server order.
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

#endif /* TINY_CPP_CLIENT_ServerOrderFormValues_H_ */
