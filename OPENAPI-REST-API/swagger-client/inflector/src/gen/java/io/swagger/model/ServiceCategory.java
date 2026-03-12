package io.swagger.model;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;


/**
 * A Category of Services.  This is the broadest grouping within a module.
 **/
@Schema(description = "A Category of Services.  This is the broadest grouping within a module.")


public class ServiceCategory   {
  @JsonProperty("category_id")
  private Integer categoryId = null;
  @JsonProperty("category_name")
  private String categoryName = null;
  @JsonProperty("category_tag")
  private String categoryTag = null;
  @JsonProperty("category_module")
  private String categoryModule = null;
  /**
   **/
  public ServiceCategory categoryId(Integer categoryId) {
    this.categoryId = categoryId;
    return this;
  }

  
  @Schema(example = "1", required = true, description = "")
  @JsonProperty("category_id")
  public Integer getCategoryId() {
    return categoryId;
  }
  public void setCategoryId(Integer categoryId) {
    this.categoryId = categoryId;
  }

  /**
   **/
  public ServiceCategory categoryName(String categoryName) {
    this.categoryName = categoryName;
    return this;
  }

  
  @Schema(example = "OpenVZ Virtual Servers", required = true, description = "")
  @JsonProperty("category_name")
  public String getCategoryName() {
    return categoryName;
  }
  public void setCategoryName(String categoryName) {
    this.categoryName = categoryName;
  }

  /**
   **/
  public ServiceCategory categoryTag(String categoryTag) {
    this.categoryTag = categoryTag;
    return this;
  }

  
  @Schema(example = "openvz", required = true, description = "")
  @JsonProperty("category_tag")
  public String getCategoryTag() {
    return categoryTag;
  }
  public void setCategoryTag(String categoryTag) {
    this.categoryTag = categoryTag;
  }

  /**
   **/
  public ServiceCategory categoryModule(String categoryModule) {
    this.categoryModule = categoryModule;
    return this;
  }

  
  @Schema(example = "vps", required = true, description = "")
  @JsonProperty("category_module")
  public String getCategoryModule() {
    return categoryModule;
  }
  public void setCategoryModule(String categoryModule) {
    this.categoryModule = categoryModule;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ServiceCategory serviceCategory = (ServiceCategory) o;
    return Objects.equals(categoryId, serviceCategory.categoryId) &&
        Objects.equals(categoryName, serviceCategory.categoryName) &&
        Objects.equals(categoryTag, serviceCategory.categoryTag) &&
        Objects.equals(categoryModule, serviceCategory.categoryModule);
  }

  @Override
  public int hashCode() {
    return Objects.hash(categoryId, categoryName, categoryTag, categoryModule);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ServiceCategory {\n");
    sb.append("    categoryId: ").append(toIndentedString(categoryId)).append("\n");
    sb.append("    categoryName: ").append(toIndentedString(categoryName)).append("\n");
    sb.append("    categoryTag: ").append(toIndentedString(categoryTag)).append("\n");
    sb.append("    categoryModule: ").append(toIndentedString(categoryModule)).append("\n");
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
