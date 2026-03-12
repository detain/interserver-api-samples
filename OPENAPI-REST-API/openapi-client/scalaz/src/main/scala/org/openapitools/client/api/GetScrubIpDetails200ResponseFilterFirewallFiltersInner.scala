package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import GetScrubIpDetails200ResponseFilterFirewallFiltersInner._

case class GetScrubIpDetails200ResponseFilterFirewallFiltersInner (
  daddr: Option[String],
dest: Option[String],
filter_name: Option[String],
destination_ip: Option[String],
filter: Option[String])

object GetScrubIpDetails200ResponseFilterFirewallFiltersInner {
  import DateTimeCodecs._

  implicit val GetScrubIpDetails200ResponseFilterFirewallFiltersInnerCodecJson: CodecJson[GetScrubIpDetails200ResponseFilterFirewallFiltersInner] = CodecJson.derive[GetScrubIpDetails200ResponseFilterFirewallFiltersInner]
  implicit val GetScrubIpDetails200ResponseFilterFirewallFiltersInnerDecoder: EntityDecoder[GetScrubIpDetails200ResponseFilterFirewallFiltersInner] = jsonOf[GetScrubIpDetails200ResponseFilterFirewallFiltersInner]
  implicit val GetScrubIpDetails200ResponseFilterFirewallFiltersInnerEncoder: EntityEncoder[GetScrubIpDetails200ResponseFilterFirewallFiltersInner] = jsonEncoderOf[GetScrubIpDetails200ResponseFilterFirewallFiltersInner]
}
