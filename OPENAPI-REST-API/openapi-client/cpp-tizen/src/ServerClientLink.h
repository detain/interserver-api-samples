/*
 * ServerClientLink.h
 *
 * 
 */

#ifndef _ServerClientLink_H_
#define _ServerClientLink_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class ServerClientLink : public Object {
public:
	/*! \brief Constructor.
	 */
	ServerClientLink();
	ServerClientLink(char* str);

	/*! \brief Destructor.
	 */
	virtual ~ServerClientLink();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::string getLabel();

	/*! \brief Set 
	 */
	void setLabel(std::string  label);
	/*! \brief Get 
	 */
	std::string getLink();

	/*! \brief Set 
	 */
	void setLink(std::string  link);
	/*! \brief Get 
	 */
	std::string getIcon();

	/*! \brief Set 
	 */
	void setIcon(std::string  icon);
	/*! \brief Get 
	 */
	std::string getIconText();

	/*! \brief Set 
	 */
	void setIconText(std::string  icon_text);
	/*! \brief Get 
	 */
	std::string getHelpText();

	/*! \brief Set 
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

#endif /* _ServerClientLink_H_ */
