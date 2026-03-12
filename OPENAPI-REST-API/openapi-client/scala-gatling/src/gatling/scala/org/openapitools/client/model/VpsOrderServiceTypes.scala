
package org.openapitools.client.model


case class VpsOrderServiceTypes (
    _32: Option[VpsOrderServiceTypes32]
)
object VpsOrderServiceTypes {
    def toStringBody(var_32: Object) =
        s"""
        | {
        | "32":$var_32
        | }
        """.stripMargin
}
