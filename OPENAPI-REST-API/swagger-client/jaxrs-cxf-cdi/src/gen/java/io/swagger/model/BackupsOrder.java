package io.swagger.model;

import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.BackupsOrderPackageCosts;
import io.swagger.model.BackupsOrderServiceTypes;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.Valid;
import javax.validation.constraints.*;
/**
 * Available backup storage packages and pricing for ordering a new backup service.
 **/
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.Objects;

import javax.xml.bind.annotation.*;

@Schema(description = "Available backup storage packages and pricing for ordering a new backup service.")

public class BackupsOrder   {
  private BackupsOrderPackageCosts packageCosts = null;
  private BackupsOrderServiceTypes serviceTypes = null;

  /**
   **/
  public BackupsOrder packageCosts(BackupsOrderPackageCosts packageCosts) {
    this.packageCosts = packageCosts;
    return this;
  }

  
  
  @Schema(required = true, description = "")
  @JsonProperty("packageCosts")
  @NotNull
  @Valid
  public BackupsOrderPackageCosts getPackageCosts() {
    return packageCosts;
  }
  public void setPackageCosts(BackupsOrderPackageCosts packageCosts) {
    this.packageCosts = packageCosts;
  }

  /**
   **/
  public BackupsOrder serviceTypes(BackupsOrderServiceTypes serviceTypes) {
    this.serviceTypes = serviceTypes;
    return this;
  }

  
  
  @Schema(required = true, description = "")
  @JsonProperty("serviceTypes")
  @NotNull
  @Valid
  public BackupsOrderServiceTypes getServiceTypes() {
    return serviceTypes;
  }
  public void setServiceTypes(BackupsOrderServiceTypes serviceTypes) {
    this.serviceTypes = serviceTypes;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    BackupsOrder backupsOrder = (BackupsOrder) o;
    return Objects.equals(packageCosts, backupsOrder.packageCosts) &&
        Objects.equals(serviceTypes, backupsOrder.serviceTypes);
  }

  @Override
  public int hashCode() {
    return Objects.hash(packageCosts, serviceTypes);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
