
/*
 * MailClientLink.h
 *
 * A navigation link for mail service actions in the client portal.
 */

#ifndef TINY_CPP_CLIENT_MailClientLink_H_
#define TINY_CPP_CLIENT_MailClientLink_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief A navigation link for mail service actions in the client portal.
 *
 *  \ingroup Models
 *
 */

class MailClientLink{
public:

    /*! \brief Constructor.
	 */
    MailClientLink();
    MailClientLink(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~MailClientLink();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get The label of the client link.
	 */
	std::string getLabel();

	/*! \brief Set The label of the client link.
	 */
	void setLabel(std::string label);
	/*! \brief Get The link URL of the client link.
	 */
	std::string getLink();

	/*! \brief Set The link URL of the client link.
	 */
	void setLink(std::string link);
	/*! \brief Get The icon class of the client link.
	 */
	std::string getIcon();

	/*! \brief Set The icon class of the client link.
	 */
	void setIcon(std::string icon);
	/*! \brief Get The text for the icon of the client link.
	 */
	std::string getIconText();

	/*! \brief Set The text for the icon of the client link.
	 */
	void setIconText(std::string icon_text);
	/*! \brief Get Help text for the client link.
	 */
	std::string getHelpText();

	/*! \brief Set Help text for the client link.
	 */
	void setHelpText(std::string help_text);
	/*! \brief Get Additional attributes for the client link.
	 */
	std::string getOtherAttr();

	/*! \brief Set Additional attributes for the client link.
	 */
	void setOtherAttr(std::string other_attr);


    private:
    std::string label{};
    std::string link{};
    std::string icon{};
    std::string icon_text{};
    std::string help_text{};
    std::string other_attr{};
};
}

#endif /* TINY_CPP_CLIENT_MailClientLink_H_ */
