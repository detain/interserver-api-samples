package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;



public class DomainOrderResponseAttributes   {
  private String id = null;
  private String adminEmail = null;

  /**
   * Registrar order ID.
   **/
  
  @Schema(description = "Registrar order ID.")
  @JsonProperty("id")
  @NotNull
  public String getId() {
    return id;
  }
  public void setId(String id) {
    this.id = id;
  }

  /**
   * Administrative contact email provided for the order.
   **/
  
  @Schema(description = "Administrative contact email provided for the order.")
  @JsonProperty("admin_email")
  @NotNull
  public String getAdminEmail() {
    return adminEmail;
  }
  public void setAdminEmail(String adminEmail) {
    this.adminEmail = adminEmail;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    DomainOrderResponseAttributes domainOrderResponseAttributes = (DomainOrderResponseAttributes) o;
    return Objects.equals(id, domainOrderResponseAttributes.id) &&
        Objects.equals(adminEmail, domainOrderResponseAttributes.adminEmail);
  }

  @Override
  public int hashCode() {
    return Objects.hash(id, adminEmail);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class DomainOrderResponseAttributes {\n");
    
    sb.append("    id: ").append(toIndentedString(id)).append("\n");
    sb.append("    adminEmail: ").append(toIndentedString(adminEmail)).append("\n");
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
