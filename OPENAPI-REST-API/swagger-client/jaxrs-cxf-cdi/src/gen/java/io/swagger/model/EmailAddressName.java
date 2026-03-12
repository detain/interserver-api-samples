package io.swagger.model;

import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
/**
 * An email contact.
 **/
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.Objects;

import javax.xml.bind.annotation.*;

@Schema(description = "An email contact.")

public class EmailAddressName   {
  private String email = null;
  private String name = null;

  /**
   * The email address.
   **/
  public EmailAddressName email(String email) {
    this.email = email;
    return this;
  }

  
  
  @Schema(example = "user@domain.com", required = true, description = "The email address.")
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

  
  
  @Schema(example = "John Smith", description = "Name to use for the sending contact.")
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
