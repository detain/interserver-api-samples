
package org.openapitools.client.model


case class AffiliateTrafficRow (
    _traffic_id: Option[String],
    _traffic_ip: Option[String],
    _traffic_url: Option[String],
    _traffic_affiliate: Option[String],
    _traffic_referrer: Option[String],
    _traffic_timestamp: Option[String]
)
object AffiliateTrafficRow {
    def toStringBody(var_traffic_id: Object, var_traffic_ip: Object, var_traffic_url: Object, var_traffic_affiliate: Object, var_traffic_referrer: Object, var_traffic_timestamp: Object) =
        s"""
        | {
        | "traffic_id":$var_traffic_id,"traffic_ip":$var_traffic_ip,"traffic_url":$var_traffic_url,"traffic_affiliate":$var_traffic_affiliate,"traffic_referrer":$var_traffic_referrer,"traffic_timestamp":$var_traffic_timestamp
        | }
        """.stripMargin
}
