/*
 * QuickserverOrderVersionCentosstream8.h
 *
 * 
 */

#ifndef _QuickserverOrderVersionCentosstream8_H_
#define _QuickserverOrderVersionCentosstream8_H_


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

class QuickserverOrderVersionCentosstream8 : public Object {
public:
	/*! \brief Constructor.
	 */
	QuickserverOrderVersionCentosstream8();
	QuickserverOrderVersionCentosstream8(char* str);

	/*! \brief Destructor.
	 */
	virtual ~QuickserverOrderVersionCentosstream8();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Version details of CentOS Stream 8.
	 */
	std::string getCentosstream8();

	/*! \brief Set Version details of CentOS Stream 8.
	 */
	void setCentosstream8(std::string  centosstream8);

private:
	std::string centosstream8;
	void __init();
	void __cleanup();

};
}
}

#endif /* _QuickserverOrderVersionCentosstream8_H_ */
