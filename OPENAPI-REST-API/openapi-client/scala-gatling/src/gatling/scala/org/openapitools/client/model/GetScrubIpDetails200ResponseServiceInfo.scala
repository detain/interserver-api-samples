
package org.openapitools.client.model


case class GetScrubIpDetails200ResponseServiceInfo (
    _scrub_ip_id: Option[String],
    _scrub_ip_type: Option[String],
    _scrub_ip_custid: Option[String],
    _scrub_ip_order_date: Option[String],
    _scrub_ip_ip: Option[String],
    _scrub_ip_service_id: Option[String],
    _scrub_ip_service_module: Option[String],
    _scrub_ip_status: Option[String],
    _scrub_ip_invoice: Option[String],
    _scrub_ip_currency: Option[String],
    _scrub_ip_coupon: Option[String],
    _scrub_ip_comment: Option[String]
)
object GetScrubIpDetails200ResponseServiceInfo {
    def toStringBody(var_scrub_ip_id: Object, var_scrub_ip_type: Object, var_scrub_ip_custid: Object, var_scrub_ip_order_date: Object, var_scrub_ip_ip: Object, var_scrub_ip_service_id: Object, var_scrub_ip_service_module: Object, var_scrub_ip_status: Object, var_scrub_ip_invoice: Object, var_scrub_ip_currency: Object, var_scrub_ip_coupon: Object, var_scrub_ip_comment: Object) =
        s"""
        | {
        | "scrub_ip_id":$var_scrub_ip_id,"scrub_ip_type":$var_scrub_ip_type,"scrub_ip_custid":$var_scrub_ip_custid,"scrub_ip_order_date":$var_scrub_ip_order_date,"scrub_ip_ip":$var_scrub_ip_ip,"scrub_ip_service_id":$var_scrub_ip_service_id,"scrub_ip_service_module":$var_scrub_ip_service_module,"scrub_ip_status":$var_scrub_ip_status,"scrub_ip_invoice":$var_scrub_ip_invoice,"scrub_ip_currency":$var_scrub_ip_currency,"scrub_ip_coupon":$var_scrub_ip_coupon,"scrub_ip_comment":$var_scrub_ip_comment
        | }
        """.stripMargin
}
