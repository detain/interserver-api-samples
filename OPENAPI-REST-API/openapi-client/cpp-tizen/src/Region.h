/*
 * Region.h
 *
 * A datacenter region where a server can be provisioned.
 */

#ifndef _Region_H_
#define _Region_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief A datacenter region where a server can be provisioned.
 *
 *  \ingroup Models
 *
 */

class Region : public Object {
public:
	/*! \brief Constructor.
	 */
	Region();
	Region(char* str);

	/*! \brief Destructor.
	 */
	virtual ~Region();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	int getRegionId();

	/*! \brief Set 
	 */
	void setRegionId(int  region_id);
	/*! \brief Get 
	 */
	std::string getRegionName();

	/*! \brief Set 
	 */
	void setRegionName(std::string  region_name);

private:
	int region_id;
	std::string region_name;
	void __init();
	void __cleanup();

};
}
}

#endif /* _Region_H_ */
