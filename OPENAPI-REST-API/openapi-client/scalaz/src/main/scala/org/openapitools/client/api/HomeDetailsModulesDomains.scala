package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import HomeDetailsModulesDomains._

case class HomeDetailsModulesDomains (
  /* The icon for domains. */
  icon: Option[String],
/* Link to view domain. */
  view_link: Option[String],
/* Heading for domains. */
  heading: Option[String],
/* Link to order domain. */
  buy_link: Option[String],
/* Link to view domains list. */
  list_link: Option[String])

object HomeDetailsModulesDomains {
  import DateTimeCodecs._

  implicit val HomeDetailsModulesDomainsCodecJson: CodecJson[HomeDetailsModulesDomains] = CodecJson.derive[HomeDetailsModulesDomains]
  implicit val HomeDetailsModulesDomainsDecoder: EntityDecoder[HomeDetailsModulesDomains] = jsonOf[HomeDetailsModulesDomains]
  implicit val HomeDetailsModulesDomainsEncoder: EntityEncoder[HomeDetailsModulesDomains] = jsonEncoderOf[HomeDetailsModulesDomains]
}
