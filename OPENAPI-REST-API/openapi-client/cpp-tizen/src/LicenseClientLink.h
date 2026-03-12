/*
 * LicenseClientLink.h
 *
 * 
 */

#ifndef _LicenseClientLink_H_
#define _LicenseClientLink_H_


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

class LicenseClientLink : public Object {
public:
	/*! \brief Constructor.
	 */
	LicenseClientLink();
	LicenseClientLink(char* str);

	/*! \brief Destructor.
	 */
	virtual ~LicenseClientLink();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Link label
	 */
	std::string getLabel();

	/*! \brief Set Link label
	 */
	void setLabel(std::string  label);
	/*! \brief Get Link URL
	 */
	std::string getLink();

	/*! \brief Set Link URL
	 */
	void setLink(std::string  link);
	/*! \brief Get Link icon
	 */
	std::string getIcon();

	/*! \brief Set Link icon
	 */
	void setIcon(std::string  icon);
	/*! \brief Get Help text
	 */
	std::string getHelpText();

	/*! \brief Set Help text
	 */
	void setHelpText(std::string  help_text);
	/*! \brief Get Icon text
	 */
	std::string getIconText();

	/*! \brief Set Icon text
	 */
	void setIconText(std::string  icon_text);
	/*! \brief Get Other attributes
	 */
	std::string getOtherAttr();

	/*! \brief Set Other attributes
	 */
	void setOtherAttr(std::string  other_attr);

private:
	std::string label;
	std::string link;
	std::string icon;
	std::string help_text;
	std::string icon_text;
	std::string other_attr;
	void __init();
	void __cleanup();

};
}
}

#endif /* _LicenseClientLink_H_ */
