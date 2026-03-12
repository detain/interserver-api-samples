package io.swagger.model;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;


/**
 * A result row from the &#x60;Mail&#x60; &#x60;GET&#x60; request.
 **/
@Schema(description = "A result row from the `Mail` `GET` request.")


public class MailRow   {
  @JsonProperty("mail_id")
  private String mailId = null;
  @JsonProperty("repeat_invoices_cost")
  private String repeatInvoicesCost = null;
  @JsonProperty("mail_username")
  private String mailUsername = null;
  @JsonProperty("mail_status")
  private String mailStatus = null;
  @JsonProperty("services_name")
  private String servicesName = null;
  /**
   * The id of the mail.
   **/
  public MailRow mailId(String mailId) {
    this.mailId = mailId;
    return this;
  }

  
  @Schema(example = "5652", description = "The id of the mail.")
  @JsonProperty("mail_id")
  public String getMailId() {
    return mailId;
  }
  public void setMailId(String mailId) {
    this.mailId = mailId;
  }

  /**
   * The repeat invoices cost of the mail.
   **/
  public MailRow repeatInvoicesCost(String repeatInvoicesCost) {
    this.repeatInvoicesCost = repeatInvoicesCost;
    return this;
  }

  
  @Schema(example = "5.99", description = "The repeat invoices cost of the mail.")
  @JsonProperty("repeat_invoices_cost")
  public String getRepeatInvoicesCost() {
    return repeatInvoicesCost;
  }
  public void setRepeatInvoicesCost(String repeatInvoicesCost) {
    this.repeatInvoicesCost = repeatInvoicesCost;
  }

  /**
   * The username of the mail.
   **/
  public MailRow mailUsername(String mailUsername) {
    this.mailUsername = mailUsername;
    return this;
  }

  
  @Schema(example = "mb5652", description = "The username of the mail.")
  @JsonProperty("mail_username")
  public String getMailUsername() {
    return mailUsername;
  }
  public void setMailUsername(String mailUsername) {
    this.mailUsername = mailUsername;
  }

  /**
   * The status of the mail.
   **/
  public MailRow mailStatus(String mailStatus) {
    this.mailStatus = mailStatus;
    return this;
  }

  
  @Schema(example = "expired", description = "The status of the mail.")
  @JsonProperty("mail_status")
  public String getMailStatus() {
    return mailStatus;
  }
  public void setMailStatus(String mailStatus) {
    this.mailStatus = mailStatus;
  }

  /**
   * The services name of the mail.
   **/
  public MailRow servicesName(String servicesName) {
    this.servicesName = servicesName;
    return this;
  }

  
  @Schema(example = "MailBaby Mail", description = "The services name of the mail.")
  @JsonProperty("services_name")
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
    return Objects.equals(mailId, mailRow.mailId) &&
        Objects.equals(repeatInvoicesCost, mailRow.repeatInvoicesCost) &&
        Objects.equals(mailUsername, mailRow.mailUsername) &&
        Objects.equals(mailStatus, mailRow.mailStatus) &&
        Objects.equals(servicesName, mailRow.servicesName);
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
