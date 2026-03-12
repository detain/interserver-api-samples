package io.swagger.model;

import io.swagger.model.MailExtraInfoTable;
import io.swagger.model.MailTutorialsTable;
import io.swagger.v3.oas.annotations.media.Schema;

import io.swagger.v3.oas.annotations.media.Schema;
import javax.xml.bind.annotation.XmlElement;
import javax.xml.bind.annotation.XmlRootElement;
import javax.xml.bind.annotation.XmlAccessType;
import javax.xml.bind.annotation.XmlAccessorType;
import javax.xml.bind.annotation.XmlType;
import javax.xml.bind.annotation.XmlEnum;
import javax.xml.bind.annotation.XmlEnumValue;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonValue;
import com.fasterxml.jackson.annotation.JsonCreator;

/**
  * Additional information tables for the mail service.
 **/
@Schema(description="Additional information tables for the mail service.")
public class MailSchemaExtraInfoTables   {
  
  @Schema(description = "")
  private MailExtraInfoTable mail = null;
  
  @Schema(description = "")
  private MailTutorialsTable tutorials = null;
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
