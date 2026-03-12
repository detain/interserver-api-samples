
package org.openapitools.client.model


case class HomeServicesBackups (
    /* List of backup links. */
    _links: Option[List[String]],
    /* Number of backups. */
    _count: Option[Integer]
)
object HomeServicesBackups {
    def toStringBody(var_links: Object, var_count: Object) =
        s"""
        | {
        | "links":$var_links,"count":$var_count
        | }
        """.stripMargin
}
