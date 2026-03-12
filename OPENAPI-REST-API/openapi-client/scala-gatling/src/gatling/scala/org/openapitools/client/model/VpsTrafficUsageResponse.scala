
package org.openapitools.client.model


case class VpsTrafficUsageResponse (
    _current: VpsTrafficTotalsSectionResponse,
    _peak: VpsTrafficTotalsSectionResponse,
    _average: VpsTrafficUsageAverageResponse
)
object VpsTrafficUsageResponse {
    def toStringBody(var_current: Object, var_peak: Object, var_average: Object) =
        s"""
        | {
        | "current":$var_current,"peak":$var_peak,"average":$var_average
        | }
        """.stripMargin
}
