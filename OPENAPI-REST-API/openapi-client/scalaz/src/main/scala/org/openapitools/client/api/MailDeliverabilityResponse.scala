package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import MailDeliverabilityResponse._

case class MailDeliverabilityResponse (
  /* Delivered and bounced counts. */
  stat: Option[Any],
/* Bounce percentage. */
  percent: Option[BigDecimal],
/* Detailed deliverability breakdown by sender or domain. */
  table_data: Option[List[List[String]]])

object MailDeliverabilityResponse {
  import DateTimeCodecs._

  implicit val MailDeliverabilityResponseCodecJson: CodecJson[MailDeliverabilityResponse] = CodecJson.derive[MailDeliverabilityResponse]
  implicit val MailDeliverabilityResponseDecoder: EntityDecoder[MailDeliverabilityResponse] = jsonOf[MailDeliverabilityResponse]
  implicit val MailDeliverabilityResponseEncoder: EntityEncoder[MailDeliverabilityResponse] = jsonEncoderOf[MailDeliverabilityResponse]
}
