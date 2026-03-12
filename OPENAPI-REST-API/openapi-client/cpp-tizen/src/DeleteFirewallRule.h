/*
 * Delete_Firewall_Rule.h
 *
 * Delete firewall rule for your ip
 */

#ifndef _Delete_Firewall_Rule_H_
#define _Delete_Firewall_Rule_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Delete firewall rule for your ip
 *
 *  \ingroup Models
 *
 */

class Delete_Firewall_Rule : public Object {
public:
	/*! \brief Constructor.
	 */
	Delete_Firewall_Rule();
	Delete_Firewall_Rule(char* str);

	/*! \brief Destructor.
	 */
	virtual ~Delete_Firewall_Rule();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	int getRuleId();

	/*! \brief Set 
	 */
	void setRuleId(int  rule_id);

private:
	int rule_id;
	void __init();
	void __cleanup();

};
}
}

#endif /* _Delete_Firewall_Rule_H_ */
