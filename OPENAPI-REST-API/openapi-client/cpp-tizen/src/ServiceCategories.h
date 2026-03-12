/*
 * ServiceCategories.h
 *
 * The listing of the categories for the services.
 */

#ifndef _ServiceCategories_H_
#define _ServiceCategories_H_


#include <string>
#include "ServiceCategory.h"
#include <map>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief The listing of the categories for the services.
 *
 *  \ingroup Models
 *
 */

class ServiceCategories : public Object {
public:
	/*! \brief Constructor.
	 */
	ServiceCategories();
	ServiceCategories(char* str);

	/*! \brief Destructor.
	 */
	virtual ~ServiceCategories();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);


private:
	void __init();
	void __cleanup();

};
}
}

#endif /* _ServiceCategories_H_ */
