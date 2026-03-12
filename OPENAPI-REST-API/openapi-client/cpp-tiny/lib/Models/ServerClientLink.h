
/*
 * ServerClientLink.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_ServerClientLink_H_
#define TINY_CPP_CLIENT_ServerClientLink_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class ServerClientLink{
public:

    /*! \brief Constructor.
	 */
    ServerClientLink();
    ServerClientLink(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~ServerClientLink();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	std::string getLabel();

	/*! \brief Set 
	 */
	void setLabel(std::string label);
	/*! \brief Get 
	 */
	std::string getLink();

	/*! \brief Set 
	 */
	void setLink(std::string link);
	/*! \brief Get 
	 */
	std::string getIcon();

	/*! \brief Set 
	 */
	void setIcon(std::string icon);
	/*! \brief Get 
	 */
	std::string getIconText();

	/*! \brief Set 
	 */
	void setIconText(std::string icon_text);
	/*! \brief Get 
	 */
	std::string getHelpText();

	/*! \brief Set 
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

#endif /* TINY_CPP_CLIENT_ServerClientLink_H_ */
