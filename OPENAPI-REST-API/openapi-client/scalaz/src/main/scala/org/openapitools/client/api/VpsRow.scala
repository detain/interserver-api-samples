package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import VpsRow._

case class VpsRow (
  /* The id of the vps. */
  vps_id: String,
/* The name of the vps. */
  vps_name: String,
/* The repeat invoices cost of the vps. */
  repeat_invoices_cost: String,
/* The hostname of the vps. */
  vps_hostname: String,
/* The ip of the vps. */
  vps_ip: String,
/* The status of the vps. */
  vps_status: String,
/* The services name of the vps. */
  services_name: String,
/* The comment of the vps. */
  vps_comment: String)

object VpsRow {
  import DateTimeCodecs._

  implicit val VpsRowCodecJson: CodecJson[VpsRow] = CodecJson.derive[VpsRow]
  implicit val VpsRowDecoder: EntityDecoder[VpsRow] = jsonOf[VpsRow]
  implicit val VpsRowEncoder: EntityEncoder[VpsRow] = jsonEncoderOf[VpsRow]
}
