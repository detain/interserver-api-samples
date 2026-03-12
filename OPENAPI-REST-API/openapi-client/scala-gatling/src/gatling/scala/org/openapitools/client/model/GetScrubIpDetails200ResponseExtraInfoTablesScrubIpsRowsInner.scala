
package org.openapitools.client.model


case class GetScrubIpDetails200ResponseExtraInfoTablesScrubIpsRowsInner (
    _desc: Option[String],
    _value: Option[String]
)
object GetScrubIpDetails200ResponseExtraInfoTablesScrubIpsRowsInner {
    def toStringBody(var_desc: Object, var_value: Object) =
        s"""
        | {
        | "desc":$var_desc,"value":$var_value
        | }
        """.stripMargin
}
