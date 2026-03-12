package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import CreateGeoFirewallRule._

case class CreateGeoFirewallRule (
  /* 1 = Block,  0 = Whitelist */
  xdp_action: XdpAction,
destination_port: Option[Integer],
/* To get country code refer our countries api - https://my.interserver.net/apiv2/account/countries?fetch_by=numcode */
  country_code: Option[Integer],
/* ASN number */
  asn: Option[Integer])

object CreateGeoFirewallRule {
  import DateTimeCodecs._
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

  implicit val CreateGeoFirewallRuleCodecJson: CodecJson[CreateGeoFirewallRule] = CodecJson.derive[CreateGeoFirewallRule]
  implicit val CreateGeoFirewallRuleDecoder: EntityDecoder[CreateGeoFirewallRule] = jsonOf[CreateGeoFirewallRule]
  implicit val CreateGeoFirewallRuleEncoder: EntityEncoder[CreateGeoFirewallRule] = jsonEncoderOf[CreateGeoFirewallRule]
}
