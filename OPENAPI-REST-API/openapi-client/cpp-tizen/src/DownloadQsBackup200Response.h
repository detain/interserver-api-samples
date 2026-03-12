/*
 * DownloadQsBackup_200_response.h
 *
 * 
 */

#ifndef _DownloadQsBackup_200_response_H_
#define _DownloadQsBackup_200_response_H_


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

class DownloadQsBackup_200_response : public Object {
public:
	/*! \brief Constructor.
	 */
	DownloadQsBackup_200_response();
	DownloadQsBackup_200_response(char* str);

	/*! \brief Destructor.
	 */
	virtual ~DownloadQsBackup_200_response();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::string getText();

	/*! \brief Set 
	 */
	void setText(std::string  text);
	/*! \brief Get A pre-signed download URL valid for 24 hours.
	 */
	std::string getUrl();

	/*! \brief Set A pre-signed download URL valid for 24 hours.
	 */
	void setUrl(std::string  url);

private:
	std::string text;
	std::string url;
	void __init();
	void __cleanup();

};
}
}

#endif /* _DownloadQsBackup_200_response_H_ */
