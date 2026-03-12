package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import MailExtraInfoTable._

case class MailExtraInfoTable (
  /* The title of the extra info table. */
  title: Option[String],
/* The rows of the extra info table. */
  rows: Option[List[MailExtraInfoTableRow]])

object MailExtraInfoTable {
  import DateTimeCodecs._

  implicit val MailExtraInfoTableCodecJson: CodecJson[MailExtraInfoTable] = CodecJson.derive[MailExtraInfoTable]
  implicit val MailExtraInfoTableDecoder: EntityDecoder[MailExtraInfoTable] = jsonOf[MailExtraInfoTable]
  implicit val MailExtraInfoTableEncoder: EntityEncoder[MailExtraInfoTable] = jsonEncoderOf[MailExtraInfoTable]
}
