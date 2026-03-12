
package org.openapitools.client.model


case class HomeServicesServers (
    _links: Option[HomeServicesServersLinks],
    /* Number of servers. */
    _count: Option[Integer]
)
object HomeServicesServers {
    def toStringBody(var_links: Object, var_count: Object) =
        s"""
        | {
        | "links":$var_links,"count":$var_count
        | }
        """.stripMargin
}
