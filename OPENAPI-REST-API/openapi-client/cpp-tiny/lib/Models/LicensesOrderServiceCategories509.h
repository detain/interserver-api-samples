
/*
 * LicensesOrderServiceCategories509.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_LicensesOrderServiceCategories509_H_
#define TINY_CPP_CLIENT_LicensesOrderServiceCategories509_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class LicensesOrderServiceCategories509{
public:

    /*! \brief Constructor.
	 */
    LicensesOrderServiceCategories509();
    LicensesOrderServiceCategories509(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~LicensesOrderServiceCategories509();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get Category ID
	 */
	std::string getCategoryId();

	/*! \brief Set Category ID
	 */
	void setCategoryId(std::string category_id);
	/*! \brief Get Category Name
	 */
	std::string getCategoryName();

	/*! \brief Set Category Name
	 */
	void setCategoryName(std::string category_name);
	/*! \brief Get Category Tag
	 */
	std::string getCategoryTag();

	/*! \brief Set Category Tag
	 */
	void setCategoryTag(std::string category_tag);
	/*! \brief Get Category Module
	 */
	std::string getCategoryModule();

	/*! \brief Set Category Module
	 */
	void setCategoryModule(std::string category_module);


    private:
    std::string category_id{};
    std::string category_name{};
    std::string category_tag{};
    std::string category_module{};
};
}

#endif /* TINY_CPP_CLIENT_LicensesOrderServiceCategories509_H_ */
