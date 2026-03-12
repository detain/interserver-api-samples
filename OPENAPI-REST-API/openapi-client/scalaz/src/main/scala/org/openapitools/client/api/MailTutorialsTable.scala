package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import MailTutorialsTable._

case class MailTutorialsTable (
  /* The title of the tutorials table. */
  title: Option[String],
/* The rows of the tutorials table. */
  rows: Option[List[MailTutorialsTableRow]])

object MailTutorialsTable {
  import DateTimeCodecs._

  implicit val MailTutorialsTableCodecJson: CodecJson[MailTutorialsTable] = CodecJson.derive[MailTutorialsTable]
  implicit val MailTutorialsTableDecoder: EntityDecoder[MailTutorialsTable] = jsonOf[MailTutorialsTable]
  implicit val MailTutorialsTableEncoder: EntityEncoder[MailTutorialsTable] = jsonEncoderOf[MailTutorialsTable]
}
