package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import DomainOrderResponse._

case class DomainOrderResponse (
  _OPS_version: Option[String],
protocol: Option[String],
is_success: Option[String],
action: Option[String],
attributes: Option[DomainOrderResponseAttributes],
response_text: Option[String],
`object`: Option[String],
response_code: Option[String])

object DomainOrderResponse {
  import DateTimeCodecs._

  implicit val DomainOrderResponseCodecJson: CodecJson[DomainOrderResponse] = CodecJson.derive[DomainOrderResponse]
  implicit val DomainOrderResponseDecoder: EntityDecoder[DomainOrderResponse] = jsonOf[DomainOrderResponse]
  implicit val DomainOrderResponseEncoder: EntityEncoder[DomainOrderResponse] = jsonEncoderOf[DomainOrderResponse]
}
