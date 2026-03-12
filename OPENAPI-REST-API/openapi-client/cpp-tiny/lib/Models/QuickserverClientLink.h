
/*
 * QuickserverClientLink.h
 *
 * A navigation link for QuickServer-related actions in the client portal.
 */

#ifndef TINY_CPP_CLIENT_QuickserverClientLink_H_
#define TINY_CPP_CLIENT_QuickserverClientLink_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief A navigation link for QuickServer-related actions in the client portal.
 *
 *  \ingroup Models
 *
 */

class QuickserverClientLink{
public:

    /*! \brief Constructor.
	 */
    QuickserverClientLink();
    QuickserverClientLink(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~QuickserverClientLink();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get Link label
	 */
	std::string getLabel();

	/*! \brief Set Link label
	 */
	void setLabel(std::string label);
	/*! \brief Get Link
	 */
	std::string getLink();

	/*! \brief Set Link
	 */
	void setLink(std::string link);
	/*! \brief Get Icon class
	 */
	std::string getIcon();

	/*! \brief Set Icon class
	 */
	void setIcon(std::string icon);
	/*! \brief Get Icon text
	 */
	std::string getIconText();

	/*! \brief Set Icon text
	 */
	void setIconText(std::string icon_text);
	/*! \brief Get Help text
	 */
	std::string getHelpText();

	/*! \brief Set Help text
	 */
	void setHelpText(std::string help_text);
	/*! \brief Get Other attribute
	 */
	std::string getOtherAttr();

	/*! \brief Set Other attribute
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

#endif /* TINY_CPP_CLIENT_QuickserverClientLink_H_ */
