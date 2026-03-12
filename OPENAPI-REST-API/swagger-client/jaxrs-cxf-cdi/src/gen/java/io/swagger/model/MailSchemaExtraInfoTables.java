package io.swagger.model;

import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.MailExtraInfoTable;
import io.swagger.model.MailTutorialsTable;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.Valid;
import javax.validation.constraints.*;
/**
 * Additional information tables for the mail service.
 **/
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.Objects;

import javax.xml.bind.annotation.*;

@Schema(description = "Additional information tables for the mail service.")

public class MailSchemaExtraInfoTables   {
  private MailExtraInfoTable mail = null;
  private MailTutorialsTable tutorials = null;

  /**
   **/
  public MailSchemaExtraInfoTables mail(MailExtraInfoTable mail) {
    this.mail = mail;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("mail")
  @NotNull
  @Valid
  public MailExtraInfoTable getMail() {
    return mail;
  }
  public void setMail(MailExtraInfoTable mail) {
    this.mail = mail;
  }

  /**
   **/
  public MailSchemaExtraInfoTables tutorials(MailTutorialsTable tutorials) {
    this.tutorials = tutorials;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("tutorials")
  @NotNull
  @Valid
  public MailTutorialsTable getTutorials() {
    return tutorials;
  }
  public void setTutorials(MailTutorialsTable tutorials) {
    this.tutorials = tutorials;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    MailSchemaExtraInfoTables mailSchemaExtraInfoTables = (MailSchemaExtraInfoTables) o;
    return Objects.equals(mail, mailSchemaExtraInfoTables.mail) &&
        Objects.equals(tutorials, mailSchemaExtraInfoTables.tutorials);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
