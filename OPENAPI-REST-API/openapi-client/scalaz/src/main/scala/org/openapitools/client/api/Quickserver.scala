package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import Quickserver._

case class Quickserver (
  serviceInfo: QuickserverServiceInfo,
client_links: List[QuickserverClientLink],
billingDetails: QuickserverBillingDetails,
/* Currency of the customer */
  custCurrency: String,
/* Currency symbol of the customer */
  custCurrencySymbol: String,
serviceMaster: QuickserverServiceMaster,
/* Package name */
  `package`: String,
/* Operating system template */
  os_template: String,
serviceExtra: QuickserverServiceExtra,
extraInfoTables: QuickserverExtraInfoTables,
/* CPU graph data */
  cpu_graph_data: String,
/* Bandwidth x-axis data */
  bandwidth_xaxis: String,
/* Bandwidth y-axis data */
  bandwidth_yaxis: String,
/* Module information */
  module: String,
/* Authentication token */
  token: String,
/* Used disk space */
  service_disk_used: String,
/* Total disk space */
  service_disk_total: String,
/* Disk usage percentage */
  disk_percentage: BigDecimal,
/* Memory information */
  memory: String,
/* HDD information */
  hdd: String,
service_overview_extra: List[String])

object Quickserver {
  import DateTimeCodecs._

  implicit val QuickserverCodecJson: CodecJson[Quickserver] = CodecJson.derive[Quickserver]
  implicit val QuickserverDecoder: EntityDecoder[Quickserver] = jsonOf[Quickserver]
  implicit val QuickserverEncoder: EntityEncoder[Quickserver] = jsonEncoderOf[Quickserver]
}
