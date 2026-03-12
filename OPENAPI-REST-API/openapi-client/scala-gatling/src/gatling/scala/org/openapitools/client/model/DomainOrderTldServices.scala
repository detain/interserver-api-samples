
package org.openapitools.client.model


case class DomainOrderTldServices (
    /* Service ID for .asia TLD */
    __asia: Option[Integer],
    /* Service ID for .be TLD */
    __be: Option[Integer],
    /* Service ID for .biz TLD */
    __biz: Option[Integer],
    /* Service ID for .ca TLD */
    __ca: Option[Integer]
)
object DomainOrderTldServices {
    def toStringBody(var__asia: Object, var__be: Object, var__biz: Object, var__ca: Object) =
        s"""
        | {
        | "_asia":$var__asia,"_be":$var__be,"_biz":$var__biz,"_ca":$var__ca
        | }
        """.stripMargin
}
