#ifndef TINY_CPP_CLIENT_WebhostingApi_H_
#define TINY_CPP_CLIENT_WebhostingApi_H_


#include "Response.h"
#include "Arduino.h"
#include "Service.h"
#include "Helpers.h"
#include <list>

#include "ChargeInvoiceRows.h"
#include "GetAccountInfo_401_response.h"
#include "GetWebsiteBuyIp_200_response.h"
#include "PostWebsiteBuyIp_200_response.h"
#include "PostWebsiteBuyIp_request.h"
#include "PostWebsiteMigration_200_response.h"
#include "PostWebsiteMigration_request.h"
#include "PostWebsiteMigration_request_1.h"
#include "ReverseDnsEntries.h"
#include "SuccessTextResponse.h"
#include "TextResponse.h"
#include "WebhostingCancel_200_response.h"
#include "Website.h"
#include "WebsiteBackups.h"
#include "WebsiteLoginResponse.h"
#include "WebsiteRow.h"
#include "WebsitesOrder.h"

namespace Tiny {

/**
 *  Class 
 * Generated with openapi::tiny-cpp-client
 */

class WebhostingApi : public Service {
public:
    WebhostingApi() = default;

    virtual ~WebhostingApi();

    /**
    * Place Website Order.
    *
    * Places an order for a new webhosting package. Use `PUT /websites/order` to validate the order first.
    */
    Response<
            String
        >
    addWebsite(
    );
    /**
    * Website Ordering Information.
    *
    * Retrieves available webhosting plans and pricing for ordering.
    */
    Response<
                WebsitesOrder
        >
    getNewWebsite(
    );
    /**
    * Get Website IP Information.
    *
    * Returns the IP addresses assigned to the website along with their current reverse DNS hostnames. Use this information to review assignments before updating reverse DNS via `POST /websites/{id}/buy_ip`.
    * \param id The website service ID. Use `website_id` from `GET /websites`. *Required*
    */
    Response<
                GetWebsiteBuyIp_200_response
        >
    getWebsiteBuyIp(
            
            int id
            
    );
    /**
    * Get Website Order.
    *
    * Returns detailed information about a specific webhosting order including its domain, plan, and status.
    * \param id The website service ID. Use `website_id` from `GET /websites`. *Required*
    */
    Response<
                Website
        >
    getWebsiteInfo(
            
            int id
            
    );
    /**
    * Get Website Invoices.
    *
    * Returns the billing invoices associated with this webhosting service.
    * \param id The website service ID. Use `website_id` from `GET /websites`. *Required*
    */
    Response<
                ChargeInvoiceRows
        >
    getWebsiteInvoices(
            
            int id
            
    );
    /**
    * Get Website Listing.
    *
    * Gets a listing of your webhosting orders and service details.
    */
    Response<
                    std::list<WebsiteRow>
        >
    getWebsiteList(
    );
    /**
    * Get Website Backups.
    *
    * Gets a list of the backups that exist for a website and their sizes.
    * \param id The website service ID. Use `website_id` from `GET /websites`. *Required*
    */
    Response<
                WebsiteBackups
        >
    getWebsitesBackups(
            
            int id
            
    );
    /**
    * Hosting Panel Auto Login.
    *
    * Returns an auto-login URL for the webhosting control panel. Use this to access cPanel or DirectAdmin without entering credentials.
    * \param id The website service ID. Use `website_id` from `GET /websites`. *Required*
    */
    Response<
                WebsiteLoginResponse
        >
    getWebsitesLogin(
            
            int id
            
    );
    /**
    * Resend Website Welcome Email.
    *
    * Resends the welcome email containing hosting credentials and panel access details for the webhosting order.
    * \param id The website service ID. Use `website_id` from `GET /websites`. *Required*
    */
    Response<
                SuccessTextResponse
        >
    getWebsitesWelcomeEmail(
            
            int id
            
    );
    /**
    * Get Website Reverse DNS.
    *
    * Returns the current reverse DNS (PTR record) entries for the website's IP addresses.
    * \param id The website service ID. Use `website_id` from `GET /websites`. *Required*
    */
    Response<
                ReverseDnsEntries
        >
    gettWebsiteReverseDns(
            
            int id
            
    );
    /**
    * Update Website IP DNS.
    *
    * Updates the reverse DNS hostnames for the website's IP addresses. Provide an `ips` object mapping each IP address to its desired hostname.
    * \param id The website service ID. Use `website_id` from `GET /websites`. *Required*
    * \param postWebsiteBuyIpRequest  *Required*
    */
    Response<
                PostWebsiteBuyIp_200_response
        >
    postWebsiteBuyIp(
            
            int id
            , 
            
            PostWebsiteBuyIp_request postWebsiteBuyIpRequest
            
    );
    /**
    * Request Website Migration.
    *
    * Submits a website migration request from your current hosting provider to InterServer. Provide the credentials and details for your current host so our team can perform the migration. A support ticket is created to track the migration progress; use the returned `ticket` ID with `/tickets/{id}` to monitor status.
    * \param id The website service ID. Use `website_id` from `GET /websites`. *Required*
    * \param postWebsiteMigrationRequest  *Required*
    */
    Response<
                PostWebsiteMigration_200_response
        >
    postWebsiteMigration(
            
            int id
            , 
            
            PostWebsiteMigration_request postWebsiteMigrationRequest
            
    );
    /**
    * Update Website Reverse DNS.
    *
    * Updates the reverse DNS entries for each of the IP addresses for the website.
    * \param id The website service ID. Use `website_id` from `GET /websites`. *Required*
    * \param reverseDnsEntries  *Required*
    */
    Response<
                TextResponse
        >
    postWebsitesReverseDns(
            
            int id
            , 
            
            ReverseDnsEntries reverseDnsEntries
            
    );
    /**
    * Validate Webhosting Order.
    *
    * Validates a webhosting order before placing it.
    */
    Response<
            String
        >
    putWebsites(
    );
    /**
    * Update Website Order.
    *
    * Updates settings on a webhosting order.
    * \param id The website service ID. Use `website_id` from `GET /websites`. *Required*
    */
    Response<
            String
        >
    updateWebsiteInfo(
            
            std::string id
            
    );
    /**
    * Cancel Website.
    *
    * Cancels a webhosting service. The service will be scheduled for termination and all hosted content will be removed. This action cannot be undone.
    * \param id The website service ID. Use `website_id` from `GET /websites`. *Required*
    */
    Response<
                WebhostingCancel_200_response
        >
    webhostingCancel(
            
            std::string id
            
    );
}; 

} 

#endif /* TINY_CPP_CLIENT_WebhostingApi_H_ */