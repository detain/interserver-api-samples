package io.swagger.server.model


/**
 * = EmailAddressName =
 *
 * An email contact.
 *
 * @param email The email address. for example: ''user@domain.com''
 * @param name Name to use for the sending contact. for example: ''John Smith''
 */
case class EmailAddressName (
  email: String,
  name: Option[String]
)

