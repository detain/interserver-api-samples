/*
 * BackupsOrder_serviceTypes.h
 *
 * 
 */

#ifndef _BackupsOrder_serviceTypes_H_
#define _BackupsOrder_serviceTypes_H_


#include <string>
#include "BackupsOrderServiceTypes.h"
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

class BackupsOrder_serviceTypes : public Object {
public:
	/*! \brief Constructor.
	 */
	BackupsOrder_serviceTypes();
	BackupsOrder_serviceTypes(char* str);

	/*! \brief Destructor.
	 */
	virtual ~BackupsOrder_serviceTypes();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	BackupsOrderServiceTypes get11006();

	/*! \brief Set 
	 */
	void set11006(BackupsOrderServiceTypes  11006);

private:
	BackupsOrderServiceTypes 11006;
	void __init();
	void __cleanup();

};
}
}

#endif /* _BackupsOrder_serviceTypes_H_ */
