/*
 * VpsOrder_serviceTypes.h
 *
 * Service Types
 */

#ifndef _VpsOrder_serviceTypes_H_
#define _VpsOrder_serviceTypes_H_


#include <string>
#include "VpsOrder_serviceTypes_32.h"
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Service Types
 *
 *  \ingroup Models
 *
 */

class VpsOrder_serviceTypes : public Object {
public:
	/*! \brief Constructor.
	 */
	VpsOrder_serviceTypes();
	VpsOrder_serviceTypes(char* str);

	/*! \brief Destructor.
	 */
	virtual ~VpsOrder_serviceTypes();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	VpsOrder_serviceTypes_32 get32();

	/*! \brief Set 
	 */
	void set32(VpsOrder_serviceTypes_32  32);

private:
	VpsOrder_serviceTypes_32 32;
	void __init();
	void __cleanup();

};
}
}

#endif /* _VpsOrder_serviceTypes_H_ */
