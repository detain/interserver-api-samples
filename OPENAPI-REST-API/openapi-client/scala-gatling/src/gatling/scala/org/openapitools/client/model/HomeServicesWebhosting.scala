
package org.openapitools.client.model


case class HomeServicesWebhosting (
    _links: Option[HomeServicesWebhostingLinks],
    /* Number of web hosting services. */
    _count: Option[Integer]
)
object HomeServicesWebhosting {
    def toStringBody(var_links: Object, var_count: Object) =
        s"""
        | {
        | "links":$var_links,"count":$var_count
        | }
        """.stripMargin
}
