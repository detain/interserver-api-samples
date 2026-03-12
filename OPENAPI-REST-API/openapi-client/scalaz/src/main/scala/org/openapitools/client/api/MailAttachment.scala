package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import MailAttachment._

case class MailAttachment (
  /* The filename of the attached file. */
  filename: String,
/* The file contents base64 encoded */
  data: String)

object MailAttachment {
  import DateTimeCodecs._

  implicit val MailAttachmentCodecJson: CodecJson[MailAttachment] = CodecJson.derive[MailAttachment]
  implicit val MailAttachmentDecoder: EntityDecoder[MailAttachment] = jsonOf[MailAttachment]
  implicit val MailAttachmentEncoder: EntityEncoder[MailAttachment] = jsonEncoderOf[MailAttachment]
}
