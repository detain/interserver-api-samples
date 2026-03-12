package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import DeleteFirewallRule._

case class DeleteFirewallRule (
  rule_id: Integer)

object DeleteFirewallRule {
  import DateTimeCodecs._

  implicit val DeleteFirewallRuleCodecJson: CodecJson[DeleteFirewallRule] = CodecJson.derive[DeleteFirewallRule]
  implicit val DeleteFirewallRuleDecoder: EntityDecoder[DeleteFirewallRule] = jsonOf[DeleteFirewallRule]
  implicit val DeleteFirewallRuleEncoder: EntityEncoder[DeleteFirewallRule] = jsonEncoderOf[DeleteFirewallRule]
}
