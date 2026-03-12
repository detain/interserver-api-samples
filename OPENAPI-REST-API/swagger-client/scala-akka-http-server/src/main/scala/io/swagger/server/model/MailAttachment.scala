package io.swagger.server.model


/**
 * = MailAttachment =
 *
 * (optional) File attachments to include in the email.  The file contents must be base64
 *
 * @param filename The filename of the attached file. for example: ''message.txt''
 * @param data The file contents base64 encoded for example: ''aGVsbG8gdGhlcmUK''
 */
case class MailAttachment (
  filename: String,
  data: String
)

