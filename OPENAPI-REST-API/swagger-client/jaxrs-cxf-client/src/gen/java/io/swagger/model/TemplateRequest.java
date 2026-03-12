package io.swagger.model;

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
  * VPS OS Template Request
 **/
@Schema(description="VPS OS Template Request")
public class TemplateRequest   {
  
  @Schema(example = "ubuntu24", required = true, description = "OS Template Filename")
 /**
   * OS Template Filename  
  **/
  private String template = null;
  
  @Schema(example = "myUserPassword", description = "Password for Root / Administrator Account.")
 /**
   * Password for Root / Administrator Account.  
  **/
  private String password = null;
  
  @Schema(required = true, description = "Password for this account.")
 /**
   * Password for this account.  
  **/
  private String localPassword = null;
 /**
   * OS Template Filename
   * @return template
  **/
  @JsonProperty("template")
  public String getTemplate() {
    return template;
  }

  public void setTemplate(String template) {
    this.template = template;
  }

  public TemplateRequest template(String template) {
    this.template = template;
    return this;
  }

 /**
   * Password for Root / Administrator Account.
   * @return password
  **/
  @JsonProperty("password")
  public String getPassword() {
    return password;
  }

  public void setPassword(String password) {
    this.password = password;
  }

  public TemplateRequest password(String password) {
    this.password = password;
    return this;
  }

 /**
   * Password for this account.
   * @return localPassword
  **/
  @JsonProperty("localPassword")
  public String getLocalPassword() {
    return localPassword;
  }

  public void setLocalPassword(String localPassword) {
    this.localPassword = localPassword;
  }

  public TemplateRequest localPassword(String localPassword) {
    this.localPassword = localPassword;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class TemplateRequest {\n");
    
    sb.append("    template: ").append(toIndentedString(template)).append("\n");
    sb.append("    password: ").append(toIndentedString(password)).append("\n");
    sb.append("    localPassword: ").append(toIndentedString(localPassword)).append("\n");
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
