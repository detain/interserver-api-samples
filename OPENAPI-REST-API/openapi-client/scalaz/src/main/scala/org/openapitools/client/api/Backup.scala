package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import Backup._

case class Backup (
  serviceInfo: Option[BackupServiceInfo],
client_links: Option[List[BackupClientLink]],
billingDetails: Option[BackupBillingDetails],
/* Customer's currency. */
  custCurrency: Option[String],
/* Customer's currency symbol. */
  custCurrencySymbol: Option[String],
serviceMaster: Option[BackupServiceMaster],
/* Package information. */
  `package`: Option[String],
serviceExtra: Option[String],
extraInfoTables: Option[BackupExtraInfoTables])

object Backup {
  import DateTimeCodecs._

  implicit val BackupCodecJson: CodecJson[Backup] = CodecJson.derive[Backup]
  implicit val BackupDecoder: EntityDecoder[Backup] = jsonOf[Backup]
  implicit val BackupEncoder: EntityEncoder[Backup] = jsonEncoderOf[Backup]
}
