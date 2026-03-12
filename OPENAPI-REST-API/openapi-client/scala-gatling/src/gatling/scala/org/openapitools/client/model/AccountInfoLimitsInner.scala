
package org.openapitools.client.model


case class AccountInfoLimitsInner (
    _start: Option[String],
    _end: Option[String]
)
object AccountInfoLimitsInner {
    def toStringBody(var_start: Object, var_end: Object) =
        s"""
        | {
        | "start":$var_start,"end":$var_end
        | }
        """.stripMargin
}
