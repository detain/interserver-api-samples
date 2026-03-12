package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import QuickserverServiceInfo._

case class QuickserverServiceInfo (
  /* Quickserver ID */
  qs_id: Option[String],
/* Customer ID */
  qs_custid: Option[String],
/* Server information */
  qs_server: Option[String],
/* IP address */
  qs_ip: Option[String],
/* IPv6 address (null) */
  qs_ipv6: Option[AnyType],
/* VZ ID */
  qs_vzid: Option[String],
/* Currency */
  qs_currency: Option[String],
/* Type */
  qs_type: Option[String],
/* Order date */
  qs_order_date: Option[String],
/* Status */
  qs_status: Option[String],
/* Invoice number */
  qs_invoice: Option[String],
/* Coupon information */
  qs_coupon: Option[String],
/* Extra information */
  qs_extra: Option[String],
/* Hostname */
  qs_hostname: Option[String],
/* Server status */
  qs_server_status: Option[String],
/* Comment */
  qs_comment: Option[String],
/* Slices information */
  qs_slices: Option[String],
/* VNC information */
  qs_vnc: Option[String],
/* VNC port (null) */
  qs_vnc_port: Option[AnyType],
/* Root password */
  qs_rootpass: Option[String],
/* MAC address */
  qs_mac: Option[String],
/* Operating system */
  qs_os: Option[String],
/* OS version */
  qs_version: Option[String],
/* Location */
  qs_location: Option[String],
/* Platform (null) */
  qs_platform: Option[AnyType])

object QuickserverServiceInfo {
  import DateTimeCodecs._

  implicit val QuickserverServiceInfoCodecJson: CodecJson[QuickserverServiceInfo] = CodecJson.derive[QuickserverServiceInfo]
  implicit val QuickserverServiceInfoDecoder: EntityDecoder[QuickserverServiceInfo] = jsonOf[QuickserverServiceInfo]
  implicit val QuickserverServiceInfoEncoder: EntityEncoder[QuickserverServiceInfo] = jsonEncoderOf[QuickserverServiceInfo]
}
