package org.openapitools.model;


import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * A result row from the `Mail` `GET` request.
 */
@ApiModel(description="A result row from the `Mail` `GET` request.")

public class MailRow  {
  
 /**
  * The id of the mail.
  */
  @ApiModelProperty(example = "5652", value = "The id of the mail.")

  private String mailId;

 /**
  * The repeat invoices cost of the mail.
  */
  @ApiModelProperty(example = "5.99", value = "The repeat invoices cost of the mail.")

  private String repeatInvoicesCost;

 /**
  * The username of the mail.
  */
  @ApiModelProperty(example = "mb5652", value = "The username of the mail.")

  private String mailUsername;

 /**
  * The status of the mail.
  */
  @ApiModelProperty(example = "expired", value = "The status of the mail.")

  private String mailStatus;

 /**
  * The services name of the mail.
  */
  @ApiModelProperty(example = "MailBaby Mail", value = "The services name of the mail.")

  private String servicesName;
 /**
   * The id of the mail.
   * @return mailId
  **/
  @JsonProperty("mail_id")
  public String getMailId() {
    return mailId;
  }

  public void setMailId(String mailId) {
    this.mailId = mailId;
  }

  public MailRow mailId(String mailId) {
    this.mailId = mailId;
    return this;
  }

 /**
   * The repeat invoices cost of the mail.
   * @return repeatInvoicesCost
  **/
  @JsonProperty("repeat_invoices_cost")
  public String getRepeatInvoicesCost() {
    return repeatInvoicesCost;
  }

  public void setRepeatInvoicesCost(String repeatInvoicesCost) {
    this.repeatInvoicesCost = repeatInvoicesCost;
  }

  public MailRow repeatInvoicesCost(String repeatInvoicesCost) {
    this.repeatInvoicesCost = repeatInvoicesCost;
    return this;
  }

 /**
   * The username of the mail.
   * @return mailUsername
  **/
  @JsonProperty("mail_username")
  public String getMailUsername() {
    return mailUsername;
  }

  public void setMailUsername(String mailUsername) {
    this.mailUsername = mailUsername;
  }

  public MailRow mailUsername(String mailUsername) {
    this.mailUsername = mailUsername;
    return this;
  }

 /**
   * The status of the mail.
   * @return mailStatus
  **/
  @JsonProperty("mail_status")
  public String getMailStatus() {
    return mailStatus;
  }

  public void setMailStatus(String mailStatus) {
    this.mailStatus = mailStatus;
  }

  public MailRow mailStatus(String mailStatus) {
    this.mailStatus = mailStatus;
    return this;
  }

 /**
   * The services name of the mail.
   * @return servicesName
  **/
  @JsonProperty("services_name")
  public String getServicesName() {
    return servicesName;
  }

  public void setServicesName(String servicesName) {
    this.servicesName = servicesName;
  }

  public MailRow servicesName(String servicesName) {
    this.servicesName = servicesName;
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
  private static String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

