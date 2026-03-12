
/*
 * GetWebsiteBuyIp_200_response.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_GetWebsiteBuyIp_200_response_H_
#define TINY_CPP_CLIENT_GetWebsiteBuyIp_200_response_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include <map>

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class GetWebsiteBuyIp_200_response{
public:

    /*! \brief Constructor.
	 */
    GetWebsiteBuyIp_200_response();
    GetWebsiteBuyIp_200_response(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~GetWebsiteBuyIp_200_response();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get A map of IP addresses to their current reverse DNS hostnames.
	 */
	std::map<std::string, std::string> getIps();

	/*! \brief Set A map of IP addresses to their current reverse DNS hostnames.
	 */
	void setIps(std::map<std::string, std::string> ips);


    private:
    std::map<std::string, std::string> ips;
};
}

#endif /* TINY_CPP_CLIENT_GetWebsiteBuyIp_200_response_H_ */
