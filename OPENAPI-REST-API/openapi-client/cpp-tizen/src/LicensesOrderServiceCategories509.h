/*
 * LicensesOrderServiceCategories509.h
 *
 * 
 */

#ifndef _LicensesOrderServiceCategories509_H_
#define _LicensesOrderServiceCategories509_H_


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

class LicensesOrderServiceCategories509 : public Object {
public:
	/*! \brief Constructor.
	 */
	LicensesOrderServiceCategories509();
	LicensesOrderServiceCategories509(char* str);

	/*! \brief Destructor.
	 */
	virtual ~LicensesOrderServiceCategories509();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Category ID
	 */
	std::string getCategoryId();

	/*! \brief Set Category ID
	 */
	void setCategoryId(std::string  category_id);
	/*! \brief Get Category Name
	 */
	std::string getCategoryName();

	/*! \brief Set Category Name
	 */
	void setCategoryName(std::string  category_name);
	/*! \brief Get Category Tag
	 */
	std::string getCategoryTag();

	/*! \brief Set Category Tag
	 */
	void setCategoryTag(std::string  category_tag);
	/*! \brief Get Category Module
	 */
	std::string getCategoryModule();

	/*! \brief Set Category Module
	 */
	void setCategoryModule(std::string  category_module);

private:
	std::string category_id;
	std::string category_name;
	std::string category_tag;
	std::string category_module;
	void __init();
	void __cleanup();

};
}
}

#endif /* _LicensesOrderServiceCategories509_H_ */
