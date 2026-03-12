package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.DomainAdminContact;
import io.swagger.model.DomainOwnerContact;
import io.swagger.model.DomainTechContact;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;



public class DomainAllInfoAttributesContactSet   {
  private DomainOwnerContact owner = null;
  private DomainAdminContact admin = null;
  private DomainTechContact tech = null;

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("owner")
  @NotNull
  public DomainOwnerContact getOwner() {
    return owner;
  }
  public void setOwner(DomainOwnerContact owner) {
    this.owner = owner;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("admin")
  @NotNull
  public DomainAdminContact getAdmin() {
    return admin;
  }
  public void setAdmin(DomainAdminContact admin) {
    this.admin = admin;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("tech")
  @NotNull
  public DomainTechContact getTech() {
    return tech;
  }
  public void setTech(DomainTechContact tech) {
    this.tech = tech;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    DomainAllInfoAttributesContactSet domainAllInfoAttributesContactSet = (DomainAllInfoAttributesContactSet) o;
    return Objects.equals(owner, domainAllInfoAttributesContactSet.owner) &&
        Objects.equals(admin, domainAllInfoAttributesContactSet.admin) &&
        Objects.equals(tech, domainAllInfoAttributesContactSet.tech);
  }

  @Override
  public int hashCode() {
    return Objects.hash(owner, admin, tech);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class DomainAllInfoAttributesContactSet {\n");
    
    sb.append("    owner: ").append(toIndentedString(owner)).append("\n");
    sb.append("    admin: ").append(toIndentedString(admin)).append("\n");
    sb.append("    tech: ").append(toIndentedString(tech)).append("\n");
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
