/*
 * FieldLabel.h
 *
 * A display label for a server order form field.
 */

#ifndef _FieldLabel_H_
#define _FieldLabel_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief A display label for a server order form field.
 *
 *  \ingroup Models
 *
 */

class FieldLabel : public Object {
public:
	/*! \brief Constructor.
	 */
	FieldLabel();
	FieldLabel(char* str);

	/*! \brief Destructor.
	 */
	virtual ~FieldLabel();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::string getName();

	/*! \brief Set 
	 */
	void setName(std::string  name);
	/*! \brief Get 
	 */
	int getActive();

	/*! \brief Set 
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

#endif /* _FieldLabel_H_ */
