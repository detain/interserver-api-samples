package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import ServerServiceInfo._

case class ServerServiceInfo (
  /* The ID of the server. */
  server_id: Option[String],
/* The hostname of the server. */
  server_hostname: Option[String],
/* The customer ID associated with the server. */
  server_custid: Option[String],
/* The type of the server. */
  server_type: Option[String],
/* The currency used for billing. */
  server_currency: Option[String],
/* The date when the server was ordered. */
  server_order_date: Option[String],
/* The invoice number for the server. */
  server_invoice: Option[String],
/* The coupon associated with the server. */
  server_coupon: Option[String],
/* The status of the server. */
  server_status: Option[String],
/* The root of the server. */
  server_root: Option[String],
/* The dedicated tag of the server. */
  server_dedicated_tag: Option[String],
/* The custom tag of the server. */
  server_custom_tag: Option[String],
/* Comments related to the server. */
  server_comment: Option[String],
/* The initial billing amount for the server. */
  server_initial_bill: Option[String],
/* The hardware information of the server. */
  server_hardware: Option[String],
/* The number of IPs associated with the server. */
  server_ips: Option[String],
/* The monthly billing amount for the server. */
  server_monthly_bill: Option[String],
/* The setup status of the server. */
  server_setup: Option[String],
/* Discount information for the server. */
  server_discount: Option[AnyType],
/* The reputation of the server. */
  server_rep: Option[String],
/* The date related to the server. */
  server_date: Option[String],
/* The total cost of the server. */
  server_total_cost: Option[String],
/* The location of the server. */
  server_location: Option[AnyType],
/* The ordered hardware for the server. */
  server_hardware_ordered: Option[String],
/* The billed amount for the server. */
  server_billed: Option[String],
/* Indicates whether a welcome email was sent. */
  server_welcome_email: Option[String],
/* The number of dedicated CPUs for the server. */
  server_dedicated_cpu: Option[String],
/* The amount of dedicated memory for the server. */
  server_dedicated_memory: Option[String],
/* The size of the first dedicated hard drive. */
  server_dedicated_hd1: Option[String],
/* The size of the second dedicated hard drive. */
  server_dedicated_hd2: Option[AnyType],
/* The bandwidth of the server. */
  server_dedicated_bandwidth: Option[String],
/* The number of dedicated IPs for the server. */
  server_dedicated_ips: Option[String],
/* The operating system of the server. */
  server_dedicated_os: Option[String],
/* The control panel of the server. */
  server_dedicated_cp: Option[AnyType],
/* The RAID configuration of the server. */
  server_dedicated_raid: Option[String],
/* Additional information about the server. */
  server_extra: Option[String])

object ServerServiceInfo {
  import DateTimeCodecs._

  implicit val ServerServiceInfoCodecJson: CodecJson[ServerServiceInfo] = CodecJson.derive[ServerServiceInfo]
  implicit val ServerServiceInfoDecoder: EntityDecoder[ServerServiceInfo] = jsonOf[ServerServiceInfo]
  implicit val ServerServiceInfoEncoder: EntityEncoder[ServerServiceInfo] = jsonEncoderOf[ServerServiceInfo]
}
