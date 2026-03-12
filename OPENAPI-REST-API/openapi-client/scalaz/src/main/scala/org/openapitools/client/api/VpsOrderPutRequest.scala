package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import VpsOrderPutRequest._

case class VpsOrderPutRequest (
  /* OS Distribution */
  osDistro: String,
/* Number of slices */
  slices: Integer,
/* VPS Platform */
  vpsPlatform: VpsPlatform,
/* Billing Period or Frequency */
  period: Integer,
/* Location */
  location: Integer,
/* OS Version */
  osVersion: String,
/* The hostname to assign to the VPS */
  hostname: String,
/* Root password to assign to the VVPS */
  rootpass: String,
/* Control Panel */
  controlpanel: Option[Controlpanel],
/* Coupon */
  coupon: Option[String],
/* Order comments or notes */
  comment: Option[String])

object VpsOrderPutRequest {
  import DateTimeCodecs._
  sealed trait VpsPlatform
  case object Kvm extends VpsPlatform
  case object Hyperv extends VpsPlatform
  case object Kvmstorage extends VpsPlatform

  object VpsPlatform {
    def toVpsPlatform(s: String): Option[VpsPlatform] = s match {
      case "Kvm" => Some(Kvm)
      case "Hyperv" => Some(Hyperv)
      case "Kvmstorage" => Some(Kvmstorage)
      case _ => None
    }

    def fromVpsPlatform(x: VpsPlatform): String = x match {
      case Kvm => "Kvm"
      case Hyperv => "Hyperv"
      case Kvmstorage => "Kvmstorage"
    }
  }

  implicit val VpsPlatformEnumEncoder: EncodeJson[VpsPlatform] =
    EncodeJson[VpsPlatform](is => StringEncodeJson(VpsPlatform.fromVpsPlatform(is)))

  implicit val VpsPlatformEnumDecoder: DecodeJson[VpsPlatform] =
    DecodeJson.optionDecoder[VpsPlatform](n => n.string.flatMap(jStr => VpsPlatform.toVpsPlatform(jStr)), "VpsPlatform failed to de-serialize")
  sealed trait Controlpanel
  case object None extends Controlpanel
  case object Cpanel extends Controlpanel
  case object Da extends Controlpanel

  object Controlpanel {
    def toControlpanel(s: String): Option[Controlpanel] = s match {
      case "None" => Some(None)
      case "Cpanel" => Some(Cpanel)
      case "Da" => Some(Da)
      case _ => None
    }

    def fromControlpanel(x: Controlpanel): String = x match {
      case None => "None"
      case Cpanel => "Cpanel"
      case Da => "Da"
    }
  }

  implicit val ControlpanelEnumEncoder: EncodeJson[Controlpanel] =
    EncodeJson[Controlpanel](is => StringEncodeJson(Controlpanel.fromControlpanel(is)))

  implicit val ControlpanelEnumDecoder: DecodeJson[Controlpanel] =
    DecodeJson.optionDecoder[Controlpanel](n => n.string.flatMap(jStr => Controlpanel.toControlpanel(jStr)), "Controlpanel failed to de-serialize")

  implicit val VpsOrderPutRequestCodecJson: CodecJson[VpsOrderPutRequest] = CodecJson.derive[VpsOrderPutRequest]
  implicit val VpsOrderPutRequestDecoder: EntityDecoder[VpsOrderPutRequest] = jsonOf[VpsOrderPutRequest]
  implicit val VpsOrderPutRequestEncoder: EntityEncoder[VpsOrderPutRequest] = jsonEncoderOf[VpsOrderPutRequest]
}
