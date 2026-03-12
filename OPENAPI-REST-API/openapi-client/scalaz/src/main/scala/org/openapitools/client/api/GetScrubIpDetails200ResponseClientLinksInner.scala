package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import GetScrubIpDetails200ResponseClientLinksInner._

case class GetScrubIpDetails200ResponseClientLinksInner (
  label: Option[String],
link: Option[String],
icon: Option[String],
icon_text: Option[String],
help_text: Option[String],
other_attr: Option[String])

object GetScrubIpDetails200ResponseClientLinksInner {
  import DateTimeCodecs._

  implicit val GetScrubIpDetails200ResponseClientLinksInnerCodecJson: CodecJson[GetScrubIpDetails200ResponseClientLinksInner] = CodecJson.derive[GetScrubIpDetails200ResponseClientLinksInner]
  implicit val GetScrubIpDetails200ResponseClientLinksInnerDecoder: EntityDecoder[GetScrubIpDetails200ResponseClientLinksInner] = jsonOf[GetScrubIpDetails200ResponseClientLinksInner]
  implicit val GetScrubIpDetails200ResponseClientLinksInnerEncoder: EntityEncoder[GetScrubIpDetails200ResponseClientLinksInner] = jsonEncoderOf[GetScrubIpDetails200ResponseClientLinksInner]
}
