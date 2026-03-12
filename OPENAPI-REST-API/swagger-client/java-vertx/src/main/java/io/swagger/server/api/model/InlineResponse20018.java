package io.swagger.server.api.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.server.api.model.InlineResponse20018Ips;
import io.swagger.server.api.model.InlineResponse20018PackageCosts;
import io.swagger.server.api.model.InlineResponse20018ServiceTypes;
import java.util.ArrayList;
import java.util.List;
import io.vertx.core.json.JsonObject;
import io.vertx.codegen.annotations.DataObject;
/**
 * InlineResponse20018
 */




public class InlineResponse20018   {
  private InlineResponse20018PackageCosts packageCosts = null;

  
  private List<InlineResponse20018ServiceTypes> serviceTypes = null;

  
  private List<InlineResponse20018Ips> ips = null;

  public InlineResponse20018 packageCosts(InlineResponse20018PackageCosts packageCosts) {
    this.packageCosts = packageCosts;
    return this;
  }

  /**
   * Get packageCosts
   * @return packageCosts
   **/
    public InlineResponse20018PackageCosts getPackageCosts() {
    return packageCosts;
  }

  public void setPackageCosts(InlineResponse20018PackageCosts packageCosts) {
    this.packageCosts = packageCosts;
  }

  public InlineResponse20018 serviceTypes(List<InlineResponse20018ServiceTypes> serviceTypes) {
    this.serviceTypes = serviceTypes;
    return this;
  }

  public InlineResponse20018 addServiceTypesItem(InlineResponse20018ServiceTypes serviceTypesItem) {
    if (this.serviceTypes == null) {
      this.serviceTypes = new ArrayList<InlineResponse20018ServiceTypes>();
    }
    this.serviceTypes.add(serviceTypesItem);
    return this;
  }

  /**
   * Get serviceTypes
   * @return serviceTypes
   **/
    public List<InlineResponse20018ServiceTypes> getServiceTypes() {
    return serviceTypes;
  }

  public void setServiceTypes(List<InlineResponse20018ServiceTypes> serviceTypes) {
    this.serviceTypes = serviceTypes;
  }

  public InlineResponse20018 ips(List<InlineResponse20018Ips> ips) {
    this.ips = ips;
    return this;
  }

  public InlineResponse20018 addIpsItem(InlineResponse20018Ips ipsItem) {
    if (this.ips == null) {
      this.ips = new ArrayList<InlineResponse20018Ips>();
    }
    this.ips.add(ipsItem);
    return this;
  }

  /**
   * Get ips
   * @return ips
   **/
    public List<InlineResponse20018Ips> getIps() {
    return ips;
  }

  public void setIps(List<InlineResponse20018Ips> ips) {
    this.ips = ips;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    InlineResponse20018 inlineResponse20018 = (InlineResponse20018) o;
    return Objects.equals(this.packageCosts, inlineResponse20018.packageCosts) &&
        Objects.equals(this.serviceTypes, inlineResponse20018.serviceTypes) &&
        Objects.equals(this.ips, inlineResponse20018.ips);
  }

  @Override
  public int hashCode() {
    return Objects.hash(packageCosts, serviceTypes, ips);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class InlineResponse20018 {\n");
    
    sb.append("    packageCosts: ").append(toIndentedString(packageCosts)).append("\n");
    sb.append("    serviceTypes: ").append(toIndentedString(serviceTypes)).append("\n");
    sb.append("    ips: ").append(toIndentedString(ips)).append("\n");
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
