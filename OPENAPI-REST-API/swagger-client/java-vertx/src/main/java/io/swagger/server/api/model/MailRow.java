package io.swagger.server.api.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import io.vertx.core.json.JsonObject;
import io.vertx.codegen.annotations.DataObject;
/**
 * A result row from the &#x60;Mail&#x60; &#x60;GET&#x60; request.
 */




public class MailRow   {
  private String mailId = null;

  private String repeatInvoicesCost = null;

  private String mailUsername = null;

  private String mailStatus = null;

  private String servicesName = null;

  public MailRow mailId(String mailId) {
    this.mailId = mailId;
    return this;
  }

  /**
   * The id of the mail.
   * @return mailId
   **/
    public String getMailId() {
    return mailId;
  }

  public void setMailId(String mailId) {
    this.mailId = mailId;
  }

  public MailRow repeatInvoicesCost(String repeatInvoicesCost) {
    this.repeatInvoicesCost = repeatInvoicesCost;
    return this;
  }

  /**
   * The repeat invoices cost of the mail.
   * @return repeatInvoicesCost
   **/
    public String getRepeatInvoicesCost() {
    return repeatInvoicesCost;
  }

  public void setRepeatInvoicesCost(String repeatInvoicesCost) {
    this.repeatInvoicesCost = repeatInvoicesCost;
  }

  public MailRow mailUsername(String mailUsername) {
    this.mailUsername = mailUsername;
    return this;
  }

  /**
   * The username of the mail.
   * @return mailUsername
   **/
    public String getMailUsername() {
    return mailUsername;
  }

  public void setMailUsername(String mailUsername) {
    this.mailUsername = mailUsername;
  }

  public MailRow mailStatus(String mailStatus) {
    this.mailStatus = mailStatus;
    return this;
  }

  /**
   * The status of the mail.
   * @return mailStatus
   **/
    public String getMailStatus() {
    return mailStatus;
  }

  public void setMailStatus(String mailStatus) {
    this.mailStatus = mailStatus;
  }

  public MailRow servicesName(String servicesName) {
    this.servicesName = servicesName;
    return this;
  }

  /**
   * The services name of the mail.
   * @return servicesName
   **/
    public String getServicesName() {
    return servicesName;
  }

  public void setServicesName(String servicesName) {
    this.servicesName = servicesName;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    MailRow mailRow = (MailRow) o;
    return Objects.equals(this.mailId, mailRow.mailId) &&
        Objects.equals(this.repeatInvoicesCost, mailRow.repeatInvoicesCost) &&
        Objects.equals(this.mailUsername, mailRow.mailUsername) &&
        Objects.equals(this.mailStatus, mailRow.mailStatus) &&
        Objects.equals(this.servicesName, mailRow.servicesName);
  }

  @Override
  public int hashCode() {
    return Objects.hash(mailId, repeatInvoicesCost, mailUsername, mailStatus, servicesName);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class MailRow {\n");
    
    sb.append("    mailId: ").append(toIndentedString(mailId)).append("\n");
    sb.append("    repeatInvoicesCost: ").append(toIndentedString(repeatInvoicesCost)).append("\n");
    sb.append("    mailUsername: ").append(toIndentedString(mailUsername)).append("\n");
    sb.append("    mailStatus: ").append(toIndentedString(mailStatus)).append("\n");
    sb.append("    servicesName: ").append(toIndentedString(servicesName)).append("\n");
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
