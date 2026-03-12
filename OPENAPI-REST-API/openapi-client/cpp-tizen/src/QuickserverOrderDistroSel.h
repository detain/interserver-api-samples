/*
 * QuickserverOrder_distro_sel.h
 *
 * Distribution selection.
 */

#ifndef _QuickserverOrder_distro_sel_H_
#define _QuickserverOrder_distro_sel_H_


#include <string>
#include "QuickserverOrderDistroSelUbuntu.h"
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Distribution selection.
 *
 *  \ingroup Models
 *
 */

class QuickserverOrder_distro_sel : public Object {
public:
	/*! \brief Constructor.
	 */
	QuickserverOrder_distro_sel();
	QuickserverOrder_distro_sel(char* str);

	/*! \brief Destructor.
	 */
	virtual ~QuickserverOrder_distro_sel();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	QuickserverOrderDistroSelUbuntu getUbuntu();

	/*! \brief Set 
	 */
	void setUbuntu(QuickserverOrderDistroSelUbuntu  ubuntu);

private:
	QuickserverOrderDistroSelUbuntu ubuntu;
	void __init();
	void __cleanup();

};
}
}

#endif /* _QuickserverOrder_distro_sel_H_ */
