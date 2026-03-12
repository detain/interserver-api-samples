
package org.openapitools.client.model


case class WebsitesOrder (
    /* Step description */
    _step: String,
    /* Website description */
    _website: String,
    /* Period description */
    _period: Integer,
    /* Service offer ID description */
    _serviceOfferId: Integer,
    _packages: WebsitesOrderPackages,
    /* Enable domain registering description */
    _enableDomainRegistering: Boolean,
    _jsonServices: WebsitesOrderJsonServices,
    _jsonServiceOffers: WebsitesOrderJsonServiceOffers,
    _serviceTypes: WebsitesOrderServiceTypes,
    _serviceOffers: WebsitesOrderServiceOffers,
    _packges: Option[WebsitesOrderPackges]
)
object WebsitesOrder {
    def toStringBody(var_step: Object, var_website: Object, var_period: Object, var_serviceOfferId: Object, var_packages: Object, var_enableDomainRegistering: Object, var_jsonServices: Object, var_jsonServiceOffers: Object, var_serviceTypes: Object, var_serviceOffers: Object, var_packges: Object) =
        s"""
        | {
        | "step":$var_step,"website":$var_website,"period":$var_period,"serviceOfferId":$var_serviceOfferId,"packages":$var_packages,"enableDomainRegistering":$var_enableDomainRegistering,"jsonServices":$var_jsonServices,"jsonServiceOffers":$var_jsonServiceOffers,"serviceTypes":$var_serviceTypes,"serviceOffers":$var_serviceOffers,"packges":$var_packges
        | }
        """.stripMargin
}
