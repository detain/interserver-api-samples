package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import ServersCancel200Response._

case class ServersCancel200Response (
  success: Boolean,
text: String)

object ServersCancel200Response {
  import DateTimeCodecs._

  implicit val ServersCancel200ResponseCodecJson: CodecJson[ServersCancel200Response] = CodecJson.derive[ServersCancel200Response]
  implicit val ServersCancel200ResponseDecoder: EntityDecoder[ServersCancel200Response] = jsonOf[ServersCancel200Response]
  implicit val ServersCancel200ResponseEncoder: EntityEncoder[ServersCancel200Response] = jsonEncoderOf[ServersCancel200Response]
}
