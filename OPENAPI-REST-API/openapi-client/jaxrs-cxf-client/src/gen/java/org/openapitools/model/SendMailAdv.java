package org.openapitools.model;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import org.openapitools.model.EmailAddressName;
import org.openapitools.model.MailAttachment;

import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * Details for an Email
 */
@ApiModel(description="Details for an Email")

public class SendMailAdv  {
  
 /**
  * The subject or title of the email
  */
  @ApiModelProperty(example = "Your Package has been Delivered!", required = true, value = "The subject or title of the email")

  private String subject;

 /**
  * The main email contents.
  */
  @ApiModelProperty(example = "The package you ordered on 2021-01-23 has been delivered. If the package is broken into many pieces, please blaim someone else.", required = true, value = "The main email contents.")

  private String body;

  @ApiModelProperty(required = true, value = "")

  private EmailAddressName from;

 /**
  * A list of destionation email addresses to send this to
  */
  @ApiModelProperty(example = "[{\"email\":\"user@domain.com\",\"name\":\"John Smith\"}]", required = true, value = "A list of destionation email addresses to send this to")

  private List<EmailAddressName> to = new ArrayList<>();

 /**
  * (optional) A list of email addresses that specify where replies to the email should be sent instead of the _from_ address.
  */
  @ApiModelProperty(example = "[{\"email\":\"user@domain.com\",\"name\":\"John Smith\"}]", value = "(optional) A list of email addresses that specify where replies to the email should be sent instead of the _from_ address.")

  private List<EmailAddressName> replyto = new ArrayList<>();

 /**
  * (optional) A list of email addresses to carbon copy this message to.  They are listed on the email and anyone getting the email can see this full list of Contacts who received the email as well.
  */
  @ApiModelProperty(example = "[{\"email\":\"user@domain.com\",\"name\":\"John Smith\"}]", value = "(optional) A list of email addresses to carbon copy this message to.  They are listed on the email and anyone getting the email can see this full list of Contacts who received the email as well.")

  private List<EmailAddressName> cc = new ArrayList<>();

 /**
  * (optional) list of email addresses that should receive copies of the email.  They are hidden on the email and anyone gettitng the email would not see the other people getting the email in this list.
  */
  @ApiModelProperty(example = "[{\"email\":\"user@domain.com\",\"name\":\"John Smith\"}]", value = "(optional) list of email addresses that should receive copies of the email.  They are hidden on the email and anyone gettitng the email would not see the other people getting the email in this list.")

  private List<EmailAddressName> bcc = new ArrayList<>();

 /**
  * (optional) File attachments to include in the email.  The file contents must be base64 encoded!
  */
  @ApiModelProperty(example = "[{\"filename\":\"text.txt\",\"data\":\"base64_encoded_contents\"}]", value = "(optional) File attachments to include in the email.  The file contents must be base64 encoded!")

  private List<MailAttachment> attachments = new ArrayList<>();

 /**
  * (optional)  ID of the Mail order within our system to use as the Mail Account.
  */
  @ApiModelProperty(example = "5000", value = "(optional)  ID of the Mail order within our system to use as the Mail Account.")

  private Long id;
 /**
   * The subject or title of the email
   * @return subject
  **/
  @JsonProperty("subject")
  public String getSubject() {
    return subject;
  }

  public void setSubject(String subject) {
    this.subject = subject;
  }

  public SendMailAdv subject(String subject) {
    this.subject = subject;
    return this;
  }

 /**
   * The main email contents.
   * @return body
  **/
  @JsonProperty("body")
  public String getBody() {
    return body;
  }

  public void setBody(String body) {
    this.body = body;
  }

  public SendMailAdv body(String body) {
    this.body = body;
    return this;
  }

 /**
   * Get from
   * @return from
  **/
  @JsonProperty("from")
  public EmailAddressName getFrom() {
    return from;
  }

  public void setFrom(EmailAddressName from) {
    this.from = from;
  }

  public SendMailAdv from(EmailAddressName from) {
    this.from = from;
    return this;
  }

 /**
   * A list of destionation email addresses to send this to
   * @return to
  **/
  @JsonProperty("to")
  public List<EmailAddressName> getTo() {
    return to;
  }

  public void setTo(List<EmailAddressName> to) {
    this.to = to;
  }

  public SendMailAdv to(List<EmailAddressName> to) {
    this.to = to;
    return this;
  }

