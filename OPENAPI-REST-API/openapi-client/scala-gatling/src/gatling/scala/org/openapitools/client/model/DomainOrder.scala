
package org.openapitools.client.model


case class DomainOrder (
    /* Cost of Whois Privacy */
    _whoisPrivacyCost: Option[String],
    _services: Option[DomainOrderServices],
    /* Map of TLDs to domain service IDs. */
    _tldServices: Option[Any]
)
object DomainOrder {
    def toStringBody(var_whoisPrivacyCost: Object, var_services: Object, var_tldServices: Object) =
        s"""
        | {
        | "whoisPrivacyCost":$var_whoisPrivacyCost,"services":$var_services,"tldServices":$var_tldServices
        | }
        """.stripMargin
}
