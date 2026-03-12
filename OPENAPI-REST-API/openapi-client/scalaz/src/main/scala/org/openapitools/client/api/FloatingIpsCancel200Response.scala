package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import FloatingIpsCancel200Response._

case class FloatingIpsCancel200Response (
  success: Boolean,
text: String)

object FloatingIpsCancel200Response {
  import DateTimeCodecs._

  implicit val FloatingIpsCancel200ResponseCodecJson: CodecJson[FloatingIpsCancel200Response] = CodecJson.derive[FloatingIpsCancel200Response]
  implicit val FloatingIpsCancel200ResponseDecoder: EntityDecoder[FloatingIpsCancel200Response] = jsonOf[FloatingIpsCancel200Response]
  implicit val FloatingIpsCancel200ResponseEncoder: EntityEncoder[FloatingIpsCancel200Response] = jsonEncoderOf[FloatingIpsCancel200Response]
}
