
/*
 * LicensesOrder_serviceTypes.h
 *
 * Types of license services
 */

#ifndef TINY_CPP_CLIENT_LicensesOrder_serviceTypes_H_
#define TINY_CPP_CLIENT_LicensesOrder_serviceTypes_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "LicensesOrderServiceTypes11482.h"

namespace Tiny {


/*! \brief Types of license services
 *
 *  \ingroup Models
 *
 */

class LicensesOrder_serviceTypes{
public:

    /*! \brief Constructor.
	 */
    LicensesOrder_serviceTypes();
    LicensesOrder_serviceTypes(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~LicensesOrder_serviceTypes();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	LicensesOrderServiceTypes11482 getLicensesOrderServiceTypes11482();

	/*! \brief Set 
	 */
	void setLicensesOrderServiceTypes11482(LicensesOrderServiceTypes11482 licensesOrderServiceTypes11482);


    private:
    LicensesOrderServiceTypes11482 licensesOrderServiceTypes11482;
};
}

#endif /* TINY_CPP_CLIENT_LicensesOrder_serviceTypes_H_ */
