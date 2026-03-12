
package org.openapitools.client.model


case class VpsTrafficUsageAverageResponse (
    _in: VpsTrafficUsageAverageSectionResponse,
    _out: VpsTrafficUsageAverageSectionResponse
)
object VpsTrafficUsageAverageResponse {
    def toStringBody(var_in: Object, var_out: Object) =
        s"""
        | {
        | "in":$var_in,"out":$var_out
        | }
        """.stripMargin
}
