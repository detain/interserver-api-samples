
/*
 * PostWebsiteBuyIp_request.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_PostWebsiteBuyIp_request_H_
#define TINY_CPP_CLIENT_PostWebsiteBuyIp_request_H_


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

class PostWebsiteBuyIp_request{
public:

    /*! \brief Constructor.
	 */
    PostWebsiteBuyIp_request();
    PostWebsiteBuyIp_request(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~PostWebsiteBuyIp_request();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get A map of IP addresses to their desired reverse DNS hostnames.
	 */
	std::map<std::string, std::string> getIps();

	/*! \brief Set A map of IP addresses to their desired reverse DNS hostnames.
	 */
	void setIps(std::map<std::string, std::string> ips);


    private:
    std::map<std::string, std::string> ips;
};
}

#endif /* TINY_CPP_CLIENT_PostWebsiteBuyIp_request_H_ */
