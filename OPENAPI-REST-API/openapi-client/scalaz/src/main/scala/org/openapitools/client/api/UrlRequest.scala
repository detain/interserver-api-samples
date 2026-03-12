package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import UrlRequest._

case class UrlRequest (
  url: Option[String])

object UrlRequest {
  import DateTimeCodecs._

  implicit val UrlRequestCodecJson: CodecJson[UrlRequest] = CodecJson.derive[UrlRequest]
  implicit val UrlRequestDecoder: EntityDecoder[UrlRequest] = jsonOf[UrlRequest]
  implicit val UrlRequestEncoder: EntityEncoder[UrlRequest] = jsonEncoderOf[UrlRequest]
}
