package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;

@Schema(description="VPS OS Template Request")

public class TemplateRequest   {
  private String template = null;
  private String password = null;
  private String localPassword = null;

  /**
   * OS Template Filename
   **/
  
  @Schema(example = "ubuntu24", required = true, description = "OS Template Filename")
  @JsonProperty("template")
  @NotNull
  public String getTemplate() {
    return template;
  }
  public void setTemplate(String template) {
    this.template = template;
  }

  /**
   * Password for Root / Administrator Account.
   **/
  
  @Schema(example = "myUserPassword", description = "Password for Root / Administrator Account.")
  @JsonProperty("password")
  @NotNull
  public String getPassword() {
    return password;
  }
  public void setPassword(String password) {
    this.password = password;
  }

  /**
   * Password for this account.
   **/
  
  @Schema(required = true, description = "Password for this account.")
  @JsonProperty("localPassword")
  @NotNull
  public String getLocalPassword() {
    return localPassword;
  }
  public void setLocalPassword(String localPassword) {
    this.localPassword = localPassword;
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
    return Objects.equals(template, templateRequest.template) &&
        Objects.equals(password, templateRequest.password) &&
        Objects.equals(localPassword, templateRequest.localPassword);
  }

  @Override
  public int hashCode() {
    return Objects.hash(template, password, localPassword);
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
  private String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
