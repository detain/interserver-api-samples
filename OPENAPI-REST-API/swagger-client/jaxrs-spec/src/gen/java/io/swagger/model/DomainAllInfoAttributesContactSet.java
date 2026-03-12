package io.swagger.model;

import io.swagger.model.DomainAdminContact;
import io.swagger.model.DomainOwnerContact;
import io.swagger.model.DomainTechContact;
import javax.validation.constraints.*;
import javax.validation.Valid;


import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class DomainAllInfoAttributesContactSet   {

  private @Valid DomainOwnerContact owner = null;

  private @Valid DomainAdminContact admin = null;

  private @Valid DomainTechContact tech = null;

  /**
   **/
  public DomainAllInfoAttributesContactSet owner(DomainOwnerContact owner) {
    this.owner = owner;
    return this;
  }

  
  @ApiModelProperty(value = "")
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
  public DomainAllInfoAttributesContactSet admin(DomainAdminContact admin) {
    this.admin = admin;
    return this;
  }

  
  @ApiModelProperty(value = "")
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
  public DomainAllInfoAttributesContactSet tech(DomainTechContact tech) {
    this.tech = tech;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("tech")
  @NotNull

  public DomainTechContact getTech() {
    return tech;
  }
  public void setTech(DomainTechContact tech) {
    this.tech = tech;
  }


  @Override
  public boolean equals(java.lang.Object o) {
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
