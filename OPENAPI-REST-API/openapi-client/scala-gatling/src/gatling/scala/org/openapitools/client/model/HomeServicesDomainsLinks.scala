
package org.openapitools.client.model


case class HomeServicesDomainsLinks (
    /* Link to a domain. */
    _376114: Option[String],
    /* Link to a domain. */
    _376503: Option[String],
    /* Link to a domain. */
    _592337: Option[String]
)
object HomeServicesDomainsLinks {
    def toStringBody(var_376114: Object, var_376503: Object, var_592337: Object) =
        s"""
        | {
        | "376114":$var_376114,"376503":$var_376503,"592337":$var_592337
        | }
        """.stripMargin
}
