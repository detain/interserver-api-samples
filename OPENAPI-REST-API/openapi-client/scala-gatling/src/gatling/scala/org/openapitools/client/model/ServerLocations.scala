
package org.openapitools.client.model


case class ServerLocations (
    _1: Option[ServerLocation1]
)
object ServerLocations {
    def toStringBody(var_1: Object) =
        s"""
        | {
        | "1":$var_1
        | }
        """.stripMargin
}
