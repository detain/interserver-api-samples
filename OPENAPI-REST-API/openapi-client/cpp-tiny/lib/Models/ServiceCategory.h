
/*
 * ServiceCategory.h
 *
 * A Category of Services.  This is the broadest grouping within a module.
 */

#ifndef TINY_CPP_CLIENT_ServiceCategory_H_
#define TINY_CPP_CLIENT_ServiceCategory_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief A Category of Services.  This is the broadest grouping within a module.
 *
 *  \ingroup Models
 *
 */

class ServiceCategory{
public:

    /*! \brief Constructor.
	 */
    ServiceCategory();
    ServiceCategory(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~ServiceCategory();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	int getCategoryId();

	/*! \brief Set 
	 */
	void setCategoryId(int category_id);
	/*! \brief Get 
	 */
	std::string getCategoryName();

	/*! \brief Set 
	 */
	void setCategoryName(std::string category_name);
	/*! \brief Get 
	 */
	std::string getCategoryTag();

	/*! \brief Set 
	 */
	void setCategoryTag(std::string category_tag);
	/*! \brief Get 
	 */
	std::string getCategoryModule();

	/*! \brief Set 
	 */
	void setCategoryModule(std::string category_module);


    private:
    int category_id{};
    std::string category_name{};
    std::string category_tag{};
    std::string category_module{};
};
}

#endif /* TINY_CPP_CLIENT_ServiceCategory_H_ */
