/*
 * QueueResponse.h
 *
 * Response after sending an action queue to a service.
 */

#ifndef _QueueResponse_H_
#define _QueueResponse_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Response after sending an action queue to a service.
 *
 *  \ingroup Models
 *
 */

class QueueResponse : public Object {
public:
	/*! \brief Constructor.
	 */
	QueueResponse();
	QueueResponse(char* str);

	/*! \brief Destructor.
	 */
	virtual ~QueueResponse();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Response text
	 */
	std::string getText();

	/*! \brief Set Response text
	 */
	void setText(std::string  text);
	/*! \brief Get The Queue ID attached to the action.
	 */
	int getQueueId();

	/*! \brief Set The Queue ID attached to the action.
	 */
	void setQueueId(int  queueId);

private:
	std::string text;
	int queueId;
	void __init();
	void __cleanup();

};
}
}

#endif /* _QueueResponse_H_ */
