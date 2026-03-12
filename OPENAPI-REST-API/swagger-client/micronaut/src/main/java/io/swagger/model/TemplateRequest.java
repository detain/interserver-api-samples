package io.swagger.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import io.micronaut.core.annotation.Introspected;
import io.micronaut.validation.Validated;
import javax.validation.Valid;
import javax.validation.constraints.*;

/**
 * VPS OS Template Request
 */
@Schema(description = "VPS OS Template Request")
@Validated
@Introspected

public class TemplateRequest   {
  @JsonProperty("template")
  private String template = null;

  @JsonProperty("password")
  private String password = null;

  @JsonProperty("localPassword")
  private String localPassword = null;

  public TemplateRequest template(String template) {
    this.template = template;
    return this;
  }

  /**
   * OS Template Filename
   * @return template
  **/
  @Schema(example = "ubuntu24", required = true, description = "OS Template Filename")
  @NotNull

  public String getTemplate() {
    return template;
  }

  public void setTemplate(String template) {
    this.template = template;
  }

  public TemplateRequest password(String password) {
    this.password = password;
    return this;
  }

  /**
   * Password for Root / Administrator Account.
   * @return password
  **/
  @Schema(example = "myUserPassword", description = "Password for Root / Administrator Account.")
  @NotNull

  public String getPassword() {
    return password;
  }

  public void setPassword(String password) {
    this.password = password;
  }

  public TemplateRequest localPassword(String localPassword) {
    this.localPassword = localPassword;
    return this;
  }

  /**
   * Password for this account.
   * @return localPassword
  **/
  @Schema(required = true, description = "Password for this account.")
  @NotNull

  public String getLocalPassword() {
    return localPassword;
  }

  public void setLocalPassword(String localPassword) {
    this.localPassword = localPassword;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    TemplateRequest templateRequest = (TemplateRequest) o;
    return Objects.equals(this.template, templateRequest.template) &&
        Objects.equals(this.password, templateRequest.password) &&
        Objects.equals(this.localPassword, templateRequest.localPassword);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
