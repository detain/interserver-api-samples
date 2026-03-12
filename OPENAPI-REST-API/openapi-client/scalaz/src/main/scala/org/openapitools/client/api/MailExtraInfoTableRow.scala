package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import MailExtraInfoTableRow._

case class MailExtraInfoTableRow (
  /* The description of the extra info table row. */
  desc: Option[String],
/* The value of the extra info table row. */
  value: Option[String])

object MailExtraInfoTableRow {
  import DateTimeCodecs._

  implicit val MailExtraInfoTableRowCodecJson: CodecJson[MailExtraInfoTableRow] = CodecJson.derive[MailExtraInfoTableRow]
  implicit val MailExtraInfoTableRowDecoder: EntityDecoder[MailExtraInfoTableRow] = jsonOf[MailExtraInfoTableRow]
  implicit val MailExtraInfoTableRowEncoder: EntityEncoder[MailExtraInfoTableRow] = jsonEncoderOf[MailExtraInfoTableRow]
}
