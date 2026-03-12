
/*
 * DownloadQsBackup_200_response.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_DownloadQsBackup_200_response_H_
#define TINY_CPP_CLIENT_DownloadQsBackup_200_response_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class DownloadQsBackup_200_response{
public:

    /*! \brief Constructor.
	 */
    DownloadQsBackup_200_response();
    DownloadQsBackup_200_response(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~DownloadQsBackup_200_response();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	std::string getText();

	/*! \brief Set 
	 */
	void setText(std::string text);
	/*! \brief Get A pre-signed download URL valid for 24 hours.
	 */
	std::string getUrl();

	/*! \brief Set A pre-signed download URL valid for 24 hours.
	 */
	void setUrl(std::string url);


    private:
    std::string text{};
    std::string url{};
};
}

#endif /* TINY_CPP_CLIENT_DownloadQsBackup_200_response_H_ */
