/*
 * DownloadQsBackup_request.h
 *
 * 
 */

#ifndef _DownloadQsBackup_request_H_
#define _DownloadQsBackup_request_H_


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

class DownloadQsBackup_request : public Object {
public:
	/*! \brief Constructor.
	 */
	DownloadQsBackup_request();
	DownloadQsBackup_request(char* str);

	/*! \brief Destructor.
	 */
	virtual ~DownloadQsBackup_request();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The backup filename to download.
	 */
	std::string getFile();

	/*! \brief Set The backup filename to download.
	 */
	void setFile(std::string  file);

private:
	std::string file;
	void __init();
	void __cleanup();

};
}
}

#endif /* _DownloadQsBackup_request_H_ */
