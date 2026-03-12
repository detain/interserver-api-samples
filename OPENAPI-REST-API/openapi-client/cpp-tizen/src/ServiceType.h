/*
 * ServiceType.h
 *
 * A general grouping of services within a category.
 */

#ifndef _ServiceType_H_
#define _ServiceType_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief A general grouping of services within a category.
 *
 *  \ingroup Models
 *
 */

class ServiceType : public Object {
public:
	/*! \brief Constructor.
	 */
	ServiceType();
	ServiceType(char* str);

	/*! \brief Destructor.
	 */
	virtual ~ServiceType();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	int getStId();

	/*! \brief Set 
	 */
	void setStId(int  st_id);
	/*! \brief Get 
	 */
	std::string getStName();

	/*! \brief Set 
	 */
	void setStName(std::string  st_name);
	/*! \brief Get 
	 */
	int getStCategory();

	/*! \brief Set 
	 */
	void setStCategory(int  st_category);
	/*! \brief Get 
	 */
	std::string getStModule();

	/*! \brief Set 
	 */
	void setStModule(std::string  st_module);

private:
	int st_id;
	std::string st_name;
	int st_category;
	std::string st_module;
	void __init();
	void __cleanup();

};
}
}

#endif /* _ServiceType_H_ */
