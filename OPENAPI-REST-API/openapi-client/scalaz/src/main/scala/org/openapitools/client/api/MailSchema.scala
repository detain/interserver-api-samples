package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import MailSchema._

case class MailSchema (
  serviceInfo: MailServiceInfo,
/* Links related to the mail service for clients. */
  client_links: List[MailClientLink],
billingDetails: MailBillingDetails,
/* The customer's currency. */
  custCurrency: String,
/* The currency symbol for the customer. */
  custCurrencySymbol: String,
/* The package of the mail service. */
  `package`: String,
extraInfoTables: MailSchemaExtraInfoTables,
serviceType: MailServiceType,
/* The usage count of the mail service. */
  usage_count: String,
/* Extra information for the mail service. */
  serviceExtra: Option[List[String]])

object MailSchema {
  import DateTimeCodecs._

  implicit val MailSchemaCodecJson: CodecJson[MailSchema] = CodecJson.derive[MailSchema]
  implicit val MailSchemaDecoder: EntityDecoder[MailSchema] = jsonOf[MailSchema]
  implicit val MailSchemaEncoder: EntityEncoder[MailSchema] = jsonEncoderOf[MailSchema]
}
