package org.openapitools.model;

import org.openapitools.model.DomainAdminContact;
import org.openapitools.model.DomainOwnerContact;
import org.openapitools.model.DomainTechContact;

import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class DomainAllInfoAttributesContactSet  {
  
  @ApiModelProperty(value = "")

  private DomainOwnerContact owner;

  @ApiModelProperty(value = "")

  private DomainAdminContact admin;

  @ApiModelProperty(value = "")

  private DomainTechContact tech;
 /**
   * Get owner
   * @return owner
  **/
  @JsonProperty("owner")
  public DomainOwnerContact getOwner() {
    return owner;
  }

  public void setOwner(DomainOwnerContact owner) {
    this.owner = owner;
  }

  public DomainAllInfoAttributesContactSet owner(DomainOwnerContact owner) {
    this.owner = owner;
    return this;
  }

 /**
   * Get admin
   * @return admin
  **/
  @JsonProperty("admin")
  public DomainAdminContact getAdmin() {
    return admin;
  }

  public void setAdmin(DomainAdminContact admin) {
    this.admin = admin;
  }

  public DomainAllInfoAttributesContactSet admin(DomainAdminContact admin) {
    this.admin = admin;
    return this;
  }

 /**
   * Get tech
   * @return tech
  **/
  @JsonProperty("tech")
  public DomainTechContact getTech() {
    return tech;
  }

  public void setTech(DomainTechContact tech) {
    this.tech = tech;
  }

  public DomainAllInfoAttributesContactSet tech(DomainTechContact tech) {
    this.tech = tech;
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
    DomainAllInfoAttributesContactSet domainAllInfoAttributesContactSet = (DomainAllInfoAttributesContactSet) o;
    return Objects.equals(this.owner, domainAllInfoAttributesContactSet.owner) &&
        Objects.equals(this.admin, domainAllInfoAttributesContactSet.admin) &&
        Objects.equals(this.tech, domainAllInfoAttributesContactSet.tech);
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
  private static String toIndentedString(Object o) {
    return o == null ? "null" : o.toString().replace("\n", "\n    ");
  }
}

