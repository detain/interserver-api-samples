/*
 * MailClientLink.h
 *
 * A navigation link for mail service actions in the client portal.
 */

#ifndef _MailClientLink_H_
#define _MailClientLink_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief A navigation link for mail service actions in the client portal.
 *
 *  \ingroup Models
 *
 */

class MailClientLink : public Object {
public:
	/*! \brief Constructor.
	 */
	MailClientLink();
	MailClientLink(char* str);

	/*! \brief Destructor.
	 */
	virtual ~MailClientLink();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The label of the client link.
	 */
	std::string getLabel();

	/*! \brief Set The label of the client link.
	 */
	void setLabel(std::string  label);
	/*! \brief Get The link URL of the client link.
	 */
	std::string getLink();

	/*! \brief Set The link URL of the client link.
	 */
	void setLink(std::string  link);
	/*! \brief Get The icon class of the client link.
	 */
	std::string getIcon();

	/*! \brief Set The icon class of the client link.
	 */
	void setIcon(std::string  icon);
	/*! \brief Get The text for the icon of the client link.
	 */
	std::string getIconText();

	/*! \brief Set The text for the icon of the client link.
	 */
	void setIconText(std::string  icon_text);
	/*! \brief Get Help text for the client link.
	 */
	std::string getHelpText();

	/*! \brief Set Help text for the client link.
	 */
	void setHelpText(std::string  help_text);
	/*! \brief Get Additional attributes for the client link.
	 */
	std::string getOtherAttr();

	/*! \brief Set Additional attributes for the client link.
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

#endif /* _MailClientLink_H_ */
