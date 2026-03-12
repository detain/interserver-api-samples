package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;

@Canonical
class MailLogEntry {
    /* internal db id */
    Integer id
    /* mail id */
    String id
    /* from address */
    String from
    /* to address */
    String to
    /* email subject */
    String subject
    /* creation date */
    String created
    /* creation timestamp */
    Integer time
    /* user account */
    String user
    /* transaction type */
    String transtype
    /* origin ip */
    String origin
    /* interface name */
    String _interface
    /* sending zone */
    String sendingZone
    /* email body size in bytes */
    Integer bodySize
    /* index of email in the to adderess list */
    Integer seq
    /* to address this email is being sent to */
    String recipient
    /* to address domain */
    String domain
    /* locked status */
    Integer locked
    /* lock timestamp */
    Integer lockTime
    /* assigned server */
    String assigned
    /* queued timestamp */
    String queued
    /* mx hostname */
    String mxHostname
    /* mail delivery response */
    String response
    /* message id */
    String messageId
}
