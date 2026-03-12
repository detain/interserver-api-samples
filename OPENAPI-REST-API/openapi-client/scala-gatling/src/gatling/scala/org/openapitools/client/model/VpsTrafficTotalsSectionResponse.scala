
package org.openapitools.client.model


case class VpsTrafficTotalsSectionResponse (
    _in: Long,
    _out: Long
)
object VpsTrafficTotalsSectionResponse {
    def toStringBody(var_in: Object, var_out: Object) =
        s"""
        | {
        | "in":$var_in,"out":$var_out
        | }
        """.stripMargin
}
