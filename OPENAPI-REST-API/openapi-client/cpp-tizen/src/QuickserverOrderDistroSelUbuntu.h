/*
 * QuickserverOrderDistroSelUbuntu.h
 *
 * 
 */

#ifndef _QuickserverOrderDistroSelUbuntu_H_
#define _QuickserverOrderDistroSelUbuntu_H_


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

class QuickserverOrderDistroSelUbuntu : public Object {
public:
	/*! \brief Constructor.
	 */
	QuickserverOrderDistroSelUbuntu();
	QuickserverOrderDistroSelUbuntu(char* str);

	/*! \brief Destructor.
	 */
	virtual ~QuickserverOrderDistroSelUbuntu();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Selected distribution for Ubuntu.
	 */
	std::string getUbuntu();

	/*! \brief Set Selected distribution for Ubuntu.
	 */
	void setUbuntu(std::string  ubuntu);

private:
	std::string ubuntu;
	void __init();
	void __cleanup();

};
}
}

#endif /* _QuickserverOrderDistroSelUbuntu_H_ */
