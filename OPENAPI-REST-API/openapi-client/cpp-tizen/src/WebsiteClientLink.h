/*
 * WebsiteClientLink.h
 *
 * A navigation link for webhosting-related actions in the client portal.
 */

#ifndef _WebsiteClientLink_H_
#define _WebsiteClientLink_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief A navigation link for webhosting-related actions in the client portal.
 *
 *  \ingroup Models
 *
 */

class WebsiteClientLink : public Object {
public:
	/*! \brief Constructor.
	 */
	WebsiteClientLink();
	WebsiteClientLink(char* str);

	/*! \brief Destructor.
	 */
	virtual ~WebsiteClientLink();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Label for the link
	 */
	std::string getLabel();

	/*! \brief Set Label for the link
	 */
	void setLabel(std::string  label);
	/*! \brief Get Link URL
	 */
	std::string getLink();

	/*! \brief Set Link URL
	 */
	void setLink(std::string  link);
	/*! \brief Get Icon for the link
	 */
	std::string getIcon();

	/*! \brief Set Icon for the link
	 */
	void setIcon(std::string  icon);
	/*! \brief Get Icon text for the link
	 */
	std::string getIconText();

	/*! \brief Set Icon text for the link
	 */
	void setIconText(std::string  icon_text);
	/*! \brief Get Help text for the link
	 */
	std::string getHelpText();

	/*! \brief Set Help text for the link
	 */
	void setHelpText(std::string  help_text);
	/*! \brief Get Other attributes for the link
	 */
	std::string getOtherAttr();

	/*! \brief Set Other attributes for the link
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

#endif /* _WebsiteClientLink_H_ */
