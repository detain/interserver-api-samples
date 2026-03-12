/*
 * Services.h
 *
 * The list of service packages.
 */

#ifndef _Services_H_
#define _Services_H_


#include <string>
#include "Service.h"
#include <map>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief The list of service packages.
 *
 *  \ingroup Models
 *
 */

class Services : public Object {
public:
	/*! \brief Constructor.
	 */
	Services();
	Services(char* str);

	/*! \brief Destructor.
	 */
	virtual ~Services();

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

#endif /* _Services_H_ */
