
package org.openapitools.client.model


case class HomeServicesDomains (
    _links: Option[HomeServicesDomainsLinks],
    /* Number of domains. */
    _count: Option[Integer]
)
object HomeServicesDomains {
    def toStringBody(var_links: Object, var_count: Object) =
        s"""
        | {
        | "links":$var_links,"count":$var_count
        | }
        """.stripMargin
}
