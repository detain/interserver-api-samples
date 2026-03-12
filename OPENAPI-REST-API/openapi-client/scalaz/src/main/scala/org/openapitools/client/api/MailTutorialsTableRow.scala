package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import MailTutorialsTableRow._

case class MailTutorialsTableRow (
  /* The description of the tutorials table row. */
  desc: Option[String],
/* The value of the tutorials table row. */
  value: Option[String])

object MailTutorialsTableRow {
  import DateTimeCodecs._

  implicit val MailTutorialsTableRowCodecJson: CodecJson[MailTutorialsTableRow] = CodecJson.derive[MailTutorialsTableRow]
  implicit val MailTutorialsTableRowDecoder: EntityDecoder[MailTutorialsTableRow] = jsonOf[MailTutorialsTableRow]
  implicit val MailTutorialsTableRowEncoder: EntityEncoder[MailTutorialsTableRow] = jsonEncoderOf[MailTutorialsTableRow]
}
