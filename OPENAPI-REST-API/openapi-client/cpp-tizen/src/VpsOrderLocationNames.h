/*
 * VpsOrder_locationNames.h
 *
 * Location Names
 */

#ifndef _VpsOrder_locationNames_H_
#define _VpsOrder_locationNames_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Location Names
 *
 *  \ingroup Models
 *
 */

class VpsOrder_locationNames : public Object {
public:
	/*! \brief Constructor.
	 */
	VpsOrder_locationNames();
	VpsOrder_locationNames(char* str);

	/*! \brief Destructor.
	 */
	virtual ~VpsOrder_locationNames();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::string get3();

	/*! \brief Set 
	 */
	void set3(std::string  3);

private:
	std::string 3;
	void __init();
	void __cleanup();

};
}
}

#endif /* _VpsOrder_locationNames_H_ */
