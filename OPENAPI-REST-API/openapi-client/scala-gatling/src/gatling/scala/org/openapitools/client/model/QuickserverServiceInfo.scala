
package org.openapitools.client.model


case class QuickserverServiceInfo (
    /* Quickserver ID */
    _qs_id: Option[String],
    /* Customer ID */
    _qs_custid: Option[String],
    /* Server information */
    _qs_server: Option[String],
    /* IP address */
    _qs_ip: Option[String],
    /* IPv6 address (null) */
    _qs_ipv6: Option[String],
    /* VZ ID */
    _qs_vzid: Option[String],
    /* Currency */
    _qs_currency: Option[String],
    /* Type */
    _qs_type: Option[String],
    /* Order date */
    _qs_order_date: Option[String],
    /* Status */
    _qs_status: Option[String],
    /* Invoice number */
    _qs_invoice: Option[String],
    /* Coupon information */
    _qs_coupon: Option[String],
    /* Extra information */
    _qs_extra: Option[String],
    /* Hostname */
    _qs_hostname: Option[String],
    /* Server status */
    _qs_server_status: Option[String],
    /* Comment */
    _qs_comment: Option[String],
    /* Slices information */
    _qs_slices: Option[String],
    /* VNC information */
    _qs_vnc: Option[String],
    /* VNC port (null) */
    _qs_vnc_port: Option[Integer],
    /* Root password */
    _qs_rootpass: Option[String],
    /* MAC address */
    _qs_mac: Option[String],
    /* Operating system */
    _qs_os: Option[String],
    /* OS version */
    _qs_version: Option[String],
    /* Location */
    _qs_location: Option[String],
    /* Platform (null) */
    _qs_platform: Option[String]
)
object QuickserverServiceInfo {
    def toStringBody(var_qs_id: Object, var_qs_custid: Object, var_qs_server: Object, var_qs_ip: Object, var_qs_ipv6: Object, var_qs_vzid: Object, var_qs_currency: Object, var_qs_type: Object, var_qs_order_date: Object, var_qs_status: Object, var_qs_invoice: Object, var_qs_coupon: Object, var_qs_extra: Object, var_qs_hostname: Object, var_qs_server_status: Object, var_qs_comment: Object, var_qs_slices: Object, var_qs_vnc: Object, var_qs_vnc_port: Object, var_qs_rootpass: Object, var_qs_mac: Object, var_qs_os: Object, var_qs_version: Object, var_qs_location: Object, var_qs_platform: Object) =
        s"""
        | {
        | "qs_id":$var_qs_id,"qs_custid":$var_qs_custid,"qs_server":$var_qs_server,"qs_ip":$var_qs_ip,"qs_ipv6":$var_qs_ipv6,"qs_vzid":$var_qs_vzid,"qs_currency":$var_qs_currency,"qs_type":$var_qs_type,"qs_order_date":$var_qs_order_date,"qs_status":$var_qs_status,"qs_invoice":$var_qs_invoice,"qs_coupon":$var_qs_coupon,"qs_extra":$var_qs_extra,"qs_hostname":$var_qs_hostname,"qs_server_status":$var_qs_server_status,"qs_comment":$var_qs_comment,"qs_slices":$var_qs_slices,"qs_vnc":$var_qs_vnc,"qs_vnc_port":$var_qs_vnc_port,"qs_rootpass":$var_qs_rootpass,"qs_mac":$var_qs_mac,"qs_os":$var_qs_os,"qs_version":$var_qs_version,"qs_location":$var_qs_location,"qs_platform":$var_qs_platform
        | }
        """.stripMargin
}
