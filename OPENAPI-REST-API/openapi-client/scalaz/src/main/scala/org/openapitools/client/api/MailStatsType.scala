package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import MailStatsType._

case class MailStatsType (
  time: Option[Time],
usage: Option[Integer],
currency: Option[String],
currencySymbol: Option[String],
cost: Option[Double],
received: Option[Integer],
sent: Option[Integer],
volume: Option[MailStatsTypeVolume])

object MailStatsType {
  import DateTimeCodecs._
  sealed trait Time
  case object All extends Time
  case object Billing extends Time
  case object Month extends Time
  case object `7d` extends Time
  case object `24h` extends Time
  case object Today extends Time
  case object `1h` extends Time

  object Time {
    def toTime(s: String): Option[Time] = s match {
      case "All" => Some(All)
      case "Billing" => Some(Billing)
      case "Month" => Some(Month)
      case "`7d`" => Some(`7d`)
      case "`24h`" => Some(`24h`)
      case "Today" => Some(Today)
      case "`1h`" => Some(`1h`)
      case _ => None
    }

    def fromTime(x: Time): String = x match {
      case All => "All"
      case Billing => "Billing"
      case Month => "Month"
      case `7d` => "`7d`"
      case `24h` => "`24h`"
      case Today => "Today"
      case `1h` => "`1h`"
    }
  }

  implicit val TimeEnumEncoder: EncodeJson[Time] =
    EncodeJson[Time](is => StringEncodeJson(Time.fromTime(is)))

  implicit val TimeEnumDecoder: DecodeJson[Time] =
    DecodeJson.optionDecoder[Time](n => n.string.flatMap(jStr => Time.toTime(jStr)), "Time failed to de-serialize")

  implicit val MailStatsTypeCodecJson: CodecJson[MailStatsType] = CodecJson.derive[MailStatsType]
  implicit val MailStatsTypeDecoder: EntityDecoder[MailStatsType] = jsonOf[MailStatsType]
  implicit val MailStatsTypeEncoder: EntityEncoder[MailStatsType] = jsonEncoderOf[MailStatsType]
}
