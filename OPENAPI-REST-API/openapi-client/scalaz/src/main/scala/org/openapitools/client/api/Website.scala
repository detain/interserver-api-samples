package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import Website._

case class Website (
  serviceInfo: Option[WebsiteServiceInfo],
client_links: Option[List[WebsiteClientLink]],
billingDetails: Option[WebsiteBillingDetails],
/* Customer's currency */
  custCurrency: Option[String],
/* Customer currency symbol */
  custCurrencySymbol: Option[String],
serviceMaster: Option[WebsiteServiceMaster],
/* Package information */
  `package`: Option[String],
serviceExtra: Option[List[Any]],
extraInfoTables: Option[WebsiteExtraInfoTables])

object Website {
  import DateTimeCodecs._

  implicit val WebsiteCodecJson: CodecJson[Website] = CodecJson.derive[Website]
  implicit val WebsiteDecoder: EntityDecoder[Website] = jsonOf[Website]
  implicit val WebsiteEncoder: EntityEncoder[Website] = jsonEncoderOf[Website]
}
