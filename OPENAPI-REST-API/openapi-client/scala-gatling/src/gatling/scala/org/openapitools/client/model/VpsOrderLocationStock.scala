
package org.openapitools.client.model


case class VpsOrderLocationStock (
    _1: Option[VpsOrderLocationStock1]
)
object VpsOrderLocationStock {
    def toStringBody(var_1: Object) =
        s"""
        | {
        | "1":$var_1
        | }
        """.stripMargin
}
