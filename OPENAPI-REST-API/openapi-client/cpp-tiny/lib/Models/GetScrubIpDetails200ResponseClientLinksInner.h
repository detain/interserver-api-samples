
/*
 * GetScrubIpDetails_200_response_client_links_inner.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_GetScrubIpDetails_200_response_client_links_inner_H_
#define TINY_CPP_CLIENT_GetScrubIpDetails_200_response_client_links_inner_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class GetScrubIpDetails_200_response_client_links_inner{
public:

    /*! \brief Constructor.
	 */
    GetScrubIpDetails_200_response_client_links_inner();
    GetScrubIpDetails_200_response_client_links_inner(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~GetScrubIpDetails_200_response_client_links_inner();


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
	/*! \brief Get 
	 */
	std::string getOtherAttr();

	/*! \brief Set 
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

#endif /* TINY_CPP_CLIENT_GetScrubIpDetails_200_response_client_links_inner_H_ */
