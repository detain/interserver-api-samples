
package org.openapitools.client.model


case class DnsNewDomain (
    /* The domain name. */
    _domain: String,
    /* IP Address to point the domain to. */
    _ip: String
)
object DnsNewDomain {
    def toStringBody(var_domain: Object, var_ip: Object) =
        s"""
        | {
        | "domain":$var_domain,"ip":$var_ip
        | }
        """.stripMargin
}
