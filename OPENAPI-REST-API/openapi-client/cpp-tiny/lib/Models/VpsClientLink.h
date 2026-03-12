
/*
 * VpsClientLink.h
 *
 * A navigation link for VPS-related actions in the client portal.
 */

#ifndef TINY_CPP_CLIENT_VpsClientLink_H_
#define TINY_CPP_CLIENT_VpsClientLink_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief A navigation link for VPS-related actions in the client portal.
 *
 *  \ingroup Models
 *
 */

class VpsClientLink{
public:

    /*! \brief Constructor.
	 */
    VpsClientLink();
    VpsClientLink(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~VpsClientLink();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get Display label for the link.
	 */
	std::string getLabel();

	/*! \brief Set Display label for the link.
	 */
	void setLabel(std::string label);
	/*! \brief Get URL or route for the action.
	 */
	std::string getLink();

	/*! \brief Set URL or route for the action.
	 */
	void setLink(std::string link);
	/*! \brief Get Icon class for the link.
	 */
	std::string getIcon();

	/*! \brief Set Icon class for the link.
	 */
	void setIcon(std::string icon);
	/*! \brief Get Icon text label.
	 */
	std::string getIconText();

	/*! \brief Set Icon text label.
	 */
	void setIconText(std::string icon_text);
	/*! \brief Get Help tooltip text for the link.
	 */
	std::string getHelpText();

	/*! \brief Set Help tooltip text for the link.
	 */
	void setHelpText(std::string help_text);


    private:
    std::string label{};
    std::string link{};
    std::string icon{};
    std::string icon_text{};
    std::string help_text{};
};
}

#endif /* TINY_CPP_CLIENT_VpsClientLink_H_ */
