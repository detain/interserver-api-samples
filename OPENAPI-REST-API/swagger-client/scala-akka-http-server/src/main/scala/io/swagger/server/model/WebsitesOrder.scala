package io.swagger.server.model


/**
 * Schema for the WebsitesOrder object
 *
 * @param step Step description for example: ''order_form''
 * @param website Website description
 * @param period Period description for example: ''1''
 * @param serviceOfferId Service offer ID description for example: ''0''
 * @param packages 
 * @param enableDomainRegistering Enable domain registering description for example: ''false''
 * @param jsonServices 
 * @param jsonServiceOffers 
 * @param serviceTypes 
 * @param serviceOffers 
 * @param packges 
 */
case class WebsitesOrder (
  step: String,
  website: String,
  period: Int,
  serviceOfferId: Int,
  packages: WebsitesOrderPackages,
  enableDomainRegistering: Boolean,
  jsonServices: WebsitesOrderJsonServices,
  jsonServiceOffers: WebsitesOrderJsonServiceOffers,
  serviceTypes: WebsitesOrder_serviceTypes,
  serviceOffers: WebsitesOrder_serviceOffers,
  packges: Option[WebsitesOrder_packges]
)

