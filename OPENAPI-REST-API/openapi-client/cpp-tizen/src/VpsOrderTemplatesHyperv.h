/*
 * VpsOrder_templates_hyperv.h
 *
 * 
 */

#ifndef _VpsOrder_templates_hyperv_H_
#define _VpsOrder_templates_hyperv_H_


#include <string>
#include "VpsOrder_templates_hyperv_windows.h"
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

class VpsOrder_templates_hyperv : public Object {
public:
	/*! \brief Constructor.
	 */
	VpsOrder_templates_hyperv();
	VpsOrder_templates_hyperv(char* str);

	/*! \brief Destructor.
	 */
	virtual ~VpsOrder_templates_hyperv();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	VpsOrder_templates_hyperv_windows getWindows();

	/*! \brief Set 
	 */
	void setWindows(VpsOrder_templates_hyperv_windows  windows);

private:
	VpsOrder_templates_hyperv_windows windows;
	void __init();
	void __cleanup();

};
}
}

#endif /* _VpsOrder_templates_hyperv_H_ */
