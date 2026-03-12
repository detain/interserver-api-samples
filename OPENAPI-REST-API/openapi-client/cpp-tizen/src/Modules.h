/*
 * Modules.h
 *
 * The modules and settings.
 */

#ifndef _Modules_H_
#define _Modules_H_


#include <string>
#include "ModuleSettings.h"
#include <map>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief The modules and settings.
 *
 *  \ingroup Models
 *
 */

class Modules : public Object {
public:
	/*! \brief Constructor.
	 */
	Modules();
	Modules(char* str);

	/*! \brief Destructor.
	 */
	virtual ~Modules();

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

#endif /* _Modules_H_ */
