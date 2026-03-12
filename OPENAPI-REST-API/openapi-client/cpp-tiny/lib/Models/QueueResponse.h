
/*
 * QueueResponse.h
 *
 * Response after sending an action queue to a service.
 */

#ifndef TINY_CPP_CLIENT_QueueResponse_H_
#define TINY_CPP_CLIENT_QueueResponse_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief Response after sending an action queue to a service.
 *
 *  \ingroup Models
 *
 */

class QueueResponse{
public:

    /*! \brief Constructor.
	 */
    QueueResponse();
    QueueResponse(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~QueueResponse();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get Response text
	 */
	std::string getText();

	/*! \brief Set Response text
	 */
	void setText(std::string text);
	/*! \brief Get The Queue ID attached to the action.
	 */
	int getQueueId();

	/*! \brief Set The Queue ID attached to the action.
	 */
	void setQueueId(int queueId);


    private:
    std::string text{};
    int queueId{};
};
}

#endif /* TINY_CPP_CLIENT_QueueResponse_H_ */
