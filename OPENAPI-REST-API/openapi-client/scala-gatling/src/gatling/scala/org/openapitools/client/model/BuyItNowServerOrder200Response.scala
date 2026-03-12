
package org.openapitools.client.model


case class BuyItNowServerOrder200Response (
    _bandwidth: Option[List[BuyItNowServerOrder200ResponseBandwidthInner]],
    _ips: Option[List[BuyItNowServerOrder200ResponseIpsInner]],
    _os: Option[List[BuyItNowServerOrder200ResponseOsInner]],
    _cp: Option[List[BuyItNowServerOrder200ResponseCpInner]],
    _raid: Option[List[BuyItNowServerOrder200ResponseRaidInner]]
)
object BuyItNowServerOrder200Response {
    def toStringBody(var_bandwidth: Object, var_ips: Object, var_os: Object, var_cp: Object, var_raid: Object) =
        s"""
        | {
        | "bandwidth":$var_bandwidth,"ips":$var_ips,"os":$var_os,"cp":$var_cp,"raid":$var_raid
        | }
        """.stripMargin
}
