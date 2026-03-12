package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * An email contact.
 **/
import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
@Schema(description = "An email contact.")

public class EmailAddressName   {

  private @Valid String email = null;

  private @Valid String name = null;

  /**
   * The email address.
   **/
  public EmailAddressName email(String email) {
    this.email = email;
    return this;
  }

  
  @ApiModelProperty(example = "user@domain.com", required = true, value = "The email address.")
  @JsonProperty("email")
  @NotNull

  public String getEmail() {
    return email;
  }
  public void setEmail(String email) {
    this.email = email;
  }

  /**
   * Name to use for the sending contact.
   **/
  public EmailAddressName name(String name) {
    this.name = name;
    return this;
  }

  
  @ApiModelProperty(example = "John Smith", value = "Name to use for the sending contact.")
  @JsonProperty("name")
  @NotNull

  public String getName() {
    return name;
  }
  public void setName(String name) {
    this.name = name;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    EmailAddressName emailAddressName = (EmailAddressName) o;
    return Objects.equals(email, emailAddressName.email) &&
        Objects.equals(name, emailAddressName.name);
  }

  @Override
  public int hashCode() {
    return Objects.hash(email, name);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class EmailAddressName {\n");
    
    sb.append("    email: ").append(toIndentedString(email)).append("\n");
    sb.append("    name: ").append(toIndentedString(name)).append("\n");
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
