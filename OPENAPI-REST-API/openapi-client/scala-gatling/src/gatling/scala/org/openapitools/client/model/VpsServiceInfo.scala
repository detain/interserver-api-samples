
package org.openapitools.client.model


case class VpsServiceInfo (
    /* VPS ID */
    _vps_id: Option[String],
    /* Customer ID */
    _vps_custid: Option[String],
    /* Server ID */
    _vps_server: Option[String],
    /* IP address of the VPS */
    _vps_ip: Option[String],
    /* IPv6 address of the VPS */
    _vps_ipv6: Option[String],
    /* VPS Virtuozzo ID */
    _vps_vzid: Option[String],
    /* Currency used for billing */
    _vps_currency: Option[String],
    /* VPS type */
    _vps_type: Option[String],
    /* Date of VPS order */
    _vps_order_date: Option[String],
    /* VPS status */
    _vps_status: Option[String],
    /* VPS invoice number */
    _vps_invoice: Option[String],
    /* VPS coupon code */
    _vps_coupon: Option[String],
    /* Additional information about the VPS */
    _vps_extra: Option[String],
    /* VPS hostname */
    _vps_hostname: Option[String],
    /* Status of the VPS server */
    _vps_server_status: Option[String],
    /* Comment associated with the VPS */
    _vps_comment: Option[String],
    /* Number of VPS slices */
    _vps_slices: Option[String],
    /* VNC address */
    _vps_vnc: Option[String],
    /* VNC port */
    _vps_vnc_port: Option[String],
    /* Root password of the VPS */
    _vps_rootpass: Option[String],
    /* MAC address of the VPS */
    _vps_mac: Option[String],
    /* Operating system of the VPS */
    _vps_os: Option[String],
    /* Version of the operating system */
    _vps_version: Option[String],
    /* Location of the VPS */
    _vps_location: Option[String],
    /* Virtualization platform */
    _vps_platform: Option[String],
    /* Amount of disk space used */
    _vps_diskused: Option[String],
    /* Maximum disk space available */
    _vps_diskmax: Option[String]
)
object VpsServiceInfo {
    def toStringBody(var_vps_id: Object, var_vps_custid: Object, var_vps_server: Object, var_vps_ip: Object, var_vps_ipv6: Object, var_vps_vzid: Object, var_vps_currency: Object, var_vps_type: Object, var_vps_order_date: Object, var_vps_status: Object, var_vps_invoice: Object, var_vps_coupon: Object, var_vps_extra: Object, var_vps_hostname: Object, var_vps_server_status: Object, var_vps_comment: Object, var_vps_slices: Object, var_vps_vnc: Object, var_vps_vnc_port: Object, var_vps_rootpass: Object, var_vps_mac: Object, var_vps_os: Object, var_vps_version: Object, var_vps_location: Object, var_vps_platform: Object, var_vps_diskused: Object, var_vps_diskmax: Object) =
        s"""
        | {
        | "vps_id":$var_vps_id,"vps_custid":$var_vps_custid,"vps_server":$var_vps_server,"vps_ip":$var_vps_ip,"vps_ipv6":$var_vps_ipv6,"vps_vzid":$var_vps_vzid,"vps_currency":$var_vps_currency,"vps_type":$var_vps_type,"vps_order_date":$var_vps_order_date,"vps_status":$var_vps_status,"vps_invoice":$var_vps_invoice,"vps_coupon":$var_vps_coupon,"vps_extra":$var_vps_extra,"vps_hostname":$var_vps_hostname,"vps_server_status":$var_vps_server_status,"vps_comment":$var_vps_comment,"vps_slices":$var_vps_slices,"vps_vnc":$var_vps_vnc,"vps_vnc_port":$var_vps_vnc_port,"vps_rootpass":$var_vps_rootpass,"vps_mac":$var_vps_mac,"vps_os":$var_vps_os,"vps_version":$var_vps_version,"vps_location":$var_vps_location,"vps_platform":$var_vps_platform,"vps_diskused":$var_vps_diskused,"vps_diskmax":$var_vps_diskmax
        | }
        """.stripMargin
}
