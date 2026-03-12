package io.swagger.model;

import io.swagger.model.EmailAddressName;
import io.swagger.model.MailAttachment;
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.ArrayList;
import java.util.List;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * Details for an Email
 **/
import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
@Schema(description = "Details for an Email")

public class SendMailAdv   {

  private @Valid String subject = null;

  private @Valid String body = null;

  private @Valid EmailAddressName from = null;

  private @Valid List<EmailAddressName> to = new ArrayList<EmailAddressName>();

  private @Valid List<EmailAddressName> replyto = new ArrayList<EmailAddressName>();

  private @Valid List<EmailAddressName> cc = new ArrayList<EmailAddressName>();

  private @Valid List<EmailAddressName> bcc = new ArrayList<EmailAddressName>();

  private @Valid List<MailAttachment> attachments = new ArrayList<MailAttachment>();

  private @Valid Long id = null;

  /**
   * The subject or title of the email
   **/
  public SendMailAdv subject(String subject) {
    this.subject = subject;
    return this;
  }

  
  @ApiModelProperty(example = "Your Package has been Delivered!", required = true, value = "The subject or title of the email")
  @JsonProperty("subject")
  @NotNull

  public String getSubject() {
    return subject;
  }
  public void setSubject(String subject) {
    this.subject = subject;
  }

  /**
   * The main email contents.
   **/
  public SendMailAdv body(String body) {
    this.body = body;
    return this;
  }

  
  @ApiModelProperty(example = "The package you ordered on 2021-01-23 has been delivered. If the package is broken into many pieces, please blaim someone else.", required = true, value = "The main email contents.")
  @JsonProperty("body")
  @NotNull

  public String getBody() {
    return body;
  }
  public void setBody(String body) {
    this.body = body;
  }

  /**
   **/
  public SendMailAdv from(EmailAddressName from) {
    this.from = from;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("from")
  @NotNull

  public EmailAddressName getFrom() {
    return from;
  }
  public void setFrom(EmailAddressName from) {
    this.from = from;
  }

  /**
   * A list of destionation email addresses to send this to
   **/
  public SendMailAdv to(List<EmailAddressName> to) {
    this.to = to;
    return this;
  }

  
  @ApiModelProperty(example = "[{\"email\":\"user@domain.com\",\"name\":\"John Smith\"}]", required = true, value = "A list of destionation email addresses to send this to")
  @JsonProperty("to")
  @NotNull

  public List<EmailAddressName> getTo() {
    return to;
  }
  public void setTo(List<EmailAddressName> to) {
    this.to = to;
  }

  /**
   * (optional) A list of email addresses that specify where replies to the email should be sent instead of the _from_ address.
   **/
  public SendMailAdv replyto(List<EmailAddressName> replyto) {
    this.replyto = replyto;
    return this;
  }

  
  @ApiModelProperty(example = "[{\"email\":\"user@domain.com\",\"name\":\"John Smith\"}]", value = "(optional) A list of email addresses that specify where replies to the email should be sent instead of the _from_ address.")
  @JsonProperty("replyto")
  @NotNull

  public List<EmailAddressName> getReplyto() {
    return replyto;
  }
  public void setReplyto(List<EmailAddressName> replyto) {
    this.replyto = replyto;
  }

  /**
   * (optional) A list of email addresses to carbon copy this message to.  They are listed on the email and anyone getting the email can see this full list of Contacts who received the email as well.
   **/
  public SendMailAdv cc(List<EmailAddressName> cc) {
    this.cc = cc;
    return this;
  }

  
  @ApiModelProperty(example = "[{\"email\":\"user@domain.com\",\"name\":\"John Smith\"}]", value = "(optional) A list of email addresses to carbon copy this message to.  They are listed on the email and anyone getting the email can see this full list of Contacts who received the email as well.")
  @JsonProperty("cc")
  @NotNull

  public List<EmailAddressName> getCc() {
    return cc;
  }
  public void setCc(List<EmailAddressName> cc) {
    this.cc = cc;
  }

  /**
   * (optional) list of email addresses that should receive copies of the email.  They are hidden on the email and anyone gettitng the email would not see the other people getting the email in this list.
   **/
  public SendMailAdv bcc(List<EmailAddressName> bcc) {
    this.bcc = bcc;
    return this;
  }

  
  @ApiModelProperty(example = "[{\"email\":\"user@domain.com\",\"name\":\"John Smith\"}]", value = "(optional) list of email addresses that should receive copies of the email.  They are hidden on the email and anyone gettitng the email would not see the other people getting the email in this list.")
  @JsonProperty("bcc")
  @NotNull

  public List<EmailAddressName> getBcc() {
    return bcc;
  }
  public void setBcc(List<EmailAddressName> bcc) {
    this.bcc = bcc;
  }

  /**
   * (optional) File attachments to include in the email.  The file contents must be base64 encoded!
   **/
  public SendMailAdv attachments(List<MailAttachment> attachments) {
    this.attachments = attachments;
    return this;
  }

  
  @ApiModelProperty(example = "[{\"filename\":\"text.txt\",\"data\":\"base64_encoded_contents\"}]", value = "(optional) File attachments to include in the email.  The file contents must be base64 encoded!")
  @JsonProperty("attachments")
  @NotNull

  public List<MailAttachment> getAttachments() {
    return attachments;
  }
  public void setAttachments(List<MailAttachment> attachments) {
    this.attachments = attachments;
  }

  /**
   * (optional)  ID of the Mail order within our system to use as the Mail Account.
   **/
  public SendMailAdv id(Long id) {
    this.id = id;
    return this;
  }

  
  @ApiModelProperty(example = "5000", value = "(optional)  ID of the Mail order within our system to use as the Mail Account.")
  @JsonProperty("id")
  @NotNull

  public Long getId() {
    return id;
  }
  public void setId(Long id) {
    this.id = id;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    SendMailAdv sendMailAdv = (SendMailAdv) o;
    return Objects.equals(subject, sendMailAdv.subject) &&
        Objects.equals(body, sendMailAdv.body) &&
        Objects.equals(from, sendMailAdv.from) &&
        Objects.equals(to, sendMailAdv.to) &&
        Objects.equals(replyto, sendMailAdv.replyto) &&
        Objects.equals(cc, sendMailAdv.cc) &&
        Objects.equals(bcc, sendMailAdv.bcc) &&
        Objects.equals(attachments, sendMailAdv.attachments) &&
        Objects.equals(id, sendMailAdv.id);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
