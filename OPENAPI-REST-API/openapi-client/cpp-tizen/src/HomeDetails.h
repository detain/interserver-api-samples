/*
 * Home_details.h
 *
 * Users details.
 */

#ifndef _Home_details_H_
#define _Home_details_H_


#include <string>
#include "Home_details_modules.h"
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Users details.
 *
 *  \ingroup Models
 *
 */

class Home_details : public Object {
public:
	/*! \brief Constructor.
	 */
	Home_details();
	Home_details(char* str);

	/*! \brief Destructor.
	 */
	virtual ~Home_details();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	Home_details_modules getModules();

	/*! \brief Set 
	 */
	void setModules(Home_details_modules  modules);

private:
	Home_details_modules modules;
	void __init();
	void __cleanup();

};
}
}

#endif /* _Home_details_H_ */
