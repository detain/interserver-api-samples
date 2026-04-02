package io.swagger.server.model


/**
 * @param vps_id VPS ID for example: ''85872''
 * @param vps_custid Customer ID for example: ''223513''
 * @param vps_server Server ID for example: ''2439''
 * @param vps_ip IP address of the VPS for example: ''1.2.3.4''
 * @param vps_ipv6 IPv6 address of the VPS
 * @param vps_vzid VPS Virtuozzo ID for example: ''vps85872''
 * @param vps_currency Currency used for billing for example: ''USD''
 * @param vps_type VPS type for example: ''33''
 * @param vps_order_date Date of VPS order for example: ''2022-12-26T20:14:59.000Z''
 * @param vps_status VPS status for example: ''active''
 * @param vps_invoice VPS invoice number for example: ''20130799''
 * @param vps_coupon VPS coupon code for example: ''3646''
 * @param vps_extra Additional information about the VPS for example: ''{"spice":5903,"snapshots":[{"name":"third","used":36490445,"date":1692095220},{"name":"second","used":40894464,"date":1692181620},{"name":"first","used":54735668,"date":1692268020}]}''
 * @param vps_hostname VPS hostname for example: ''vps85872''
 * @param vps_server_status Status of the VPS server for example: ''running''
 * @param vps_comment Comment associated with the VPS for example: ''my-web-2''
 * @param vps_slices Number of VPS slices for example: ''16''
 * @param vps_vnc VNC address for example: ''8.7.6.5''
 * @param vps_vnc_port VNC port for example: ''5902''
 * @param vps_rootpass Root password of the VPS for example: ''mypassword''
 * @param vps_mac MAC address of the VPS for example: ''00:16:3e:27:59:b2''
 * @param vps_os Operating system of the VPS for example: ''ubuntu24''
 * @param vps_version Version of the operating system for example: ''ubuntu''
 * @param vps_location Location of the VPS for example: ''1''
 * @param vps_platform Virtualization platform for example: ''kvm''
 * @param vps_diskused Amount of disk space used for example: ''0''
 * @param vps_diskmax Maximum disk space available for example: ''0''
 */
case class VpsServiceInfo (
  vps_id: Option[String],
  vps_custid: Option[String],
  vps_server: Option[String],
  vps_ip: Option[String],
  vps_ipv6: Option[String],
  vps_vzid: Option[String],
  vps_currency: Option[String],
  vps_type: Option[String],
  vps_order_date: Option[String],
  vps_status: Option[String],
  vps_invoice: Option[String],
  vps_coupon: Option[String],
  vps_extra: Option[String],
  vps_hostname: Option[String],
  vps_server_status: Option[String],
  vps_comment: Option[String],
  vps_slices: Option[String],
  vps_vnc: Option[String],
  vps_vnc_port: Option[String],
  vps_rootpass: Option[String],
  vps_mac: Option[String],
  vps_os: Option[String],
  vps_version: Option[String],
  vps_location: Option[String],
  vps_platform: Option[String],
  vps_diskused: Option[String],
  vps_diskmax: Option[String]
)

