/*
 * GetWebsiteBuyIp_200_response.h
 *
 * 
 */

#ifndef _GetWebsiteBuyIp_200_response_H_
#define _GetWebsiteBuyIp_200_response_H_


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

class GetWebsiteBuyIp_200_response : public Object {
public:
	/*! \brief Constructor.
	 */
	GetWebsiteBuyIp_200_response();
	GetWebsiteBuyIp_200_response(char* str);

	/*! \brief Destructor.
	 */
	virtual ~GetWebsiteBuyIp_200_response();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get A map of IP addresses to their current reverse DNS hostnames.
	 */
	std::map<std::string, std::string> getIps();

	/*! \brief Set A map of IP addresses to their current reverse DNS hostnames.
	 */
	void setIps(std::map <std::string, std::string> ips);

private:
	std::map <std::string, std::string>ips;
	void __init();
	void __cleanup();

};
}
}

#endif /* _GetWebsiteBuyIp_200_response_H_ */