  public SendMailAdv addToItem(EmailAddressName toItem) {
    this.to.add(toItem);
    return this;
  }

 /**
   * (optional) A list of email addresses that specify where replies to the email should be sent instead of the _from_ address.
   * @return replyto
  **/
  @JsonProperty("replyto")
  public List<EmailAddressName> getReplyto() {
    return replyto;
  }

  public void setReplyto(List<EmailAddressName> replyto) {
    this.replyto = replyto;
  }

  public SendMailAdv replyto(List<EmailAddressName> replyto) {
    this.replyto = replyto;
    return this;
  }

  public SendMailAdv addReplytoItem(EmailAddressName replytoItem) {
    this.replyto.add(replytoItem);
    return this;
  }

 /**
   * (optional) A list of email addresses to carbon copy this message to.  They are listed on the email and anyone getting the email can see this full list of Contacts who received the email as well.
   * @return cc
  **/
  @JsonProperty("cc")
  public List<EmailAddressName> getCc() {
    return cc;
  }

  public void setCc(List<EmailAddressName> cc) {
    this.cc = cc;
  }

  public SendMailAdv cc(List<EmailAddressName> cc) {
    this.cc = cc;
    return this;
  }

  public SendMailAdv addCcItem(EmailAddressName ccItem) {
    this.cc.add(ccItem);
    return this;
  }

 /**
   * (optional) list of email addresses that should receive copies of the email.  They are hidden on the email and anyone gettitng the email would not see the other people getting the email in this list.
   * @return bcc
  **/
  @JsonProperty("bcc")
  public List<EmailAddressName> getBcc() {
    return bcc;
  }

  public void setBcc(List<EmailAddressName> bcc) {
    this.bcc = bcc;
  }

  public SendMailAdv bcc(List<EmailAddressName> bcc) {
    this.bcc = bcc;
    return this;
  }

  public SendMailAdv addBccItem(EmailAddressName bccItem) {
    this.bcc.add(bccItem);
    return this;
  }

 /**
   * (optional) File attachments to include in the email.  The file contents must be base64 encoded!
   * @return attachments
  **/
  @JsonProperty("attachments")
  public List<MailAttachment> getAttachments() {
    return attachments;
  }

  public void setAttachments(List<MailAttachment> attachments) {
    this.attachments = attachments;
  }

  public SendMailAdv attachments(List<MailAttachment> attachments) {
    this.attachments = attachments;
    return this;
  }

  public SendMailAdv addAttachmentsItem(MailAttachment attachmentsItem) {
    this.attachments.add(attachmentsItem);
    return this;
  }

 /**
   * (optional)  ID of the Mail order within our system to use as the Mail Account.
   * @return id
  **/
  @JsonProperty("id")
  public Long getId() {
    return id;
  }

  public void setId(Long id) {
    this.id = id;
  }

  public SendMailAdv id(Long id) {
    this.id = id;
    return this;
  }

  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    SendMailAdv sendMailAdv = (SendMailAdv) o;
    return Objects.equals(this.subject, sendMailAdv.subject) &&
        Objects.equals(this.body, sendMailAdv.body) &&
        Objects.equals(this.from, sendMailAdv.from) &&
        Objects.equals(this.to, sendMailAdv.to) &&
        Objects.equals(this.replyto, sendMailAdv.replyto) &&
        Objects.equals(this.cc, sendMailAdv.cc) &&
        Objects.equals(this.bcc, sendMailAdv.bcc) &&
        Objects.equals(this.attachments, sendMailAdv.attachments) &&
        Objects.equals(this.id, sendMailAdv.id);
  }

  @Override
  public int hashCode() {
    return Objects.hash(subject, body, from, to, replyto, cc, bcc, attachments, id);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class SendMailAdv {\n");
    
    sb.append("    subject: ").append(toIndentedString(subject)).append("\n");
    sb.append("    body: ").append(toIndentedString(body)).append("\n");
    sb.append("    from: ").append(toIndentedString(from)).append("\n");
    sb.append("    to: ").append(toIndentedString(to)).append("\n");
    sb.append("    replyto: ").append(toIndentedString(replyto)).append("\n");
    sb.append("    cc: ").append(toIndentedString(cc)).append("\n");
    sb.append("    bcc: ").append(toIndentedString(bcc)).append("\n");
    sb.append("    attachments: ").append(toIndentedString(attachments)).append("\n");
    sb.append("    id: ").append(toIndentedString(id)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private static String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

