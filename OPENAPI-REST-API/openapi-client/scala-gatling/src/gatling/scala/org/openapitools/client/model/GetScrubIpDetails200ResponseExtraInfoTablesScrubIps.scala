
package org.openapitools.client.model


case class GetScrubIpDetails200ResponseExtraInfoTablesScrubIps (
    _title: Option[String],
    _rows: Option[List[GetScrubIpDetails200ResponseExtraInfoTablesScrubIpsRowsInner]]
)
object GetScrubIpDetails200ResponseExtraInfoTablesScrubIps {
    def toStringBody(var_title: Object, var_rows: Object) =
        s"""
        | {
        | "title":$var_title,"rows":$var_rows
        | }
        """.stripMargin
}
