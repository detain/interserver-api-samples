/*
 * Quickserver_serviceExtra.h
 *
 * 
 */

#ifndef _Quickserver_serviceExtra_H_
#define _Quickserver_serviceExtra_H_


#include <string>
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

class Quickserver_serviceExtra : public Object {
public:
	/*! \brief Constructor.
	 */
	Quickserver_serviceExtra();
	Quickserver_serviceExtra(char* str);

	/*! \brief Destructor.
	 */
	virtual ~Quickserver_serviceExtra();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Platform information
	 */
	std::string getPlatform();

	/*! \brief Set Platform information
	 */
	void setPlatform(std::string  platform);

private:
	std::string platform;
	void __init();
	void __cleanup();

};
}
}

#endif /* _Quickserver_serviceExtra_H_ */
