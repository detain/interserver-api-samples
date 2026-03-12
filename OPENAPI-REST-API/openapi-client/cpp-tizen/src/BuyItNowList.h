/*
 * BuyItNowList.h
 *
 * Marketplace buy it now servers list
 */

#ifndef _BuyItNowList_H_
#define _BuyItNowList_H_


#include <string>
#include "BuyItNowRow.h"
#include <list>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Marketplace buy it now servers list
 *
 *  \ingroup Models
 *
 */

class BuyItNowList : public Object {
public:
	/*! \brief Constructor.
	 */
	BuyItNowList();
	BuyItNowList(char* str);

	/*! \brief Destructor.
	 */
	virtual ~BuyItNowList();

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

#endif /* _BuyItNowList_H_ */
