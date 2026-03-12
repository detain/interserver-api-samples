package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import VpsServiceInfo._

case class VpsServiceInfo (
  /* VPS ID */
  vps_id: Option[String],
/* Customer ID */
  vps_custid: Option[String],
/* Server ID */
  vps_server: Option[String],
/* IP address of the VPS */
  vps_ip: Option[String],
/* IPv6 address of the VPS */
  vps_ipv6: Option[AnyType],
/* VPS Virtuozzo ID */
  vps_vzid: Option[String],
/* Currency used for billing */
  vps_currency: Option[String],
/* VPS type */
  vps_type: Option[String],
/* Date of VPS order */
  vps_order_date: Option[String],
/* VPS status */
  vps_status: Option[String],
/* VPS invoice number */
  vps_invoice: Option[String],
/* VPS coupon code */
  vps_coupon: Option[String],
/* Additional information about the VPS */
  vps_extra: Option[String],
/* VPS hostname */
  vps_hostname: Option[String],
/* Status of the VPS server */
  vps_server_status: Option[String],
/* Comment associated with the VPS */
  vps_comment: Option[String],
/* Number of VPS slices */
  vps_slices: Option[String],
/* VNC address */
  vps_vnc: Option[String],
/* VNC port */
  vps_vnc_port: Option[String],
/* Root password of the VPS */
  vps_rootpass: Option[String],
/* MAC address of the VPS */
  vps_mac: Option[String],
/* Operating system of the VPS */
  vps_os: Option[String],
/* Version of the operating system */
  vps_version: Option[String],
/* Location of the VPS */
  vps_location: Option[String],
/* Virtualization platform */
  vps_platform: Option[String],
/* Amount of disk space used */
  vps_diskused: Option[String],
/* Maximum disk space available */
  vps_diskmax: Option[String])

object VpsServiceInfo {
  import DateTimeCodecs._

  implicit val VpsServiceInfoCodecJson: CodecJson[VpsServiceInfo] = CodecJson.derive[VpsServiceInfo]
  implicit val VpsServiceInfoDecoder: EntityDecoder[VpsServiceInfo] = jsonOf[VpsServiceInfo]
  implicit val VpsServiceInfoEncoder: EntityEncoder[VpsServiceInfo] = jsonEncoderOf[VpsServiceInfo]
}
