
/*
 * VpsOrder_serviceTypes.h
 *
 * Service Types
 */

#ifndef TINY_CPP_CLIENT_VpsOrder_serviceTypes_H_
#define TINY_CPP_CLIENT_VpsOrder_serviceTypes_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "VpsOrder_serviceTypes_32.h"

namespace Tiny {


/*! \brief Service Types
 *
 *  \ingroup Models
 *
 */

class VpsOrder_serviceTypes{
public:

    /*! \brief Constructor.
	 */
    VpsOrder_serviceTypes();
    VpsOrder_serviceTypes(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~VpsOrder_serviceTypes();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	VpsOrder_serviceTypes_32 get32();

	/*! \brief Set 
	 */
	void set32(VpsOrder_serviceTypes_32 32);


    private:
    VpsOrder_serviceTypes_32 32;
};
}

#endif /* TINY_CPP_CLIENT_VpsOrder_serviceTypes_H_ */
