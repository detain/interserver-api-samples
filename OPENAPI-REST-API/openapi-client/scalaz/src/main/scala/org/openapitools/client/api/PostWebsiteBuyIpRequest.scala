package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import PostWebsiteBuyIpRequest._

case class PostWebsiteBuyIpRequest (
  /* A map of IP addresses to their desired reverse DNS hostnames. */
  ips: Option[Map[String, String]])

object PostWebsiteBuyIpRequest {
  import DateTimeCodecs._

  implicit val PostWebsiteBuyIpRequestCodecJson: CodecJson[PostWebsiteBuyIpRequest] = CodecJson.derive[PostWebsiteBuyIpRequest]
  implicit val PostWebsiteBuyIpRequestDecoder: EntityDecoder[PostWebsiteBuyIpRequest] = jsonOf[PostWebsiteBuyIpRequest]
  implicit val PostWebsiteBuyIpRequestEncoder: EntityEncoder[PostWebsiteBuyIpRequest] = jsonEncoderOf[PostWebsiteBuyIpRequest]
}
