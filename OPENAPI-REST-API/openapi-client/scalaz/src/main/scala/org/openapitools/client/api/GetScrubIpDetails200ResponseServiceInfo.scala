package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import GetScrubIpDetails200ResponseServiceInfo._

case class GetScrubIpDetails200ResponseServiceInfo (
  scrub_ip_id: Option[String],
scrub_ip_type: Option[String],
scrub_ip_custid: Option[String],
scrub_ip_order_date: Option[String],
scrub_ip_ip: Option[String],
scrub_ip_service_id: Option[String],
scrub_ip_service_module: Option[String],
scrub_ip_status: Option[ScrubIpStatus],
scrub_ip_invoice: Option[String],
scrub_ip_currency: Option[String],
scrub_ip_coupon: Option[String],
scrub_ip_comment: Option[String])

object GetScrubIpDetails200ResponseServiceInfo {
  import DateTimeCodecs._
  sealed trait ScrubIpStatus
  case object Active extends ScrubIpStatus
  case object Pending extends ScrubIpStatus
  case object Canceled extends ScrubIpStatus
  case object Expired extends ScrubIpStatus

  object ScrubIpStatus {
    def toScrubIpStatus(s: String): Option[ScrubIpStatus] = s match {
      case "Active" => Some(Active)
      case "Pending" => Some(Pending)
      case "Canceled" => Some(Canceled)
      case "Expired" => Some(Expired)
      case _ => None
    }

    def fromScrubIpStatus(x: ScrubIpStatus): String = x match {
      case Active => "Active"
      case Pending => "Pending"
      case Canceled => "Canceled"
      case Expired => "Expired"
    }
  }

  implicit val ScrubIpStatusEnumEncoder: EncodeJson[ScrubIpStatus] =
    EncodeJson[ScrubIpStatus](is => StringEncodeJson(ScrubIpStatus.fromScrubIpStatus(is)))

  implicit val ScrubIpStatusEnumDecoder: DecodeJson[ScrubIpStatus] =
    DecodeJson.optionDecoder[ScrubIpStatus](n => n.string.flatMap(jStr => ScrubIpStatus.toScrubIpStatus(jStr)), "ScrubIpStatus failed to de-serialize")

  implicit val GetScrubIpDetails200ResponseServiceInfoCodecJson: CodecJson[GetScrubIpDetails200ResponseServiceInfo] = CodecJson.derive[GetScrubIpDetails200ResponseServiceInfo]
  implicit val GetScrubIpDetails200ResponseServiceInfoDecoder: EntityDecoder[GetScrubIpDetails200ResponseServiceInfo] = jsonOf[GetScrubIpDetails200ResponseServiceInfo]
  implicit val GetScrubIpDetails200ResponseServiceInfoEncoder: EntityEncoder[GetScrubIpDetails200ResponseServiceInfo] = jsonEncoderOf[GetScrubIpDetails200ResponseServiceInfo]
}
