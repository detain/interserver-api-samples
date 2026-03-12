package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import TextResponse._

case class TextResponse (
  /* Response text */
  text: Option[String],
/* Response message */
  message: Option[String])

object TextResponse {
  import DateTimeCodecs._

  implicit val TextResponseCodecJson: CodecJson[TextResponse] = CodecJson.derive[TextResponse]
  implicit val TextResponseDecoder: EntityDecoder[TextResponse] = jsonOf[TextResponse]
  implicit val TextResponseEncoder: EntityEncoder[TextResponse] = jsonEncoderOf[TextResponse]
}
