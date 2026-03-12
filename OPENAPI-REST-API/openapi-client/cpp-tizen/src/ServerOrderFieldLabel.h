/*
 * ServerOrderFieldLabel.h
 *
 * A display label for a field in the server order form.
 */

#ifndef _ServerOrderFieldLabel_H_
#define _ServerOrderFieldLabel_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief A display label for a field in the server order form.
 *
 *  \ingroup Models
 *
 */

class ServerOrderFieldLabel : public Object {
public:
	/*! \brief Constructor.
	 */
	ServerOrderFieldLabel();
	ServerOrderFieldLabel(char* str);

	/*! \brief Destructor.
	 */
	virtual ~ServerOrderFieldLabel();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Name of the field label.
	 */
	std::string getName();

	/*! \brief Set Name of the field label.
	 */
	void setName(std::string  name);
	/*! \brief Get Active status of the field label.
	 */
	int getActive();

	/*! \brief Set Active status of the field label.
	 */
	void setActive(int  active);

private:
	std::string name;
	int active;
	void __init();
	void __cleanup();

};
}
}

#endif /* _ServerOrderFieldLabel_H_ */
