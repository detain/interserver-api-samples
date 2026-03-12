package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * A general grouping of services within a category.
 **/
import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
@Schema(description = "A general grouping of services within a category.")

public class ServiceType   {

  private @Valid Integer stId = null;

  private @Valid String stName = null;

  private @Valid Integer stCategory = null;

  private @Valid String stModule = null;

  /**
   **/
  public ServiceType stId(Integer stId) {
    this.stId = stId;
    return this;
  }

  
  @ApiModelProperty(example = "600", required = true, value = "")
  @JsonProperty("st_id")
  @NotNull

  public Integer getStId() {
    return stId;
  }
  public void setStId(Integer stId) {
    this.stId = stId;
  }

  /**
   **/
  public ServiceType stName(String stName) {
    this.stName = stName;
    return this;
  }

  
  @ApiModelProperty(example = "Dedicated Server", required = true, value = "")
  @JsonProperty("st_name")
  @NotNull

  public String getStName() {
    return stName;
  }
  public void setStName(String stName) {
    this.stName = stName;
  }

  /**
   **/
  public ServiceType stCategory(Integer stCategory) {
    this.stCategory = stCategory;
    return this;
  }

  
  @ApiModelProperty(example = "600", required = true, value = "")
  @JsonProperty("st_category")
  @NotNull

  public Integer getStCategory() {
    return stCategory;
  }
  public void setStCategory(Integer stCategory) {
    this.stCategory = stCategory;
  }

  /**
   **/
  public ServiceType stModule(String stModule) {
    this.stModule = stModule;
    return this;
  }

  
  @ApiModelProperty(example = "servers", required = true, value = "")
  @JsonProperty("st_module")
  @NotNull

  public String getStModule() {
    return stModule;
  }
  public void setStModule(String stModule) {
    this.stModule = stModule;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ServiceType serviceType = (ServiceType) o;
    return Objects.equals(stId, serviceType.stId) &&
        Objects.equals(stName, serviceType.stName) &&
        Objects.equals(stCategory, serviceType.stCategory) &&
        Objects.equals(stModule, serviceType.stModule);
  }

  @Override
  public int hashCode() {
    return Objects.hash(stId, stName, stCategory, stModule);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ServiceType {\n");
    
    sb.append("    stId: ").append(toIndentedString(stId)).append("\n");
    sb.append("    stName: ").append(toIndentedString(stName)).append("\n");
    sb.append("    stCategory: ").append(toIndentedString(stCategory)).append("\n");
    sb.append("    stModule: ").append(toIndentedString(stModule)).append("\n");
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
