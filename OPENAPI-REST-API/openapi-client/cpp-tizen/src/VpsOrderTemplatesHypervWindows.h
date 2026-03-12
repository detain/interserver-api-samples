/*
 * VpsOrder_templates_hyperv_windows.h
 *
 * 
 */

#ifndef _VpsOrder_templates_hyperv_windows_H_
#define _VpsOrder_templates_hyperv_windows_H_


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

class VpsOrder_templates_hyperv_windows : public Object {
public:
	/*! \brief Constructor.
	 */
	VpsOrder_templates_hyperv_windows();
	VpsOrder_templates_hyperv_windows(char* str);

	/*! \brief Destructor.
	 */
	virtual ~VpsOrder_templates_hyperv_windows();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::string getWindows2019Standard();

	/*! \brief Set 
	 */
	void setWindows2019Standard(std::string  windows2019Standard);
	/*! \brief Get 
	 */
	std::string getWindows2022();

	/*! \brief Set 
	 */
	void setWindows2022(std::string  windows2022);

private:
	std::string windows2019Standard;
	std::string windows2022;
	void __init();
	void __cleanup();

};
}
}

#endif /* _VpsOrder_templates_hyperv_windows_H_ */
