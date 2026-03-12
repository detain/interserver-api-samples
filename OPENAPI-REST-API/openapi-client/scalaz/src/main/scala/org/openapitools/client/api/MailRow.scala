package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import MailRow._

case class MailRow (
  /* The id of the mail. */
  mail_id: Option[String],
/* The repeat invoices cost of the mail. */
  repeat_invoices_cost: Option[String],
/* The username of the mail. */
  mail_username: Option[String],
/* The status of the mail. */
  mail_status: Option[String],
/* The services name of the mail. */
  services_name: Option[String])

object MailRow {
  import DateTimeCodecs._

  implicit val MailRowCodecJson: CodecJson[MailRow] = CodecJson.derive[MailRow]
  implicit val MailRowDecoder: EntityDecoder[MailRow] = jsonOf[MailRow]
  implicit val MailRowEncoder: EntityEncoder[MailRow] = jsonEncoderOf[MailRow]
}
