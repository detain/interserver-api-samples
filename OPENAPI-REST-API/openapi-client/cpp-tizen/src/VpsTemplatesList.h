/*
 * VpsTemplatesList.h
 *
 * A listing of the OS Templates available for use.
 */

#ifndef _VpsTemplatesList_H_
#define _VpsTemplatesList_H_


#include <string>
#include "VpsTemplateRow.h"
#include <list>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief A listing of the OS Templates available for use.
 *
 *  \ingroup Models
 *
 */

class VpsTemplatesList : public Object {
public:
	/*! \brief Constructor.
	 */
	VpsTemplatesList();
	VpsTemplatesList(char* str);

	/*! \brief Destructor.
	 */
	virtual ~VpsTemplatesList();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get A listing of the templates.
	 */
	std::list<VpsTemplateRow> getTemplates();

	/*! \brief Set A listing of the templates.
	 */
	void setTemplates(std::list <VpsTemplateRow> templates);

private:
	std::list <VpsTemplateRow>templates;
	void __init();
	void __cleanup();

};
}
}

#endif /* _VpsTemplatesList_H_ */
