
/*
 * PostWebsiteMigration_request.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_PostWebsiteMigration_request_H_
#define TINY_CPP_CLIENT_PostWebsiteMigration_request_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class PostWebsiteMigration_request{
public:

    /*! \brief Constructor.
	 */
    PostWebsiteMigration_request();
    PostWebsiteMigration_request(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~PostWebsiteMigration_request();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get URL of the customer's current hosting portal.
	 */
	std::string getCustPortal();

	/*! \brief Set URL of the customer's current hosting portal.
	 */
	void setCustPortal(std::string custPortal);
	/*! \brief Get Registered email address at the current host.
	 */
	std::string getRegEmail();

	/*! \brief Set Registered email address at the current host.
	 */
	void setRegEmail(std::string regEmail);
	/*! \brief Get Password for the current hosting account.
	 */
	std::string getPassword();

	/*! \brief Set Password for the current hosting account.
	 */
	void setPassword(std::string password);
	/*! \brief Get URL of the current control panel.
	 */
	std::string getCtrlPanel();

	/*! \brief Set URL of the current control panel.
	 */
	void setCtrlPanel(std::string ctrlPanel);
	/*! \brief Get FTP username at the current host.
	 */
	std::string getFtpUsername();

	/*! \brief Set FTP username at the current host.
	 */
	void setFtpUsername(std::string ftpUsername);
	/*! \brief Get FTP password at the current host.
	 */
	std::string getFtpPassword();

	/*! \brief Set FTP password at the current host.
	 */
	void setFtpPassword(std::string ftpPassword);
	/*! \brief Get Information about site traffic during migration.
	 */
	std::string getSiteBusyMig();

	/*! \brief Set Information about site traffic during migration.
	 */
	void setSiteBusyMig(std::string siteBusyMig);
	/*! \brief Get Special requirements for the migration.
	 */
	std::string getSplReqMig();

	/*! \brief Set Special requirements for the migration.
	 */
	void setSplReqMig(std::string splReqMig);
	/*! \brief Get Whether domain registration assistance is needed.
	 */
	std::string getDomainReg();

	/*! \brief Set Whether domain registration assistance is needed.
	 */
	void setDomainReg(std::string domainReg);
	/*! \brief Get Data migration timing preference.
	 */
	std::string getDataMig();

	/*! \brief Set Data migration timing preference.
	 */
	void setDataMig(std::string dataMig);
	/*! \brief Get Domain registrar portal URL.
	 */
	std::string getDomainRegPortal();

	/*! \brief Set Domain registrar portal URL.
	 */
	void setDomainRegPortal(std::string domainRegPortal);
	/*! \brief Get Email for the domain registrar account.
	 */
	std::string getDomainRegEmail();

	/*! \brief Set Email for the domain registrar account.
	 */
	void setDomainRegEmail(std::string domainRegEmail);
	/*! \brief Get Password for the domain registrar account.
	 */
	std::string getDomainRegPassword();

	/*! \brief Set Password for the domain registrar account.
	 */
	void setDomainRegPassword(std::string domainRegPassword);


    private:
    std::string custPortal{};
    std::string regEmail{};
    std::string password{};
    std::string ctrlPanel{};
    std::string ftpUsername{};
    std::string ftpPassword{};
    std::string siteBusyMig{};
    std::string splReqMig{};
    std::string domainReg{};
    std::string dataMig{};
    std::string domainRegPortal{};
    std::string domainRegEmail{};
    std::string domainRegPassword{};
};
}

#endif /* TINY_CPP_CLIENT_PostWebsiteMigration_request_H_ */
