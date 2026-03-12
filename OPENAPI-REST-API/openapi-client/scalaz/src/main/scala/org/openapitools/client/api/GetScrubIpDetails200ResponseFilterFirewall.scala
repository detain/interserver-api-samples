package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import GetScrubIpDetails200ResponseFilterFirewall._

case class GetScrubIpDetails200ResponseFilterFirewall (
  rules: Option[List[GetScrubIpDetails200ResponseFilterFirewallRulesInner]],
filters: Option[List[GetScrubIpDetails200ResponseFilterFirewallFiltersInner]],
scrub_enabled: Option[Integer])

object GetScrubIpDetails200ResponseFilterFirewall {
  import DateTimeCodecs._

  implicit val GetScrubIpDetails200ResponseFilterFirewallCodecJson: CodecJson[GetScrubIpDetails200ResponseFilterFirewall] = CodecJson.derive[GetScrubIpDetails200ResponseFilterFirewall]
  implicit val GetScrubIpDetails200ResponseFilterFirewallDecoder: EntityDecoder[GetScrubIpDetails200ResponseFilterFirewall] = jsonOf[GetScrubIpDetails200ResponseFilterFirewall]
  implicit val GetScrubIpDetails200ResponseFilterFirewallEncoder: EntityEncoder[GetScrubIpDetails200ResponseFilterFirewall] = jsonEncoderOf[GetScrubIpDetails200ResponseFilterFirewall]
}
