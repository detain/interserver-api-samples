package io.swagger.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.BackupsOrderPackageCosts;
import io.swagger.model.BackupsOrderServiceTypes;
import io.swagger.v3.oas.annotations.media.Schema;
import io.micronaut.core.annotation.Introspected;
import io.micronaut.validation.Validated;
import javax.validation.Valid;
import javax.validation.constraints.*;

/**
 * Available backup storage packages and pricing for ordering a new backup service.
 */
@Schema(description = "Available backup storage packages and pricing for ordering a new backup service.")
@Validated
@Introspected

public class BackupsOrder   {
  @JsonProperty("packageCosts")
  private BackupsOrderPackageCosts packageCosts = null;

  @JsonProperty("serviceTypes")
  private BackupsOrderServiceTypes serviceTypes = null;

  public BackupsOrder packageCosts(BackupsOrderPackageCosts packageCosts) {
    this.packageCosts = packageCosts;
    return this;
  }

  /**
   * Get packageCosts
   * @return packageCosts
  **/
  @Schema(required = true, description = "")
  @NotNull

  @Valid
  public BackupsOrderPackageCosts getPackageCosts() {
    return packageCosts;
  }

  public void setPackageCosts(BackupsOrderPackageCosts packageCosts) {
    this.packageCosts = packageCosts;
  }

  public BackupsOrder serviceTypes(BackupsOrderServiceTypes serviceTypes) {
    this.serviceTypes = serviceTypes;
    return this;
  }

  /**
   * Get serviceTypes
   * @return serviceTypes
  **/
  @Schema(required = true, description = "")
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
    return Objects.equals(this.packageCosts, backupsOrder.packageCosts) &&
        Objects.equals(this.serviceTypes, backupsOrder.serviceTypes);
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
