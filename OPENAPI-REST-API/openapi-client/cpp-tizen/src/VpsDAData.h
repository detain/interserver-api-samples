/*
 * VpsDAData.h
 *
 * DirectAdmin license options available for a VPS.
 */

#ifndef _VpsDAData_H_
#define _VpsDAData_H_


#include <string>
#include "VpsDALicense.h"
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief DirectAdmin license options available for a VPS.
 *
 *  \ingroup Models
 *
 */

class VpsDAData : public Object {
public:
	/*! \brief Constructor.
	 */
	VpsDAData();
	VpsDAData(char* str);

	/*! \brief Destructor.
	 */
	virtual ~VpsDAData();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	VpsDALicense getFree();

	/*! \brief Set 
	 */
	void setFree(VpsDALicense  free);

private:
	VpsDALicense free;
	void __init();
	void __cleanup();

};
}
}

#endif /* _VpsDAData_H_ */
