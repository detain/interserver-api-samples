/*
 * GetScrubIpDetails_200_response_client_links_inner.h
 *
 * 
 */

#ifndef _GetScrubIpDetails_200_response_client_links_inner_H_
#define _GetScrubIpDetails_200_response_client_links_inner_H_


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

class GetScrubIpDetails_200_response_client_links_inner : public Object {
public:
	/*! \brief Constructor.
	 */
	GetScrubIpDetails_200_response_client_links_inner();
	GetScrubIpDetails_200_response_client_links_inner(char* str);

	/*! \brief Destructor.
	 */
	virtual ~GetScrubIpDetails_200_response_client_links_inner();

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
	/*! \brief Get 
	 */
	std::string getOtherAttr();

	/*! \brief Set 
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

#endif /* _GetScrubIpDetails_200_response_client_links_inner_H_ */
