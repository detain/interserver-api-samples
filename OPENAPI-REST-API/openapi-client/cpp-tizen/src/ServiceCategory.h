/*
 * ServiceCategory.h
 *
 * A Category of Services.  This is the broadest grouping within a module.
 */

#ifndef _ServiceCategory_H_
#define _ServiceCategory_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief A Category of Services.  This is the broadest grouping within a module.
 *
 *  \ingroup Models
 *
 */

class ServiceCategory : public Object {
public:
	/*! \brief Constructor.
	 */
	ServiceCategory();
	ServiceCategory(char* str);

	/*! \brief Destructor.
	 */
	virtual ~ServiceCategory();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	int getCategoryId();

	/*! \brief Set 
	 */
	void setCategoryId(int  category_id);
	/*! \brief Get 
	 */
	std::string getCategoryName();

	/*! \brief Set 
	 */
	void setCategoryName(std::string  category_name);
	/*! \brief Get 
	 */
	std::string getCategoryTag();

	/*! \brief Set 
	 */
	void setCategoryTag(std::string  category_tag);
	/*! \brief Get 
	 */
	std::string getCategoryModule();

	/*! \brief Set 
	 */
	void setCategoryModule(std::string  category_module);

private:
	int category_id;
	std::string category_name;
	std::string category_tag;
	std::string category_module;
	void __init();
	void __cleanup();

};
}
}

#endif /* _ServiceCategory_H_ */
