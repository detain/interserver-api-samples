package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import VpsServiceAddons._

case class VpsServiceAddons (
  /* Whether a cPanel license is active on this VPS. */
  has_cpanel: Option[Boolean],
/* Whether a DirectAdmin license is active on this VPS. */
  has_directadmin: Option[Boolean],
/* Whether a Fantastico license is active on this VPS. */
  has_fantastico: Option[Boolean],
/* Whether a Softaculous license is active on this VPS. */
  has_softaculous: Option[Boolean],
/* Whether extra disk space has been added to this VPS. */
  has_hdspace: Option[Boolean],
/* Whether a dedicated IP address is assigned to this VPS. */
  dedicated_ip: Option[Boolean],
/* List of additional IPv4 addresses assigned to this VPS. */
  extra_ips: Option[List[String]],
/* List of additional IPv6 addresses assigned to this VPS. */
  extra_ips6: Option[List[String]],
/* List of IP addresses that have unpaid charges. */
  unpaid_ips: Option[List[String]],
/* All IPv4 addresses assigned to this VPS. */
  ips: Option[List[String]],
/* All IPv6 addresses assigned to this VPS. */
  ips6: Option[List[String]],
/* The add-on service ID for the cPanel license. */
  cpanel_id: Option[Integer],
/* Total monthly add-on cost in cents. */
  cost: Option[Integer],
/* List of add-on service IDs active on this VPS. */
  ids: Option[List[String]],
/* Raw add-on data entries. */
  rdata: Option[List[String]])

object VpsServiceAddons {
  import DateTimeCodecs._

  implicit val VpsServiceAddonsCodecJson: CodecJson[VpsServiceAddons] = CodecJson.derive[VpsServiceAddons]
  implicit val VpsServiceAddonsDecoder: EntityDecoder[VpsServiceAddons] = jsonOf[VpsServiceAddons]
  implicit val VpsServiceAddonsEncoder: EntityEncoder[VpsServiceAddons] = jsonEncoderOf[VpsServiceAddons]
}
