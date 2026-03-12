package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import MailCancel200Response._

case class MailCancel200Response (
  success: Boolean,
text: String)

object MailCancel200Response {
  import DateTimeCodecs._

  implicit val MailCancel200ResponseCodecJson: CodecJson[MailCancel200Response] = CodecJson.derive[MailCancel200Response]
  implicit val MailCancel200ResponseDecoder: EntityDecoder[MailCancel200Response] = jsonOf[MailCancel200Response]
  implicit val MailCancel200ResponseEncoder: EntityEncoder[MailCancel200Response] = jsonEncoderOf[MailCancel200Response]
}
