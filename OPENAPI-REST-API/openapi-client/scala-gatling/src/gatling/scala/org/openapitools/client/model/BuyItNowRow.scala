
package org.openapitools.client.model


case class BuyItNowRow (
    /* Unique server ID. Use this as `server_id` in `POST /servers/order/buy_now_server`. */
    _server_id: Option[String],
    _cpu: Option[List[BuyItNowRowCpuInner]],
    _memory: Option[String],
    _disk: Option[Map[String, String]],
    _bandwidth: Option[String],
    _ips: Option[String],
    _location: Option[String],
    _price: Option[Integer]
)
object BuyItNowRow {
    def toStringBody(var_server_id: Object, var_cpu: Object, var_memory: Object, var_disk: Object, var_bandwidth: Object, var_ips: Object, var_location: Object, var_price: Object) =
        s"""
        | {
        | "server_id":$var_server_id,"cpu":$var_cpu,"memory":$var_memory,"disk":$var_disk,"bandwidth":$var_bandwidth,"ips":$var_ips,"location":$var_location,"price":$var_price
        | }
        """.stripMargin
}
