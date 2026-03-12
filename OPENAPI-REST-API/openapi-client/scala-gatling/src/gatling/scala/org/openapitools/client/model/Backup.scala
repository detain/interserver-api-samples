
package org.openapitools.client.model


case class Backup (
    _serviceInfo: Option[BackupServiceInfo],
    _client_links: Option[List[BackupClientLink]],
    _billingDetails: Option[BackupBillingDetails],
    /* Customer's currency. */
    _custCurrency: Option[String],
    /* Customer's currency symbol. */
    _custCurrencySymbol: Option[String],
    _serviceMaster: Option[BackupServiceMaster],
    /* Package information. */
    _package: Option[String],
    _serviceExtra: Option[String],
    _extraInfoTables: Option[BackupExtraInfoTables]
)
object Backup {
    def toStringBody(var_serviceInfo: Object, var_client_links: Object, var_billingDetails: Object, var_custCurrency: Object, var_custCurrencySymbol: Object, var_serviceMaster: Object, var_package: Object, var_serviceExtra: Object, var_extraInfoTables: Object) =
        s"""
        | {
        | "serviceInfo":$var_serviceInfo,"client_links":$var_client_links,"billingDetails":$var_billingDetails,"custCurrency":$var_custCurrency,"custCurrencySymbol":$var_custCurrencySymbol,"serviceMaster":$var_serviceMaster,"package":$var_package,"serviceExtra":$var_serviceExtra,"extraInfoTables":$var_extraInfoTables
        | }
        """.stripMargin
}
