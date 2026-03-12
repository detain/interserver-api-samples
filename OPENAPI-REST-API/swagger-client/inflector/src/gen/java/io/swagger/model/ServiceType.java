package io.swagger.model;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;


/**
 * A general grouping of services within a category.
 **/
@Schema(description = "A general grouping of services within a category.")


public class ServiceType   {
  @JsonProperty("st_id")
  private Integer stId = null;
  @JsonProperty("st_name")
  private String stName = null;
  @JsonProperty("st_category")
  private Integer stCategory = null;
  @JsonProperty("st_module")
  private String stModule = null;
  /**
   **/
  public ServiceType stId(Integer stId) {
    this.stId = stId;
    return this;
  }

  
  @Schema(example = "600", required = true, description = "")
  @JsonProperty("st_id")
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

  
  @Schema(example = "Dedicated Server", required = true, description = "")
  @JsonProperty("st_name")
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

  
  @Schema(example = "600", required = true, description = "")
  @JsonProperty("st_category")
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

  
  @Schema(example = "servers", required = true, description = "")
  @JsonProperty("st_module")
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
