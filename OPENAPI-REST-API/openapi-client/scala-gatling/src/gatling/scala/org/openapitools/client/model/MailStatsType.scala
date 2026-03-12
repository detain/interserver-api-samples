
package org.openapitools.client.model


case class MailStatsType (
    _time: Option[String],
    _usage: Option[Integer],
    _currency: Option[String],
    _currencySymbol: Option[String],
    _cost: Option[Double],
    _received: Option[Integer],
    _sent: Option[Integer],
    _volume: Option[MailStatsTypeVolume]
)
object MailStatsType {
    def toStringBody(var_time: Object, var_usage: Object, var_currency: Object, var_currencySymbol: Object, var_cost: Object, var_received: Object, var_sent: Object, var_volume: Object) =
        s"""
        | {
        | "time":$var_time,"usage":$var_usage,"currency":$var_currency,"currencySymbol":$var_currencySymbol,"cost":$var_cost,"received":$var_received,"sent":$var_sent,"volume":$var_volume
        | }
        """.stripMargin
}
