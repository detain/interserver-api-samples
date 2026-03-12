/*
 * VpsPlesk12Data.h
 *
 * 
 */

#ifndef _VpsPlesk12Data_H_
#define _VpsPlesk12Data_H_


#include <string>
#include "VpsPleskLicense.h"
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

class VpsPlesk12Data : public Object {
public:
	/*! \brief Constructor.
	 */
	VpsPlesk12Data();
	VpsPlesk12Data(char* str);

	/*! \brief Destructor.
	 */
	virtual ~VpsPlesk12Data();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	VpsPleskLicense getAdmin();

	/*! \brief Set 
	 */
	void setAdmin(VpsPleskLicense  admin);
	/*! \brief Get 
	 */
	VpsPleskLicense getPro();

	/*! \brief Set 
	 */
	void setPro(VpsPleskLicense  pro);
	/*! \brief Get 
	 */
	VpsPleskLicense getHost();

	/*! \brief Set 
	 */
	void setHost(VpsPleskLicense  host);

private:
	VpsPleskLicense admin;
	VpsPleskLicense pro;
	VpsPleskLicense host;
	void __init();
	void __cleanup();

};
}
}

#endif /* _VpsPlesk12Data_H_ */
