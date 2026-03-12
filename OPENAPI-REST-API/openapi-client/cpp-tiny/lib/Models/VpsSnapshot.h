
/*
 * VpsSnapshot.h
 *
 * A VPS snapshot (point-in-time backup) stored on the host node.
 */

#ifndef TINY_CPP_CLIENT_VpsSnapshot_H_
#define TINY_CPP_CLIENT_VpsSnapshot_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief A VPS snapshot (point-in-time backup) stored on the host node.
 *
 *  \ingroup Models
 *
 */

class VpsSnapshot{
public:

    /*! \brief Constructor.
	 */
    VpsSnapshot();
    VpsSnapshot(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~VpsSnapshot();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get Snapshot name.
	 */
	std::string getName();

	/*! \brief Set Snapshot name.
	 */
	void setName(std::string name);
	/*! \brief Get Disk space used by this snapshot in bytes.
	 */
	int getUsed();

	/*! \brief Set Disk space used by this snapshot in bytes.
	 */
	void setUsed(int used);
	/*! \brief Get Unix timestamp of when the snapshot was created.
	 */
	int getDate();

	/*! \brief Set Unix timestamp of when the snapshot was created.
	 */
	void setDate(int date);


    private:
    std::string name{};
    int used{};
    int date{};
};
}

#endif /* TINY_CPP_CLIENT_VpsSnapshot_H_ */
