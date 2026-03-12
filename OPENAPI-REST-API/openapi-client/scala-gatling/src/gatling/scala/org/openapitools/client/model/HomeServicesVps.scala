
package org.openapitools.client.model


case class HomeServicesVps (
    _links: Option[HomeServicesVpsLinks],
    /* Number of VPS services. */
    _count: Option[Integer]
)
object HomeServicesVps {
    def toStringBody(var_links: Object, var_count: Object) =
        s"""
        | {
        | "links":$var_links,"count":$var_count
        | }
        """.stripMargin
}
