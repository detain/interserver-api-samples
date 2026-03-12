
package org.openapitools.client.model


case class Server (
    _ipmiAuth: Boolean,
    _client_links: List[ServerClientLink],
    _billingDetails: ServerBillingDetails,
    _custCurrency: String,
    _custCurrencySymbol: String,
    _package: String,
    _serviceExtra: List[String],
    _locations: ServerLocations,
    _networkInfo: ServerNetworkInfo,
    _extraInfoTables: ServerExtraInfoTables,
    _serviceInfo: ServerServiceInfo
)
object Server {
    def toStringBody(var_ipmiAuth: Object, var_client_links: Object, var_billingDetails: Object, var_custCurrency: Object, var_custCurrencySymbol: Object, var_package: Object, var_serviceExtra: Object, var_locations: Object, var_networkInfo: Object, var_extraInfoTables: Object, var_serviceInfo: Object) =
        s"""
        | {
        | "ipmiAuth":$var_ipmiAuth,"client_links":$var_client_links,"billingDetails":$var_billingDetails,"custCurrency":$var_custCurrency,"custCurrencySymbol":$var_custCurrencySymbol,"package":$var_package,"serviceExtra":$var_serviceExtra,"locations":$var_locations,"networkInfo":$var_networkInfo,"extraInfoTables":$var_extraInfoTables,"serviceInfo":$var_serviceInfo
        | }
        """.stripMargin
}
