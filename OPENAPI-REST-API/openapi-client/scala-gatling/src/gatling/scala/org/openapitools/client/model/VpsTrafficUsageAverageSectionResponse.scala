
package org.openapitools.client.model


case class VpsTrafficUsageAverageSectionResponse (
    _total: Integer,
    _count: Integer,
    _value: Integer
)
object VpsTrafficUsageAverageSectionResponse {
    def toStringBody(var_total: Object, var_count: Object, var_value: Object) =
        s"""
        | {
        | "total":$var_total,"count":$var_count,"value":$var_value
        | }
        """.stripMargin
}
