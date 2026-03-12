package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import GetWebsiteBuyIp200Response._

case class GetWebsiteBuyIp200Response (
  /* A map of IP addresses to their current reverse DNS hostnames. */
  ips: Option[Map[String, String]])

object GetWebsiteBuyIp200Response {
  import DateTimeCodecs._

  implicit val GetWebsiteBuyIp200ResponseCodecJson: CodecJson[GetWebsiteBuyIp200Response] = CodecJson.derive[GetWebsiteBuyIp200Response]
  implicit val GetWebsiteBuyIp200ResponseDecoder: EntityDecoder[GetWebsiteBuyIp200Response] = jsonOf[GetWebsiteBuyIp200Response]
  implicit val GetWebsiteBuyIp200ResponseEncoder: EntityEncoder[GetWebsiteBuyIp200Response] = jsonEncoderOf[GetWebsiteBuyIp200Response]
}
