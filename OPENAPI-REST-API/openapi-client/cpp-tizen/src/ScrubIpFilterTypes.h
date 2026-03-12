/*
 * ScrubIpFilterTypes.h
 *
 * Available scrub filter types for building firewall rules.
 */

#ifndef _ScrubIpFilterTypes_H_
#define _ScrubIpFilterTypes_H_


#include <string>
#include "ScrubIpFilterTypes_filters_value.h"
#include <map>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Available scrub filter types for building firewall rules.
 *
 *  \ingroup Models
 *
 */

class ScrubIpFilterTypes : public Object {
public:
	/*! \brief Constructor.
	 */
	ScrubIpFilterTypes();
	ScrubIpFilterTypes(char* str);

	/*! \brief Destructor.
	 */
	virtual ~ScrubIpFilterTypes();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	bool getSuccess();

	/*! \brief Set 
	 */
	void setSuccess(bool  success);
	/*! \brief Get 
	 */
	std::map<std::string, std::string> getFilters();

	/*! \brief Set 
	 */
	void setFilters(std::map <std::string, std::string> filters);

private:
	bool success;
	std::map <std::string, std::string>filters;
	void __init();
	void __cleanup();

};
}
}

#endif /* _ScrubIpFilterTypes_H_ */
