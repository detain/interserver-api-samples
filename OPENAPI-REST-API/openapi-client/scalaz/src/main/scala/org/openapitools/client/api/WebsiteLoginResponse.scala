package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import WebsiteLoginResponse._

case class WebsiteLoginResponse (
  `type`: Option[String],
location: Option[String])

object WebsiteLoginResponse {
  import DateTimeCodecs._

  implicit val WebsiteLoginResponseCodecJson: CodecJson[WebsiteLoginResponse] = CodecJson.derive[WebsiteLoginResponse]
  implicit val WebsiteLoginResponseDecoder: EntityDecoder[WebsiteLoginResponse] = jsonOf[WebsiteLoginResponse]
  implicit val WebsiteLoginResponseEncoder: EntityEncoder[WebsiteLoginResponse] = jsonEncoderOf[WebsiteLoginResponse]
}
