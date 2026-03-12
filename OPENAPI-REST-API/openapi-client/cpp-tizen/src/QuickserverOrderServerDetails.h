/*
 * QuickserverOrder_server_details.h
 *
 * Server details.
 */

#ifndef _QuickserverOrder_server_details_H_
#define _QuickserverOrder_server_details_H_


#include <string>
#include "QuickserverOrderServerDetails381.h"
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Server details.
 *
 *  \ingroup Models
 *
 */

class QuickserverOrder_server_details : public Object {
public:
	/*! \brief Constructor.
	 */
	QuickserverOrder_server_details();
	QuickserverOrder_server_details(char* str);

	/*! \brief Destructor.
	 */
	virtual ~QuickserverOrder_server_details();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	QuickserverOrderServerDetails381 get381();

	/*! \brief Set 
	 */
	void set381(QuickserverOrderServerDetails381  381);

private:
	QuickserverOrderServerDetails381 381;
	void __init();
	void __cleanup();

};
}
}

#endif /* _QuickserverOrder_server_details_H_ */
