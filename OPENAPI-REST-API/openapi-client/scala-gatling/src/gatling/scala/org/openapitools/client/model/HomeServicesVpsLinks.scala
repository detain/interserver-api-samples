
package org.openapitools.client.model


case class HomeServicesVpsLinks (
    /* Link to a VPS. */
    _465503: Option[String],
    /* Link to a VPS. */
    _2500081: Option[String],
    /* Link to a VPS. */
    _2578866: Option[String]
)
object HomeServicesVpsLinks {
    def toStringBody(var_465503: Object, var_2500081: Object, var_2578866: Object) =
        s"""
        | {
        | "465503":$var_465503,"2500081":$var_2500081,"2578866":$var_2578866
        | }
        """.stripMargin
}
