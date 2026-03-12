
/*
 * BackupClientLink.h
 *
 * A navigation link for backup service actions in the client portal.
 */

#ifndef TINY_CPP_CLIENT_BackupClientLink_H_
#define TINY_CPP_CLIENT_BackupClientLink_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief A navigation link for backup service actions in the client portal.
 *
 *  \ingroup Models
 *
 */

class BackupClientLink{
public:

    /*! \brief Constructor.
	 */
    BackupClientLink();
    BackupClientLink(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~BackupClientLink();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get Label of the client link.
	 */
	std::string getLabel();

	/*! \brief Set Label of the client link.
	 */
	void setLabel(std::string label);
	/*! \brief Get Link URL of the client link.
	 */
	std::string getLink();

	/*! \brief Set Link URL of the client link.
	 */
	void setLink(std::string link);
	/*! \brief Get Icon of the client link.
	 */
	std::string getIcon();

	/*! \brief Set Icon of the client link.
	 */
	void setIcon(std::string icon);
	/*! \brief Get Icon text of the client link.
	 */
	std::string getIconText();

	/*! \brief Set Icon text of the client link.
	 */
	void setIconText(std::string icon_text);
	/*! \brief Get Help text of the client link.
	 */
	std::string getHelpText();

	/*! \brief Set Help text of the client link.
	 */
	void setHelpText(std::string help_text);
	/*! \brief Get Other attributes of the client link.
	 */
	std::string getOtherAttr();

	/*! \brief Set Other attributes of the client link.
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

#endif /* TINY_CPP_CLIENT_BackupClientLink_H_ */
