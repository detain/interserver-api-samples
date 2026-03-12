
package org.openapitools.client.model


case class VpsTrafficHistoryResponse (
    _hour: VpsTrafficHistorySectionResponse,
    _day: VpsTrafficHistorySectionResponse
)
object VpsTrafficHistoryResponse {
    def toStringBody(var_hour: Object, var_day: Object) =
        s"""
        | {
        | "hour":$var_hour,"day":$var_day
        | }
        """.stripMargin
}
