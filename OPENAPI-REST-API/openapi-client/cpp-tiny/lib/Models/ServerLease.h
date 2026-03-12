
/*
 * ServerLease.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_ServerLease_H_
#define TINY_CPP_CLIENT_ServerLease_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class ServerLease{
public:

    /*! \brief Constructor.
	 */
    ServerLease();
    ServerLease(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~ServerLease();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get MAC address associated with the lease.
	 */
	std::string getMac();

	/*! \brief Set MAC address associated with the lease.
	 */
	void setMac(std::string mac);
	/*! \brief Get Indicates if the lease is authenticated.
	 */
	bool isAuthenticated();

	/*! \brief Set Indicates if the lease is authenticated.
	 */
	void setAuthenticated(bool authenticated);
	/*! \brief Get Group identifier for the lease.
	 */
	std::string getGroup();

	/*! \brief Set Group identifier for the lease.
	 */
	void setGroup(std::string group);


    private:
    std::string mac{};
    bool authenticated{};
    std::string group{};
};
}

#endif /* TINY_CPP_CLIENT_ServerLease_H_ */
