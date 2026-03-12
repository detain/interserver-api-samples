package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import Domain._

case class Domain (
  serviceInfo: Option[DomainServiceInfo],
serviceTypes: Option[Map[String, DomainServiceType]],
client_links: Option[List[DomainClientLink]],
billingDetails: Option[DomainBillingDetails],
custCurrency: Option[String],
custCurrencySymbol: Option[String],
serviceExtra: Option[DomainBillingExtra],
extraInfoTables: Option[BackupExtraInfoTables],
serviceType: Option[DomainServiceType],
contact_details: Option[DomainContactDetails],
pwarning: Option[String],
transfer_info: Option[String],
errors: Option[Boolean],
domain_logs: Option[List[String]],
allInfo: Option[DomainAllInfo],
registrarStatus: Option[String],
locked: Option[String],
whoisPrivacy: Option[String],
autoRenew: Option[String])

object Domain {
  import DateTimeCodecs._

  implicit val DomainCodecJson: CodecJson[Domain] = CodecJson.derive[Domain]
  implicit val DomainDecoder: EntityDecoder[Domain] = jsonOf[Domain]
  implicit val DomainEncoder: EntityEncoder[Domain] = jsonEncoderOf[Domain]
}
