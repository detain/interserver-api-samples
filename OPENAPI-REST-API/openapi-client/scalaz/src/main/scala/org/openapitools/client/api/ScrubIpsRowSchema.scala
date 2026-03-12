package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import ScrubIpsRowSchema._

case class ScrubIpsRowSchema (
  scrub_ip_id: Option[Integer],
repeat_invoices_cost: Option[BigDecimal],
scrub_ip_ip: Option[String],
scrub_ip_status: Option[String],
services_name: Option[String])

object ScrubIpsRowSchema {
  import DateTimeCodecs._

  implicit val ScrubIpsRowSchemaCodecJson: CodecJson[ScrubIpsRowSchema] = CodecJson.derive[ScrubIpsRowSchema]
  implicit val ScrubIpsRowSchemaDecoder: EntityDecoder[ScrubIpsRowSchema] = jsonOf[ScrubIpsRowSchema]
  implicit val ScrubIpsRowSchemaEncoder: EntityEncoder[ScrubIpsRowSchema] = jsonEncoderOf[ScrubIpsRowSchema]
}
