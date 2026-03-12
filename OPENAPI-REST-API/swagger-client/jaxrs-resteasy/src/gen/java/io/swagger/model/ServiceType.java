package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;

@Schema(description="A general grouping of services within a category.")

public class ServiceType   {
  private Integer stId = null;  private String stName = null;  private Integer stCategory = null;  private String stModule = null;

  /**
   **/
  
  @Schema(example = "600", required = true, description = "")
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
  
  @Schema(example = "Dedicated Server", required = true, description = "")
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
  
  @Schema(example = "600", required = true, description = "")
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
  
  @Schema(example = "servers", required = true, description = "")
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
