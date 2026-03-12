
package org.openapitools.client.model


case class HomeServicesWebhostingLinks (
    /* Link to a website. */
    _376359: Option[String],
    /* Link to a website. */
    _376473: Option[String],
    /* Link to a website. */
    _386218: Option[String]
)
object HomeServicesWebhostingLinks {
    def toStringBody(var_376359: Object, var_376473: Object, var_386218: Object) =
        s"""
        | {
        | "376359":$var_376359,"376473":$var_376473,"386218":$var_386218
        | }
        """.stripMargin
}
