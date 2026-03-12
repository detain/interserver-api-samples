
/*
 * ServiceType.h
 *
 * A general grouping of services within a category.
 */

#ifndef TINY_CPP_CLIENT_ServiceType_H_
#define TINY_CPP_CLIENT_ServiceType_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief A general grouping of services within a category.
 *
 *  \ingroup Models
 *
 */

class ServiceType{
public:

    /*! \brief Constructor.
	 */
    ServiceType();
    ServiceType(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~ServiceType();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	int getStId();

	/*! \brief Set 
	 */
	void setStId(int st_id);
	/*! \brief Get 
	 */
	std::string getStName();

	/*! \brief Set 
	 */
	void setStName(std::string st_name);
	/*! \brief Get 
	 */
	int getStCategory();

	/*! \brief Set 
	 */
	void setStCategory(int st_category);
	/*! \brief Get 
	 */
	std::string getStModule();

	/*! \brief Set 
	 */
	void setStModule(std::string st_module);


    private:
    int st_id{};
    std::string st_name{};
    int st_category{};
    std::string st_module{};
};
}

#endif /* TINY_CPP_CLIENT_ServiceType_H_ */
