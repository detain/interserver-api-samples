/*
 * BackupIPInfoRow.h
 *
 * A single row in the backup IP information table.
 */

#ifndef _BackupIPInfoRow_H_
#define _BackupIPInfoRow_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief A single row in the backup IP information table.
 *
 *  \ingroup Models
 *
 */

class BackupIPInfoRow : public Object {
public:
	/*! \brief Constructor.
	 */
	BackupIPInfoRow();
	BackupIPInfoRow(char* str);

	/*! \brief Destructor.
	 */
	virtual ~BackupIPInfoRow();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Description of the IP information.
	 */
	std::string getDesc();

	/*! \brief Set Description of the IP information.
	 */
	void setDesc(std::string  desc);
	/*! \brief Get Value of the IP information.
	 */
	std::string getValue();

	/*! \brief Set Value of the IP information.
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

#endif /* _BackupIPInfoRow_H_ */
