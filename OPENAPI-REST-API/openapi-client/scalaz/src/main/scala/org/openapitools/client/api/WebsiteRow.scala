package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import WebsiteRow._

case class WebsiteRow (
  /* The id of the website. */
  website_id: String,
/* The hostname of the website. */
  website_hostname: String,
/* The repeat invoices cost of the website. */
  repeat_invoices_cost: String,
/* The status of the website. */
  website_status: String,
/* The services name of the website. */
  services_name: String,
/* The comment of the website. */
  website_comment: String)

object WebsiteRow {
  import DateTimeCodecs._

  implicit val WebsiteRowCodecJson: CodecJson[WebsiteRow] = CodecJson.derive[WebsiteRow]
  implicit val WebsiteRowDecoder: EntityDecoder[WebsiteRow] = jsonOf[WebsiteRow]
  implicit val WebsiteRowEncoder: EntityEncoder[WebsiteRow] = jsonEncoderOf[WebsiteRow]
}
