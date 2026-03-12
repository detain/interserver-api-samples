package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import MailServiceInfo._

case class MailServiceInfo (
  /* The ID of the mail service. */
  mail_id: String,
/* The type of mail service. */
  mail_type: String,
/* The currency of the mail service. */
  mail_currency: String,
/* The order date of the mail service. */
  mail_order_date: String,
/* The customer ID associated with the mail service. */
  mail_custid: String,
/* The mail quota for the service. */
  mail_quota: String,
/* The status of the mail service. */
  mail_status: String,
/* The invoice ID of the mail service. */
  mail_invoice: String,
/* The username associated with the mail service. */
  mail_username: Option[String],
/* The IP address associated with the mail service. */
  mail_ip: Option[String],
/* The coupon associated with the mail service. */
  mail_coupon: Option[String],
/* Additional information for the mail service. */
  mail_extra: Option[String],
/* The server status of the mail service. */
  mail_server_status: Option[String],
/* Additional comments for the mail service. */
  mail_comment: Option[String])

object MailServiceInfo {
  import DateTimeCodecs._

  implicit val MailServiceInfoCodecJson: CodecJson[MailServiceInfo] = CodecJson.derive[MailServiceInfo]
  implicit val MailServiceInfoDecoder: EntityDecoder[MailServiceInfo] = jsonOf[MailServiceInfo]
  implicit val MailServiceInfoEncoder: EntityEncoder[MailServiceInfo] = jsonEncoderOf[MailServiceInfo]
}
