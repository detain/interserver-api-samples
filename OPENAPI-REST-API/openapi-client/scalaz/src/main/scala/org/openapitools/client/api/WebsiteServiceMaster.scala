package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import WebsiteServiceMaster._

case class WebsiteServiceMaster (
  /* Website ID for the service master */
  website_id: Option[String],
/* Website name for the service master */
  website_name: Option[String],
/* IP address for the service master */
  website_ip: Option[String],
/* Website type for the service master */
  website_type: Option[String],
/* Availability status for the service master */
  website_available: Option[String],
/* Hard drive size for the service master */
  website_hdsize: Option[String],
/* Free hard drive space for the service master */
  website_hdfree: Option[String],
/* Load for the service master */
  website_load: Option[String],
/* Last update date for the service master */
  website_last_update: Option[String],
/* Maximum number of sites for the service master */
  website_max_sites: Option[String],
/* Order number for the service master */
  website_order: Option[String],
/* Partitions for the service master */
  website_partitions: Option[String],
/* DNS server 1 for the service master */
  website_dns1: Option[String],
/* DNS server 2 for the service master */
  website_dns2: Option[String])

object WebsiteServiceMaster {
  import DateTimeCodecs._

  implicit val WebsiteServiceMasterCodecJson: CodecJson[WebsiteServiceMaster] = CodecJson.derive[WebsiteServiceMaster]
  implicit val WebsiteServiceMasterDecoder: EntityDecoder[WebsiteServiceMaster] = jsonOf[WebsiteServiceMaster]
  implicit val WebsiteServiceMasterEncoder: EntityEncoder[WebsiteServiceMaster] = jsonEncoderOf[WebsiteServiceMaster]
}
