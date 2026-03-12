
package org.openapitools.client.model


case class AccountFeatures (
    _disable_reset: Option[Integer],
    _disable_reinstall: Option[Integer]
)
object AccountFeatures {
    def toStringBody(var_disable_reset: Object, var_disable_reinstall: Object) =
        s"""
        | {
        | "disable_reset":$var_disable_reset,"disable_reinstall":$var_disable_reinstall
        | }
        """.stripMargin
}
