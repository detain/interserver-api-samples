
package org.openapitools.client.model


case class Website (
    _serviceInfo: Option[WebsiteServiceInfo],
    _client_links: Option[List[WebsiteClientLink]],
    _billingDetails: Option[WebsiteBillingDetails],
    /* Customer's currency */
    _custCurrency: Option[String],
    /* Customer currency symbol */
    _custCurrencySymbol: Option[String],
    _serviceMaster: Option[WebsiteServiceMaster],
    /* Package information */
    _package: Option[String],
    _serviceExtra: Option[List[Any]],
    _extraInfoTables: Option[WebsiteExtraInfoTables]
)
object Website {
    def toStringBody(var_serviceInfo: Object, var_client_links: Object, var_billingDetails: Object, var_custCurrency: Object, var_custCurrencySymbol: Object, var_serviceMaster: Object, var_package: Object, var_serviceExtra: Object, var_extraInfoTables: Object) =
        s"""
        | {
        | "serviceInfo":$var_serviceInfo,"client_links":$var_client_links,"billingDetails":$var_billingDetails,"custCurrency":$var_custCurrency,"custCurrencySymbol":$var_custCurrencySymbol,"serviceMaster":$var_serviceMaster,"package":$var_package,"serviceExtra":$var_serviceExtra,"extraInfoTables":$var_extraInfoTables
        | }
        """.stripMargin
}
