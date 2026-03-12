package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import AccountInfoPost._

case class AccountInfoPost (
  /* Your name. */
  name: String,
/* Your address. */
  address: String,
/* Your city. */
  city: String,
/* Your state. */
  state: String,
/* Your ZIP code. */
  zip: String,
/* Your country. */
  country: String,
/* Your phone number. */
  phone: String,
/* Your company name. */
  company: Option[String],
/* Additional address information. */
  address2: Option[String],
/* Your preferred locale. */
  locale: Option[String],
/* Your email for invoice notifications. */
  email_invoices: Option[String],
/* Your email for abuse notifications. */
  email_abuse: Option[String],
/* Set to `true` to disable account resets, or `false` to enable them. */
  disable_reset: Option[Boolean],
/* Set to `true` to disable server reinstalls, or `false` to enable them. */
  disable_reinstall: Option[Boolean],
/* Set to `true` to disable server notifications, or `false` to enable them. */
  disable_server_notifications: Option[Boolean],
/* Set to `true` to disable email notifications, or `false` to enable them. */
  disable_email_notifications: Option[Boolean],
/* Your GST identification number (if applicable). */
  gstin: Option[String])

object AccountInfoPost {
  import DateTimeCodecs._

  implicit val AccountInfoPostCodecJson: CodecJson[AccountInfoPost] = CodecJson.derive[AccountInfoPost]
  implicit val AccountInfoPostDecoder: EntityDecoder[AccountInfoPost] = jsonOf[AccountInfoPost]
  implicit val AccountInfoPostEncoder: EntityEncoder[AccountInfoPost] = jsonEncoderOf[AccountInfoPost]
}
