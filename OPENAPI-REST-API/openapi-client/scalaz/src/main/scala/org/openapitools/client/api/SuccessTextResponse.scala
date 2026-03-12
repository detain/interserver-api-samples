package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import SuccessTextResponse._

case class SuccessTextResponse (
  /* Indicates whether or not the command was successful or not. */
  success: Boolean,
/* Text associated with the response. */
  text: Option[String],
/* Optional Action relating to the response. */
  action: Option[String])

object SuccessTextResponse {
  import DateTimeCodecs._

  implicit val SuccessTextResponseCodecJson: CodecJson[SuccessTextResponse] = CodecJson.derive[SuccessTextResponse]
  implicit val SuccessTextResponseDecoder: EntityDecoder[SuccessTextResponse] = jsonOf[SuccessTextResponse]
  implicit val SuccessTextResponseEncoder: EntityEncoder[SuccessTextResponse] = jsonEncoderOf[SuccessTextResponse]
}
