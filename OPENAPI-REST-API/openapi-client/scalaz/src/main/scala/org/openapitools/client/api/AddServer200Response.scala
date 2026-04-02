package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import AddServer200Response._

case class AddServer200Response (
  /* Status message. */
  text: Option[String],
/* Invoice ID for payment. */
  invoice: Option[Integer],
/* Server order ID. */
  order: Option[Integer])

object AddServer200Response {
  import DateTimeCodecs._

  implicit val AddServer200ResponseCodecJson: CodecJson[AddServer200Response] = CodecJson.derive[AddServer200Response]
  implicit val AddServer200ResponseDecoder: EntityDecoder[AddServer200Response] = jsonOf[AddServer200Response]
  implicit val AddServer200ResponseEncoder: EntityEncoder[AddServer200Response] = jsonEncoderOf[AddServer200Response]
}
