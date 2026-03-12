package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import DomainServiceInfo._

case class DomainServiceInfo (
  domain_id: Option[String],
domain_hostname: Option[String],
domain_username: Option[String],
domain_password: Option[String],
domain_type: Option[String],
domain_currency: Option[String],
domain_expire_date: Option[String],
domain_order_date: Option[String],
domain_custid: Option[String],
domain_status: Option[String],
domain_invoice: Option[String],
domain_coupon: Option[String])

object DomainServiceInfo {
  import DateTimeCodecs._

  implicit val DomainServiceInfoCodecJson: CodecJson[DomainServiceInfo] = CodecJson.derive[DomainServiceInfo]
  implicit val DomainServiceInfoDecoder: EntityDecoder[DomainServiceInfo] = jsonOf[DomainServiceInfo]
  implicit val DomainServiceInfoEncoder: EntityEncoder[DomainServiceInfo] = jsonEncoderOf[DomainServiceInfo]
}
