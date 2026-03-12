package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import PostWebsiteBuyIp200Response._

case class PostWebsiteBuyIp200Response (
  message: Option[String],
success: Option[Boolean])

object PostWebsiteBuyIp200Response {
  import DateTimeCodecs._

  implicit val PostWebsiteBuyIp200ResponseCodecJson: CodecJson[PostWebsiteBuyIp200Response] = CodecJson.derive[PostWebsiteBuyIp200Response]
  implicit val PostWebsiteBuyIp200ResponseDecoder: EntityDecoder[PostWebsiteBuyIp200Response] = jsonOf[PostWebsiteBuyIp200Response]
  implicit val PostWebsiteBuyIp200ResponseEncoder: EntityEncoder[PostWebsiteBuyIp200Response] = jsonEncoderOf[PostWebsiteBuyIp200Response]
}
