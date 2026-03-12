
package org.openapitools.client.model


case class Domain (
    _serviceInfo: Option[DomainServiceInfo],
    _serviceTypes: Option[Map[String, DomainServiceType]],
    _client_links: Option[List[DomainClientLink]],
    _billingDetails: Option[DomainBillingDetails],
    _custCurrency: Option[String],
    _custCurrencySymbol: Option[String],
    _serviceExtra: Option[DomainBillingExtra],
    _extraInfoTables: Option[BackupExtraInfoTables],
    _serviceType: Option[DomainServiceType],
    _contact_details: Option[DomainContactDetails],
    _pwarning: Option[String],
    _transfer_info: Option[String],
    _errors: Option[Boolean],
    _domain_logs: Option[List[String]],
    _allInfo: Option[DomainAllInfo],
    _registrarStatus: Option[String],
    _locked: Option[String],
    _whoisPrivacy: Option[String],
    _autoRenew: Option[String]
)
object Domain {
    def toStringBody(var_serviceInfo: Object, var_serviceTypes: Object, var_client_links: Object, var_billingDetails: Object, var_custCurrency: Object, var_custCurrencySymbol: Object, var_serviceExtra: Object, var_extraInfoTables: Object, var_serviceType: Object, var_contact_details: Object, var_pwarning: Object, var_transfer_info: Object, var_errors: Object, var_domain_logs: Object, var_allInfo: Object, var_registrarStatus: Object, var_locked: Object, var_whoisPrivacy: Object, var_autoRenew: Object) =
        s"""
        | {
        | "serviceInfo":$var_serviceInfo,"serviceTypes":$var_serviceTypes,"client_links":$var_client_links,"billingDetails":$var_billingDetails,"custCurrency":$var_custCurrency,"custCurrencySymbol":$var_custCurrencySymbol,"serviceExtra":$var_serviceExtra,"extraInfoTables":$var_extraInfoTables,"serviceType":$var_serviceType,"contact_details":$var_contact_details,"pwarning":$var_pwarning,"transfer_info":$var_transfer_info,"errors":$var_errors,"domain_logs":$var_domain_logs,"allInfo":$var_allInfo,"registrarStatus":$var_registrarStatus,"locked":$var_locked,"whoisPrivacy":$var_whoisPrivacy,"autoRenew":$var_autoRenew
        | }
        """.stripMargin
}
