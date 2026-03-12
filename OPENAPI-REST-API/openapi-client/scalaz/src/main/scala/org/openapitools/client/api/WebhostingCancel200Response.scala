package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import WebhostingCancel200Response._

case class WebhostingCancel200Response (
  success: Boolean,
text: String)

object WebhostingCancel200Response {
  import DateTimeCodecs._

  implicit val WebhostingCancel200ResponseCodecJson: CodecJson[WebhostingCancel200Response] = CodecJson.derive[WebhostingCancel200Response]
  implicit val WebhostingCancel200ResponseDecoder: EntityDecoder[WebhostingCancel200Response] = jsonOf[WebhostingCancel200Response]
  implicit val WebhostingCancel200ResponseEncoder: EntityEncoder[WebhostingCancel200Response] = jsonEncoderOf[WebhostingCancel200Response]
}
