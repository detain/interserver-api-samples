package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import SslCancel200Response._

case class SslCancel200Response (
  success: Boolean,
text: String)

object SslCancel200Response {
  import DateTimeCodecs._

  implicit val SslCancel200ResponseCodecJson: CodecJson[SslCancel200Response] = CodecJson.derive[SslCancel200Response]
  implicit val SslCancel200ResponseDecoder: EntityDecoder[SslCancel200Response] = jsonOf[SslCancel200Response]
  implicit val SslCancel200ResponseEncoder: EntityEncoder[SslCancel200Response] = jsonEncoderOf[SslCancel200Response]
}
