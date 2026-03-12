package org.openapitools.model;


import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * VPS OS Template Request
 */
@ApiModel(description="VPS OS Template Request")

public class TemplateRequest  {
  
 /**
  * OS Template Filename
  */
  @ApiModelProperty(example = "ubuntu24", required = true, value = "OS Template Filename")

  private String template;

 /**
  * Password for this account.
  */
  @ApiModelProperty(required = true, value = "Password for this account.")

  private String localPassword;

 /**
  * Password for Root / Administrator Account.
  */
  @ApiModelProperty(example = "myUserPassword", value = "Password for Root / Administrator Account.")

  private String password;
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

  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    TemplateRequest templateRequest = (TemplateRequest) o;
    return Objects.equals(this.template, templateRequest.template) &&
        Objects.equals(this.localPassword, templateRequest.localPassword) &&
        Objects.equals(this.password, templateRequest.password);
  }

  @Override
  public int hashCode() {
    return Objects.hash(template, localPassword, password);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class TemplateRequest {\n");
    
    sb.append("    template: ").append(toIndentedString(template)).append("\n");
    sb.append("    localPassword: ").append("*").append("\n");
    sb.append("    password: ").append("*").append("\n");
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

