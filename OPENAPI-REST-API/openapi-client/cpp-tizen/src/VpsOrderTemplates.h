/*
 * VpsOrder_templates.h
 *
 * Templates
 */

#ifndef _VpsOrder_templates_H_
#define _VpsOrder_templates_H_


#include <string>
#include "VpsOrder_templates_hyperv.h"
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Templates
 *
 *  \ingroup Models
 *
 */

class VpsOrder_templates : public Object {
public:
	/*! \brief Constructor.
	 */
	VpsOrder_templates();
	VpsOrder_templates(char* str);

	/*! \brief Destructor.
	 */
	virtual ~VpsOrder_templates();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	VpsOrder_templates_hyperv getHyperv();

	/*! \brief Set 
	 */
	void setHyperv(VpsOrder_templates_hyperv  hyperv);

private:
	VpsOrder_templates_hyperv hyperv;
	void __init();
	void __cleanup();

};
}
}

#endif /* _VpsOrder_templates_H_ */
