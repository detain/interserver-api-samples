/*
 * ControlPanel.h
 *
 * A hosting control panel option (e.g., cPanel, Plesk) available for server provisioning.
 */

#ifndef _ControlPanel_H_
#define _ControlPanel_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief A hosting control panel option (e.g., cPanel, Plesk) available for server provisioning.
 *
 *  \ingroup Models
 *
 */

class ControlPanel : public Object {
public:
	/*! \brief Constructor.
	 */
	ControlPanel();
	ControlPanel(char* str);

	/*! \brief Destructor.
	 */
	virtual ~ControlPanel();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	int getId();

	/*! \brief Set 
	 */
	void setId(int  id);
	/*! \brief Get 
	 */
	std::string getShortDesc();

	/*! \brief Set 
	 */
	void setShortDesc(std::string  short_desc);
	/*! \brief Get 
	 */
	long long getMonthlyPrice();

	/*! \brief Set 
	 */
	void setMonthlyPrice(long long  monthly_price);

private:
	int id;
	std::string short_desc;
	long long monthly_price;
	void __init();
	void __cleanup();

};
}
}

#endif /* _ControlPanel_H_ */
