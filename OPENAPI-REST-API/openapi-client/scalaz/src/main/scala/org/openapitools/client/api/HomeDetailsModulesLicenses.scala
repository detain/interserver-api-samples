package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import HomeDetailsModulesLicenses._

case class HomeDetailsModulesLicenses (
  /* The icon for licenses. */
  icon: Option[String],
/* Link to view license. */
  view_link: Option[String],
/* Heading for licenses. */
  heading: Option[String],
/* Link to order license. */
  buy_link: Option[String],
/* Link to view licenses list. */
  list_link: Option[String])

object HomeDetailsModulesLicenses {
  import DateTimeCodecs._

  implicit val HomeDetailsModulesLicensesCodecJson: CodecJson[HomeDetailsModulesLicenses] = CodecJson.derive[HomeDetailsModulesLicenses]
  implicit val HomeDetailsModulesLicensesDecoder: EntityDecoder[HomeDetailsModulesLicenses] = jsonOf[HomeDetailsModulesLicenses]
  implicit val HomeDetailsModulesLicensesEncoder: EntityEncoder[HomeDetailsModulesLicenses] = jsonEncoderOf[HomeDetailsModulesLicenses]
}
