package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import GetScrubIpDetails200ResponseFilterFirewallRulesInner._

case class GetScrubIpDetails200ResponseFilterFirewallRulesInner (
  id: Option[String],
source_ip: Option[String],
destination_ip: Option[String],
protocol_id: Option[String],
source_port: Option[String],
destination_port: Option[String],
xdp_action: Option[String],
global_drop: Option[String])

object GetScrubIpDetails200ResponseFilterFirewallRulesInner {
  import DateTimeCodecs._

  implicit val GetScrubIpDetails200ResponseFilterFirewallRulesInnerCodecJson: CodecJson[GetScrubIpDetails200ResponseFilterFirewallRulesInner] = CodecJson.derive[GetScrubIpDetails200ResponseFilterFirewallRulesInner]
  implicit val GetScrubIpDetails200ResponseFilterFirewallRulesInnerDecoder: EntityDecoder[GetScrubIpDetails200ResponseFilterFirewallRulesInner] = jsonOf[GetScrubIpDetails200ResponseFilterFirewallRulesInner]
  implicit val GetScrubIpDetails200ResponseFilterFirewallRulesInnerEncoder: EntityEncoder[GetScrubIpDetails200ResponseFilterFirewallRulesInner] = jsonEncoderOf[GetScrubIpDetails200ResponseFilterFirewallRulesInner]
}
