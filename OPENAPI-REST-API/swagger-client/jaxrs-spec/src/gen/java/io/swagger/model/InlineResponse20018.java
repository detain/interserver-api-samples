package io.swagger.model;

import io.swagger.model.InlineResponse20018Ips;
import io.swagger.model.InlineResponse20018PackageCosts;
import io.swagger.model.InlineResponse20018ServiceTypes;
import java.util.ArrayList;
import java.util.List;
import javax.validation.constraints.*;
import javax.validation.Valid;


import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class InlineResponse20018   {

  private @Valid InlineResponse20018PackageCosts packageCosts = null;

  private @Valid List<InlineResponse20018ServiceTypes> serviceTypes = new ArrayList<InlineResponse20018ServiceTypes>();

  private @Valid List<InlineResponse20018Ips> ips = new ArrayList<InlineResponse20018Ips>();

  /**
   **/
  public InlineResponse20018 packageCosts(InlineResponse20018PackageCosts packageCosts) {
    this.packageCosts = packageCosts;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("packageCosts")
  @NotNull

  public InlineResponse20018PackageCosts getPackageCosts() {
    return packageCosts;
  }
  public void setPackageCosts(InlineResponse20018PackageCosts packageCosts) {
    this.packageCosts = packageCosts;
  }

  /**
   **/
  public InlineResponse20018 serviceTypes(List<InlineResponse20018ServiceTypes> serviceTypes) {
    this.serviceTypes = serviceTypes;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("serviceTypes")
  @NotNull

  public List<InlineResponse20018ServiceTypes> getServiceTypes() {
    return serviceTypes;
  }
  public void setServiceTypes(List<InlineResponse20018ServiceTypes> serviceTypes) {
    this.serviceTypes = serviceTypes;
  }

  /**
   **/
  public InlineResponse20018 ips(List<InlineResponse20018Ips> ips) {
    this.ips = ips;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("ips")
  @NotNull

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
    return Objects.equals(packageCosts, inlineResponse20018.packageCosts) &&
        Objects.equals(serviceTypes, inlineResponse20018.serviceTypes) &&
        Objects.equals(ips, inlineResponse20018.ips);
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
