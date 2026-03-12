
/*
 * VpsDAData.h
 *
 * DirectAdmin license options available for a VPS.
 */

#ifndef TINY_CPP_CLIENT_VpsDAData_H_
#define TINY_CPP_CLIENT_VpsDAData_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "VpsDALicense.h"

namespace Tiny {


/*! \brief DirectAdmin license options available for a VPS.
 *
 *  \ingroup Models
 *
 */

class VpsDAData{
public:

    /*! \brief Constructor.
	 */
    VpsDAData();
    VpsDAData(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~VpsDAData();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	VpsDALicense getFree();

	/*! \brief Set 
	 */
	void setFree(VpsDALicense free);


    private:
    VpsDALicense free;
};
}

#endif /* TINY_CPP_CLIENT_VpsDAData_H_ */
