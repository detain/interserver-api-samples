
/*
 * LicenseClientLink.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_LicenseClientLink_H_
#define TINY_CPP_CLIENT_LicenseClientLink_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class LicenseClientLink{
public:

    /*! \brief Constructor.
	 */
    LicenseClientLink();
    LicenseClientLink(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~LicenseClientLink();


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
	/*! \brief Get Link URL
	 */
	std::string getLink();

	/*! \brief Set Link URL
	 */
	void setLink(std::string link);
	/*! \brief Get Link icon
	 */
	std::string getIcon();

	/*! \brief Set Link icon
	 */
	void setIcon(std::string icon);
	/*! \brief Get Help text
	 */
	std::string getHelpText();

	/*! \brief Set Help text
	 */
	void setHelpText(std::string help_text);
	/*! \brief Get Icon text
	 */
	std::string getIconText();

	/*! \brief Set Icon text
	 */
	void setIconText(std::string icon_text);
	/*! \brief Get Other attributes
	 */
	std::string getOtherAttr();

	/*! \brief Set Other attributes
	 */
	void setOtherAttr(std::string other_attr);


    private:
    std::string label{};
    std::string link{};
    std::string icon{};
    std::string help_text{};
    std::string icon_text{};
    std::string other_attr{};
};
}

#endif /* TINY_CPP_CLIENT_LicenseClientLink_H_ */
