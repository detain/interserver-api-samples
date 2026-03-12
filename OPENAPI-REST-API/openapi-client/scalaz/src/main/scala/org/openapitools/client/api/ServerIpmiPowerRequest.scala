package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import ServerIpmiPowerRequest._

case class ServerIpmiPowerRequest (
  /* The power action to send to the ipmi controller. */
  action: Action,
/* The Asset ID */
  asset: Option[Integer])

object ServerIpmiPowerRequest {
  import DateTimeCodecs._
  sealed trait Action
  case object Cycle extends Action
  case object Reset extends Action
  case object On extends Action
  case object Off extends Action
  case object Soft extends Action

  object Action {
    def toAction(s: String): Option[Action] = s match {
      case "Cycle" => Some(Cycle)
      case "Reset" => Some(Reset)
      case "On" => Some(On)
      case "Off" => Some(Off)
      case "Soft" => Some(Soft)
      case _ => None
    }

    def fromAction(x: Action): String = x match {
      case Cycle => "Cycle"
      case Reset => "Reset"
      case On => "On"
      case Off => "Off"
      case Soft => "Soft"
    }
  }

  implicit val ActionEnumEncoder: EncodeJson[Action] =
    EncodeJson[Action](is => StringEncodeJson(Action.fromAction(is)))

  implicit val ActionEnumDecoder: DecodeJson[Action] =
    DecodeJson.optionDecoder[Action](n => n.string.flatMap(jStr => Action.toAction(jStr)), "Action failed to de-serialize")

  implicit val ServerIpmiPowerRequestCodecJson: CodecJson[ServerIpmiPowerRequest] = CodecJson.derive[ServerIpmiPowerRequest]
  implicit val ServerIpmiPowerRequestDecoder: EntityDecoder[ServerIpmiPowerRequest] = jsonOf[ServerIpmiPowerRequest]
  implicit val ServerIpmiPowerRequestEncoder: EntityEncoder[ServerIpmiPowerRequest] = jsonEncoderOf[ServerIpmiPowerRequest]
}
