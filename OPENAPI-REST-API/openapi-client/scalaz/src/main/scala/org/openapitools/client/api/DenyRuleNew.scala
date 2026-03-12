package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import DenyRuleNew._

case class DenyRuleNew (
  /* The type of deny rule. */
  `type`: `Type`,
/* The content of the rule.  If a domain type rule then an example would be google.com. For a begins with type an example would be msgid-.  For the email typer an example would be user@server.com. */
  data: String,
/* Mail account username that will be tied to this rule.  If not specified the first active mail order will be used. */
  user: Option[String])

object DenyRuleNew {
  import DateTimeCodecs._
  sealed trait `Type`
  case object Domain extends `Type`
  case object Email extends `Type`
  case object Startswith extends `Type`
  case object Destination extends `Type`

  object `Type` {
    def to`Type`(s: String): Option[`Type`] = s match {
      case "Domain" => Some(Domain)
      case "Email" => Some(Email)
      case "Startswith" => Some(Startswith)
      case "Destination" => Some(Destination)
      case _ => None
    }

    def from`Type`(x: `Type`): String = x match {
      case Domain => "Domain"
      case Email => "Email"
      case Startswith => "Startswith"
      case Destination => "Destination"
    }
  }

  implicit val `Type`EnumEncoder: EncodeJson[`Type`] =
    EncodeJson[`Type`](is => StringEncodeJson(`Type`.from`Type`(is)))

  implicit val `Type`EnumDecoder: DecodeJson[`Type`] =
    DecodeJson.optionDecoder[`Type`](n => n.string.flatMap(jStr => `Type`.to`Type`(jStr)), "`Type` failed to de-serialize")

  implicit val DenyRuleNewCodecJson: CodecJson[DenyRuleNew] = CodecJson.derive[DenyRuleNew]
  implicit val DenyRuleNewDecoder: EntityDecoder[DenyRuleNew] = jsonOf[DenyRuleNew]
  implicit val DenyRuleNewEncoder: EntityEncoder[DenyRuleNew] = jsonEncoderOf[DenyRuleNew]
}
