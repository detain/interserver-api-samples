package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import DeleteGeoFirewallRule._

case class DeleteGeoFirewallRule (
  rule_id: Integer)

object DeleteGeoFirewallRule {
  import DateTimeCodecs._

  implicit val DeleteGeoFirewallRuleCodecJson: CodecJson[DeleteGeoFirewallRule] = CodecJson.derive[DeleteGeoFirewallRule]
  implicit val DeleteGeoFirewallRuleDecoder: EntityDecoder[DeleteGeoFirewallRule] = jsonOf[DeleteGeoFirewallRule]
  implicit val DeleteGeoFirewallRuleEncoder: EntityEncoder[DeleteGeoFirewallRule] = jsonEncoderOf[DeleteGeoFirewallRule]
}
