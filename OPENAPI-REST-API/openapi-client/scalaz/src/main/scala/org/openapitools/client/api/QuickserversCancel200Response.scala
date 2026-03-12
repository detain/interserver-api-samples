package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import QuickserversCancel200Response._

case class QuickserversCancel200Response (
  success: Boolean,
text: String)

object QuickserversCancel200Response {
  import DateTimeCodecs._

  implicit val QuickserversCancel200ResponseCodecJson: CodecJson[QuickserversCancel200Response] = CodecJson.derive[QuickserversCancel200Response]
  implicit val QuickserversCancel200ResponseDecoder: EntityDecoder[QuickserversCancel200Response] = jsonOf[QuickserversCancel200Response]
  implicit val QuickserversCancel200ResponseEncoder: EntityEncoder[QuickserversCancel200Response] = jsonEncoderOf[QuickserversCancel200Response]
}
