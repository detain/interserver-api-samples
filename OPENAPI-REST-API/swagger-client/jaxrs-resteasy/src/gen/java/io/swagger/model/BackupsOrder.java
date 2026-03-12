package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.BackupsOrderPackageCosts;
import io.swagger.model.BackupsOrderServiceTypes;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;

@Schema(description="Available backup storage packages and pricing for ordering a new backup service.")

public class BackupsOrder   {
  private BackupsOrderPackageCosts packageCosts = null;  private BackupsOrderServiceTypes serviceTypes = null;

  /**
   **/
  
  @Schema(required = true, description = "")
  @JsonProperty("packageCosts")
  @NotNull
  public BackupsOrderPackageCosts getPackageCosts() {
    return packageCosts;
  }
  public void setPackageCosts(BackupsOrderPackageCosts packageCosts) {
    this.packageCosts = packageCosts;
  }

  /**
   **/
  
  @Schema(required = true, description = "")
  @JsonProperty("serviceTypes")
  @NotNull
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
