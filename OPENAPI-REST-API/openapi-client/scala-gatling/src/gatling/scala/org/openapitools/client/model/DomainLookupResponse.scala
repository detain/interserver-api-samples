
package org.openapitools.client.model


case class DomainLookupResponse (
    /* Whether the domain is available to register. */
    _available: Option[Boolean],
    /* Whether the domain is marked as premium by the registrar. */
    _premium: Option[Boolean],
    /* Indicates if the domain is already used by a website service. */
    _website: Option[Boolean],
    /* Indicates if the domain already exists as a domain service on the account. */
    _domain_service: Option[Boolean],
    /* Service catalog details for the domain's TLD. */
    _service: Option[Any],
    /* Whether Whois privacy is available for the TLD. */
    _whois_privacy: Option[Boolean],
    /* Calculated registration price, when available. */
    _new: Option[String],
    /* Calculated renewal price, when available. */
    _renewal: Option[String],
    /* Calculated transfer price, when available. */
    _transfer: Option[String],
    /* Registrar field requirements for this domain/TLD. */
    _fields: Option[Any],
    /* Pricing information normalized to supported currencies. */
    _currencies: Option[Any]
)
object DomainLookupResponse {
    def toStringBody(var_available: Object, var_premium: Object, var_website: Object, var_domain_service: Object, var_service: Object, var_whois_privacy: Object, var_new: Object, var_renewal: Object, var_transfer: Object, var_fields: Object, var_currencies: Object) =
        s"""
        | {
        | "available":$var_available,"premium":$var_premium,"website":$var_website,"domain_service":$var_domain_service,"service":$var_service,"whois_privacy":$var_whois_privacy,"new":$var_new,"renewal":$var_renewal,"transfer":$var_transfer,"fields":$var_fields,"currencies":$var_currencies
        | }
        """.stripMargin
}
