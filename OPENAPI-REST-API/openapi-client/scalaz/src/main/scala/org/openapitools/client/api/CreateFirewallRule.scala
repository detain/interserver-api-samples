package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import CreateFirewallRule._

case class CreateFirewallRule (
  /* 1 = TCP, 2 = UDP */
  protocol_id: ProtocolId,
/* 1 = Block,  0 = Whitelist */
  xdp_action: XdpAction,
destination_port: Option[Integer],
/* Source IP address to match. Use '0.0.0.0' to match any source. */
  source_ip: Option[String],
source_port: Option[Integer])

object CreateFirewallRule {
  import DateTimeCodecs._
  sealed trait ProtocolId
  case object `1` extends ProtocolId
  case object `2` extends ProtocolId

  object ProtocolId {
    def toProtocolId(s: String): Option[ProtocolId] = s match {
      case "`1`" => Some(`1`)
      case "`2`" => Some(`2`)
      case _ => None
    }

    def fromProtocolId(x: ProtocolId): String = x match {
      case `1` => "`1`"
      case `2` => "`2`"
    }
  }

  implicit val ProtocolIdEnumEncoder: EncodeJson[ProtocolId] =
    EncodeJson[ProtocolId](is => StringEncodeJson(ProtocolId.fromProtocolId(is)))

  implicit val ProtocolIdEnumDecoder: DecodeJson[ProtocolId] =
    DecodeJson.optionDecoder[ProtocolId](n => n.string.flatMap(jStr => ProtocolId.toProtocolId(jStr)), "ProtocolId failed to de-serialize")
  sealed trait XdpAction
  case object `0` extends XdpAction
  case object `1` extends XdpAction

  object XdpAction {
    def toXdpAction(s: String): Option[XdpAction] = s match {
      case "`0`" => Some(`0`)
      case "`1`" => Some(`1`)
      case _ => None
    }

    def fromXdpAction(x: XdpAction): String = x match {
      case `0` => "`0`"
      case `1` => "`1`"
    }
  }

  implicit val XdpActionEnumEncoder: EncodeJson[XdpAction] =
    EncodeJson[XdpAction](is => StringEncodeJson(XdpAction.fromXdpAction(is)))

  implicit val XdpActionEnumDecoder: DecodeJson[XdpAction] =
    DecodeJson.optionDecoder[XdpAction](n => n.string.flatMap(jStr => XdpAction.toXdpAction(jStr)), "XdpAction failed to de-serialize")

  implicit val CreateFirewallRuleCodecJson: CodecJson[CreateFirewallRule] = CodecJson.derive[CreateFirewallRule]
  implicit val CreateFirewallRuleDecoder: EntityDecoder[CreateFirewallRule] = jsonOf[CreateFirewallRule]
  implicit val CreateFirewallRuleEncoder: EntityEncoder[CreateFirewallRule] = jsonEncoderOf[CreateFirewallRule]
}
