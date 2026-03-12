/*
 * PostWebsiteBuyIp_request.h
 *
 * 
 */

#ifndef _PostWebsiteBuyIp_request_H_
#define _PostWebsiteBuyIp_request_H_


#include <string>
#include <map>
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

class PostWebsiteBuyIp_request : public Object {
public:
	/*! \brief Constructor.
	 */
	PostWebsiteBuyIp_request();
	PostWebsiteBuyIp_request(char* str);

	/*! \brief Destructor.
	 */
	virtual ~PostWebsiteBuyIp_request();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get A map of IP addresses to their desired reverse DNS hostnames.
	 */
	std::map<std::string, std::string> getIps();

	/*! \brief Set A map of IP addresses to their desired reverse DNS hostnames.
	 */
	void setIps(std::map <std::string, std::string> ips);

private:
	std::map <std::string, std::string>ips;
	void __init();
	void __cleanup();

};
}
}

#endif /* _PostWebsiteBuyIp_request_H_ */
