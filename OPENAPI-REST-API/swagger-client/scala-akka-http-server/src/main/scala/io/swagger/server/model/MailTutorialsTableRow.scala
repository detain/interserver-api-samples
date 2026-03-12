package io.swagger.server.model


/**
 * A single tutorial entry with a label and URL.
 *
 * @param desc The description of the tutorials table row. for example: ''cPanel Tutorial''
 * @param value The value of the tutorials table row. for example: ''<a class="link" href="https://mail.baby/cpanel/" target="_blank">Click Here</a>''
 */
case class MailTutorialsTableRow (
  desc: Option[String],
  value: Option[String]
)

