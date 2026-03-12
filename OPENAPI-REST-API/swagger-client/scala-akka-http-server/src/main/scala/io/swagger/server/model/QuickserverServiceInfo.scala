package io.swagger.server.model


/**
 * Core service record for a QuickServer including ID, status, IP, OS, and billing details.
 *
 * @param qs_id Quickserver ID for example: ''24355''
 * @param qs_custid Customer ID for example: ''771282''
 * @param qs_server Server information for example: ''365''
 * @param qs_ip IP address
 * @param qs_ipv6 IPv6 address (null)
 * @param qs_vzid VZ ID for example: ''qs24355''
 * @param qs_currency Currency for example: ''USD''
 * @param qs_type Type for example: ''700''
 * @param qs_order_date Order date for example: ''2023-04-11T20:00:06.000Z''
 * @param qs_status Status for example: ''canceled''
 * @param qs_invoice Invoice number for example: ''20297531''
 * @param qs_coupon Coupon information for example: ''0''
 * @param qs_extra Extra information for example: ''{"platform":"kvm"}''
 * @param qs_hostname Hostname for example: ''qs24355''
 * @param qs_server_status Server status for example: ''deleted''
 * @param qs_comment Comment
 * @param qs_slices Slices information for example: ''0''
 * @param qs_vnc VNC information for example: ''99.88.77.66''
 * @param qs_vnc_port VNC port (null)
 * @param qs_rootpass Root password
 * @param qs_mac MAC address
 * @param qs_os Operating system for example: ''ubuntu24''
 * @param qs_version OS version for example: ''Ubuntu''
 * @param qs_location Location for example: ''1''
 * @param qs_platform Platform (null)
 */
case class QuickserverServiceInfo (
  qs_id: Option[String],
  qs_custid: Option[String],
  qs_server: Option[String],
  qs_ip: Option[String],
  qs_ipv6: Option[],
  qs_vzid: Option[String],
  qs_currency: Option[String],
  qs_type: Option[String],
  qs_order_date: Option[String],
  qs_status: Option[String],
  qs_invoice: Option[String],
  qs_coupon: Option[String],
  qs_extra: Option[String],
  qs_hostname: Option[String],
  qs_server_status: Option[String],
  qs_comment: Option[String],
  qs_slices: Option[String],
  qs_vnc: Option[String],
  qs_vnc_port: Option[],
  qs_rootpass: Option[String],
  qs_mac: Option[String],
  qs_os: Option[String],
  qs_version: Option[String],
  qs_location: Option[String],
  qs_platform: Option[]
)

