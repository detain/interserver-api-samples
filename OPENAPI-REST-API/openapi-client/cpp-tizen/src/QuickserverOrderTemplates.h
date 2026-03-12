/*
 * QuickserverOrder_templates.h
 *
 * Templates details.
 */

#ifndef _QuickserverOrder_templates_H_
#define _QuickserverOrder_templates_H_


#include <string>
#include "QuickserverOrderTemplatesUbuntu64.h"
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Templates details.
 *
 *  \ingroup Models
 *
 */

class QuickserverOrder_templates : public Object {
public:
	/*! \brief Constructor.
	 */
	QuickserverOrder_templates();
	QuickserverOrder_templates(char* str);

	/*! \brief Destructor.
	 */
	virtual ~QuickserverOrder_templates();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	QuickserverOrderTemplatesUbuntu64 getUbuntu();

	/*! \brief Set 
	 */
	void setUbuntu(QuickserverOrderTemplatesUbuntu64  ubuntu);

private:
	QuickserverOrderTemplatesUbuntu64 ubuntu;
	void __init();
	void __cleanup();

};
}
}

#endif /* _QuickserverOrder_templates_H_ */
