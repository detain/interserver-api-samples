package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import Vps._

case class Vps (
  serviceInfo: VpsServiceInfo,
client_links: List[VpsClientLink],
billingDetails: VpsBillingDetails,
custCurrency: String,
custCurrencySymbol: String,
serviceMaster: VpsServiceMaster,
`package`: String,
serviceExtra: VpsServiceExtra,
extraInfoTables: VpsExtraInfoTables,
module: String,
token: String,
da_link: Integer,
sr_link: Integer,
cp_data: VpsCPData,
da_data: VpsDAData,
plesk12_data: VpsPlesk12Data,
serviceAddons: VpsServiceAddons,
os_template: Option[String],
cpu_graph_data: Option[AnyType])

object Vps {
  import DateTimeCodecs._

  implicit val VpsCodecJson: CodecJson[Vps] = CodecJson.derive[Vps]
  implicit val VpsDecoder: EntityDecoder[Vps] = jsonOf[Vps]
  implicit val VpsEncoder: EntityEncoder[Vps] = jsonEncoderOf[Vps]
}
