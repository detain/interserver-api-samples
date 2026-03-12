/*
 * VpsOrder_packageCosts.h
 *
 * Package Costs
 */

#ifndef _VpsOrder_packageCosts_H_
#define _VpsOrder_packageCosts_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Package Costs
 *
 *  \ingroup Models
 *
 */

class VpsOrder_packageCosts : public Object {
public:
	/*! \brief Constructor.
	 */
	VpsOrder_packageCosts();
	VpsOrder_packageCosts(char* str);

	/*! \brief Destructor.
	 */
	virtual ~VpsOrder_packageCosts();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	long long get57();

	/*! \brief Set 
	 */
	void set57(long long  57);

private:
	long long 57;
	void __init();
	void __cleanup();

};
}
}

#endif /* _VpsOrder_packageCosts_H_ */
