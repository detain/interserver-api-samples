/*
 * VpsClientLink.h
 *
 * A navigation link for VPS-related actions in the client portal.
 */

#ifndef _VpsClientLink_H_
#define _VpsClientLink_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief A navigation link for VPS-related actions in the client portal.
 *
 *  \ingroup Models
 *
 */

class VpsClientLink : public Object {
public:
	/*! \brief Constructor.
	 */
	VpsClientLink();
	VpsClientLink(char* str);

	/*! \brief Destructor.
	 */
	virtual ~VpsClientLink();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Display label for the link.
	 */
	std::string getLabel();

	/*! \brief Set Display label for the link.
	 */
	void setLabel(std::string  label);
	/*! \brief Get URL or route for the action.
	 */
	std::string getLink();

	/*! \brief Set URL or route for the action.
	 */
	void setLink(std::string  link);
	/*! \brief Get Icon class for the link.
	 */
	std::string getIcon();

	/*! \brief Set Icon class for the link.
	 */
	void setIcon(std::string  icon);
	/*! \brief Get Icon text label.
	 */
	std::string getIconText();

	/*! \brief Set Icon text label.
	 */
	void setIconText(std::string  icon_text);
	/*! \brief Get Help tooltip text for the link.
	 */
	std::string getHelpText();

	/*! \brief Set Help tooltip text for the link.
	 */
	void setHelpText(std::string  help_text);

private:
	std::string label;
	std::string link;
	std::string icon;
	std::string icon_text;
	std::string help_text;
	void __init();
	void __cleanup();

};
}
}

#endif /* _VpsClientLink_H_ */
