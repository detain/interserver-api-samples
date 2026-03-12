package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import ServersBuyNowError._

case class ServersBuyNowError (
  /* Always false for error responses. */
  success: Option[Boolean],
/* Human-readable error summary. */
  text: Option[String],
/* List of specific validation error messages. */
  errors: Option[List[String]])

object ServersBuyNowError {
  import DateTimeCodecs._

  implicit val ServersBuyNowErrorCodecJson: CodecJson[ServersBuyNowError] = CodecJson.derive[ServersBuyNowError]
  implicit val ServersBuyNowErrorDecoder: EntityDecoder[ServersBuyNowError] = jsonOf[ServersBuyNowError]
  implicit val ServersBuyNowErrorEncoder: EntityEncoder[ServersBuyNowError] = jsonEncoderOf[ServersBuyNowError]
}
