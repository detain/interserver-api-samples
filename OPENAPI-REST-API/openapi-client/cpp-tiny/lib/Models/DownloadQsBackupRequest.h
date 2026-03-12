
/*
 * DownloadQsBackup_request.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_DownloadQsBackup_request_H_
#define TINY_CPP_CLIENT_DownloadQsBackup_request_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class DownloadQsBackup_request{
public:

    /*! \brief Constructor.
	 */
    DownloadQsBackup_request();
    DownloadQsBackup_request(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~DownloadQsBackup_request();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get The backup filename to download.
	 */
	std::string getFile();

	/*! \brief Set The backup filename to download.
	 */
	void setFile(std::string file);


    private:
    std::string file{};
};
}

#endif /* TINY_CPP_CLIENT_DownloadQsBackup_request_H_ */
