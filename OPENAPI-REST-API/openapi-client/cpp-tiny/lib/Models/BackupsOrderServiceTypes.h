
/*
 * BackupsOrder_serviceTypes.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_BackupsOrder_serviceTypes_H_
#define TINY_CPP_CLIENT_BackupsOrder_serviceTypes_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "BackupsOrderServiceTypes.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class BackupsOrder_serviceTypes{
public:

    /*! \brief Constructor.
	 */
    BackupsOrder_serviceTypes();
    BackupsOrder_serviceTypes(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~BackupsOrder_serviceTypes();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	BackupsOrderServiceTypes get11006();

	/*! \brief Set 
	 */
	void set11006(BackupsOrderServiceTypes 11006);


    private:
    BackupsOrderServiceTypes 11006;
};
}

#endif /* TINY_CPP_CLIENT_BackupsOrder_serviceTypes_H_ */
