package io.swagger.model;

import io.swagger.model.BackupsOrderPackageCosts;
import io.swagger.model.BackupsOrderServiceTypes;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;

import io.swagger.v3.oas.annotations.media.Schema;
import javax.xml.bind.annotation.XmlElement;
import javax.xml.bind.annotation.XmlRootElement;
import javax.xml.bind.annotation.XmlAccessType;
import javax.xml.bind.annotation.XmlAccessorType;
import javax.xml.bind.annotation.XmlType;
import javax.xml.bind.annotation.XmlEnum;
import javax.xml.bind.annotation.XmlEnumValue;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonValue;
import com.fasterxml.jackson.annotation.JsonCreator;

/**
  * Available backup storage packages and pricing for ordering a new backup service.
 **/
@Schema(description="Available backup storage packages and pricing for ordering a new backup service.")
public class BackupsOrder   {
  
  @Schema(required = true, description = "")
  private BackupsOrderPackageCosts packageCosts = null;
  
  @Schema(required = true, description = "")
  private BackupsOrderServiceTypes serviceTypes = null;
 /**
   * Get packageCosts
   * @return packageCosts
  **/
  @JsonProperty("packageCosts")
  @NotNull
  public BackupsOrderPackageCosts getPackageCosts() {
    return packageCosts;
  }

  public void setPackageCosts(BackupsOrderPackageCosts packageCosts) {
    this.packageCosts = packageCosts;
  }

  public BackupsOrder packageCosts(BackupsOrderPackageCosts packageCosts) {
    this.packageCosts = packageCosts;
    return this;
  }

 /**
   * Get serviceTypes
   * @return serviceTypes
  **/
  @JsonProperty("serviceTypes")
  @NotNull
  public BackupsOrderServiceTypes getServiceTypes() {
    return serviceTypes;
  }

  public void setServiceTypes(BackupsOrderServiceTypes serviceTypes) {
    this.serviceTypes = serviceTypes;
  }

  public BackupsOrder serviceTypes(BackupsOrderServiceTypes serviceTypes) {
    this.serviceTypes = serviceTypes;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class BackupsOrder {\n");
    
    sb.append("    packageCosts: ").append(toIndentedString(packageCosts)).append("\n");
    sb.append("    serviceTypes: ").append(toIndentedString(serviceTypes)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
