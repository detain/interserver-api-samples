package io.swagger.server.api.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.server.api.model.MailExtraInfoTable;
import io.swagger.server.api.model.MailTutorialsTable;
import io.swagger.v3.oas.annotations.media.Schema;
import io.vertx.core.json.JsonObject;
import io.vertx.codegen.annotations.DataObject;
/**
 * Additional information tables for the mail service.
 */




public class MailSchemaExtraInfoTables   {
  private MailExtraInfoTable mail = null;

  private MailTutorialsTable tutorials = null;

  public MailSchemaExtraInfoTables mail(MailExtraInfoTable mail) {
    this.mail = mail;
    return this;
  }

  /**
   * Get mail
   * @return mail
   **/
    public MailExtraInfoTable getMail() {
    return mail;
  }

  public void setMail(MailExtraInfoTable mail) {
    this.mail = mail;
  }

  public MailSchemaExtraInfoTables tutorials(MailTutorialsTable tutorials) {
    this.tutorials = tutorials;
    return this;
  }

  /**
   * Get tutorials
   * @return tutorials
   **/
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
