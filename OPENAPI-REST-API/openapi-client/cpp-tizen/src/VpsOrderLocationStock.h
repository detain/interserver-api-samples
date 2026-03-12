/*
 * VpsOrder_locationStock.h
 *
 * Location Stock
 */

#ifndef _VpsOrder_locationStock_H_
#define _VpsOrder_locationStock_H_


#include <string>
#include "VpsOrder_locationStock_1.h"
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Location Stock
 *
 *  \ingroup Models
 *
 */

class VpsOrder_locationStock : public Object {
public:
	/*! \brief Constructor.
	 */
	VpsOrder_locationStock();
	VpsOrder_locationStock(char* str);

	/*! \brief Destructor.
	 */
	virtual ~VpsOrder_locationStock();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	VpsOrder_locationStock_1 get1();

	/*! \brief Set 
	 */
	void set1(VpsOrder_locationStock_1  1);

private:
	VpsOrder_locationStock_1 1;
	void __init();
	void __cleanup();

};
}
}

#endif /* _VpsOrder_locationStock_H_ */
