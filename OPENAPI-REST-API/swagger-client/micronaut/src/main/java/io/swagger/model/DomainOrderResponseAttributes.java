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
 * DomainOrderResponseAttributes
 */
@Validated
@Introspected

public class DomainOrderResponseAttributes   {
  @JsonProperty("id")
  private String id = null;

  @JsonProperty("admin_email")
  private String adminEmail = null;

  public DomainOrderResponseAttributes id(String id) {
    this.id = id;
    return this;
  }

  /**
   * Registrar order ID.
   * @return id
  **/
  @Schema(description = "Registrar order ID.")
  @NotNull

  public String getId() {
    return id;
  }

  public void setId(String id) {
    this.id = id;
  }

  public DomainOrderResponseAttributes adminEmail(String adminEmail) {
    this.adminEmail = adminEmail;
    return this;
  }

  /**
   * Administrative contact email provided for the order.
   * @return adminEmail
  **/
  @Schema(description = "Administrative contact email provided for the order.")
  @NotNull

  public String getAdminEmail() {
    return adminEmail;
  }

  public void setAdminEmail(String adminEmail) {
    this.adminEmail = adminEmail;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    DomainOrderResponseAttributes domainOrderResponseAttributes = (DomainOrderResponseAttributes) o;
    return Objects.equals(this.id, domainOrderResponseAttributes.id) &&
        Objects.equals(this.adminEmail, domainOrderResponseAttributes.adminEmail);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
