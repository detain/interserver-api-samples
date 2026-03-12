package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import WebsitesOrderPackagesInfo._

case class WebsitesOrderPackagesInfo (
  /* The ID of the package. */
  services_id: String,
/* The name of the package. */
  services_name: String,
/* The cost of the package. */
  services_cost: String,
/* The category of the package. */
  services_category: String,
/* Indicates if the package is buyable (1 for yes, 0 for no). */
  services_buyable: String,
/* The type of the package. */
  services_type: String,
/* The module of the package. */
  services_module: String,
/* Description of the package. */
  services_description: String,
/* Additional field 1 for the package. */
  services_field1: Option[String],
/* Additional field 2 for the package. */
  services_field2: Option[String],
/* HTML content for the package. */
  services_html: Option[String],
/* URL for more information about the package. */
  services_moreinfo_url: Option[String],
/* Indicates if the package is hidden (1 for yes, 0 for no). */
  services_hidden: Option[String])

object WebsitesOrderPackagesInfo {
  import DateTimeCodecs._

  implicit val WebsitesOrderPackagesInfoCodecJson: CodecJson[WebsitesOrderPackagesInfo] = CodecJson.derive[WebsitesOrderPackagesInfo]
  implicit val WebsitesOrderPackagesInfoDecoder: EntityDecoder[WebsitesOrderPackagesInfo] = jsonOf[WebsitesOrderPackagesInfo]
  implicit val WebsitesOrderPackagesInfoEncoder: EntityEncoder[WebsitesOrderPackagesInfo] = jsonEncoderOf[WebsitesOrderPackagesInfo]
}
