/*
 * QuickserverClientLink.h
 *
 * A navigation link for QuickServer-related actions in the client portal.
 */

#ifndef _QuickserverClientLink_H_
#define _QuickserverClientLink_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief A navigation link for QuickServer-related actions in the client portal.
 *
 *  \ingroup Models
 *
 */

class QuickserverClientLink : public Object {
public:
	/*! \brief Constructor.
	 */
	QuickserverClientLink();
	QuickserverClientLink(char* str);

	/*! \brief Destructor.
	 */
	virtual ~QuickserverClientLink();

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
	/*! \brief Get Link
	 */
	std::string getLink();

	/*! \brief Set Link
	 */
	void setLink(std::string  link);
	/*! \brief Get Icon class
	 */
	std::string getIcon();

	/*! \brief Set Icon class
	 */
	void setIcon(std::string  icon);
	/*! \brief Get Icon text
	 */
	std::string getIconText();

	/*! \brief Set Icon text
	 */
	void setIconText(std::string  icon_text);
	/*! \brief Get Help text
	 */
	std::string getHelpText();

	/*! \brief Set Help text
	 */
	void setHelpText(std::string  help_text);
	/*! \brief Get Other attribute
	 */
	std::string getOtherAttr();

	/*! \brief Set Other attribute
	 */
	void setOtherAttr(std::string  other_attr);

private:
	std::string label;
	std::string link;
	std::string icon;
	std::string icon_text;
	std::string help_text;
	std::string other_attr;
	void __init();
	void __cleanup();

};
}
}

#endif /* _QuickserverClientLink_H_ */
