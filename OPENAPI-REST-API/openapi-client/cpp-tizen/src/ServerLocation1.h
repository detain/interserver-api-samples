/*
 * ServerLocation1.h
 *
 * 
 */

#ifndef _ServerLocation1_H_
#define _ServerLocation1_H_


#include <string>
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

class ServerLocation1 : public Object {
public:
	/*! \brief Constructor.
	 */
	ServerLocation1();
	ServerLocation1(char* str);

	/*! \brief Destructor.
	 */
	virtual ~ServerLocation1();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	int getLocationId();

	/*! \brief Set 
	 */
	void setLocationId(int  location_id);
	/*! \brief Get 
	 */
	std::string getLocationName();

	/*! \brief Set 
	 */
	void setLocationName(std::string  location_name);
	/*! \brief Get 
	 */
	std::string getLocationLat();

	/*! \brief Set 
	 */
	void setLocationLat(std::string  location_lat);
	/*! \brief Get 
	 */
	std::string getLocationLong();

	/*! \brief Set 
	 */
	void setLocationLong(std::string  location_long);
	/*! \brief Get 
	 */
	std::string getLocationDescription();

	/*! \brief Set 
	 */
	void setLocationDescription(std::string  location_description);
	/*! \brief Get 
	 */
	int getLocationIpmiGroup();

	/*! \brief Set 
	 */
	void setLocationIpmiGroup(int  location_ipmi_group);

private:
	int location_id;
	std::string location_name;
	std::string location_lat;
	std::string location_long;
	std::string location_description;
	int location_ipmi_group;
	void __init();
	void __cleanup();

};
}
}

#endif /* _ServerLocation1_H_ */
