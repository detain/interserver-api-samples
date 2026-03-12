
package org.openapitools.client.model


case class HomeServicesLicenses (
    _links: Option[HomeServicesLicensesLinks],
    /* Number of licenses. */
    _count: Option[Integer]
)
object HomeServicesLicenses {
    def toStringBody(var_links: Object, var_count: Object) =
        s"""
        | {
        | "links":$var_links,"count":$var_count
        | }
        """.stripMargin
}
