
package org.openapitools.client.model

import java.time.OffsetDateTime

case class VpsTrafficHistorySectionResponse (
    _data: List[VpsTrafficHistorySectionDataResponse],
    _times: List[OffsetDateTime]
)
object VpsTrafficHistorySectionResponse {
    def toStringBody(var_data: Object, var_times: Object) =
        s"""
        | {
        | "data":$var_data,"times":$var_times
        | }
        """.stripMargin
}
