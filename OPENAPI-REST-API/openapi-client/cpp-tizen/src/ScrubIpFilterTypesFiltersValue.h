/*
 * ScrubIpFilterTypes_filters_value.h
 *
 * 
 */

#ifndef _ScrubIpFilterTypes_filters_value_H_
#define _ScrubIpFilterTypes_filters_value_H_


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

class ScrubIpFilterTypes_filters_value : public Object {
public:
	/*! \brief Constructor.
	 */
	ScrubIpFilterTypes_filters_value();
	ScrubIpFilterTypes_filters_value(char* str);

	/*! \brief Destructor.
	 */
	virtual ~ScrubIpFilterTypes_filters_value();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::string getName();

	/*! \brief Set 
	 */
	void setName(std::string  name);
	/*! \brief Get 
	 */
	std::string getDesc();

	/*! \brief Set 
	 */
	void setDesc(std::string  desc);

private:
	std::string name;
	std::string desc;
	void __init();
	void __cleanup();

};
}
}

#endif /* _ScrubIpFilterTypes_filters_value_H_ */
