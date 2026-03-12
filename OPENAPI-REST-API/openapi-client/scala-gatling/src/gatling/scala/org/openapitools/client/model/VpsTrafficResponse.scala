
package org.openapitools.client.model

import java.time.OffsetDateTime

case class VpsTrafficResponse (
    _name: String,
    _target: String,
    _interval: Integer,
    _history: VpsTrafficHistoryResponse,
    _last: OffsetDateTime,
    _times: List[OffsetDateTime],
    _totals: VpsTrafficTotalsResposne,
    _usage: VpsTrafficUsageResponse,
    _data: List[VpsTrafficDataSectionResponse]
)
object VpsTrafficResponse {
    def toStringBody(var_name: Object, var_target: Object, var_interval: Object, var_history: Object, var_last: Object, var_times: Object, var_totals: Object, var_usage: Object, var_data: Object) =
        s"""
        | {
        | "name":$var_name,"target":$var_target,"interval":$var_interval,"history":$var_history,"last":$var_last,"times":$var_times,"totals":$var_totals,"usage":$var_usage,"data":$var_data
        | }
        """.stripMargin
}
