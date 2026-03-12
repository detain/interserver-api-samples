package org.openapitools.model;

import org.openapitools.model.MailExtraInfoTable;
import org.openapitools.model.MailTutorialsTable;

import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * Additional information tables for the mail service.
 */
@ApiModel(description="Additional information tables for the mail service.")

public class MailSchemaExtraInfoTables  {
  
  @ApiModelProperty(value = "")

  private MailExtraInfoTable mail;

  @ApiModelProperty(value = "")

  private MailTutorialsTable tutorials;
 /**
   * Get mail
   * @return mail
  **/
  @JsonProperty("mail")
  public MailExtraInfoTable getMail() {
    return mail;
  }

  public void setMail(MailExtraInfoTable mail) {
    this.mail = mail;
  }

  public MailSchemaExtraInfoTables mail(MailExtraInfoTable mail) {
    this.mail = mail;
    return this;
  }

 /**
   * Get tutorials
   * @return tutorials
  **/
  @JsonProperty("tutorials")
  public MailTutorialsTable getTutorials() {
    return tutorials;
  }

  public void setTutorials(MailTutorialsTable tutorials) {
    this.tutorials = tutorials;
  }

  public MailSchemaExtraInfoTables tutorials(MailTutorialsTable tutorials) {
    this.tutorials = tutorials;
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
    MailSchemaExtraInfoTables mailSchemaExtraInfoTables = (MailSchemaExtraInfoTables) o;
    return Objects.equals(this.mail, mailSchemaExtraInfoTables.mail) &&
        Objects.equals(this.tutorials, mailSchemaExtraInfoTables.tutorials);
  }

  @Override
  public int hashCode() {
    return Objects.hash(mail, tutorials);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class MailSchemaExtraInfoTables {\n");
    
    sb.append("    mail: ").append(toIndentedString(mail)).append("\n");
    sb.append("    tutorials: ").append(toIndentedString(tutorials)).append("\n");
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

