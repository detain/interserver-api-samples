/*
 * LicenseIpInfoRow.h
 *
 * A single row in the license IP information table.
 */

#ifndef _LicenseIpInfoRow_H_
#define _LicenseIpInfoRow_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief A single row in the license IP information table.
 *
 *  \ingroup Models
 *
 */

class LicenseIpInfoRow : public Object {
public:
	/*! \brief Constructor.
	 */
	LicenseIpInfoRow();
	LicenseIpInfoRow(char* str);

	/*! \brief Destructor.
	 */
	virtual ~LicenseIpInfoRow();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Row description
	 */
	std::string getDesc();

	/*! \brief Set Row description
	 */
	void setDesc(std::string  desc);
	/*! \brief Get Row value
	 */
	std::string getValue();

	/*! \brief Set Row value
	 */
	void setValue(std::string  value);

private:
	std::string desc;
	std::string value;
	void __init();
	void __cleanup();

};
}
}

#endif /* _LicenseIpInfoRow_H_ */
