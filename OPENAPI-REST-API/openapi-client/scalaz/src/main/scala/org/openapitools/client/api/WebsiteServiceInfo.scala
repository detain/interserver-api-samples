package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import WebsiteServiceInfo._

case class WebsiteServiceInfo (
  /* Website ID */
  website_id: Option[String],
/* Website server */
  website_server: Option[String],
/* Website type */
  website_type: Option[String],
/* Currency of the website */
  website_currency: Option[String],
/* Order date of the website */
  website_order_date: Option[String],
/* Customer ID of the website */
  website_custid: Option[String],
/* IP address of the website */
  website_ip: Option[String],
/* Status of the website */
  website_status: Option[String],
/* Invoice of the website */
  website_invoice: Option[String],
/* Coupon for the website */
  website_coupon: Option[String],
/* Extra information in JSON format for the website */
  website_extra: Option[String],
/* Hostname of the website */
  website_hostname: Option[String],
/* Comment for the website */
  website_comment: Option[String],
/* Username for the website */
  website_username: Option[String],
/* Server status of the website */
  website_server_status: Option[String])

object WebsiteServiceInfo {
  import DateTimeCodecs._

  implicit val WebsiteServiceInfoCodecJson: CodecJson[WebsiteServiceInfo] = CodecJson.derive[WebsiteServiceInfo]
  implicit val WebsiteServiceInfoDecoder: EntityDecoder[WebsiteServiceInfo] = jsonOf[WebsiteServiceInfo]
  implicit val WebsiteServiceInfoEncoder: EntityEncoder[WebsiteServiceInfo] = jsonEncoderOf[WebsiteServiceInfo]
}
