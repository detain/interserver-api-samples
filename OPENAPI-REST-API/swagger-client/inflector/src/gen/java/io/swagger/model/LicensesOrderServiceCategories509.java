package io.swagger.model;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;





public class LicensesOrderServiceCategories509   {
  @JsonProperty("category_id")
  private String categoryId = null;
  @JsonProperty("category_name")
  private String categoryName = null;
  @JsonProperty("category_tag")
  private String categoryTag = null;
  @JsonProperty("category_module")
  private String categoryModule = null;
  /**
   * Category ID
   **/
  public LicensesOrderServiceCategories509 categoryId(String categoryId) {
    this.categoryId = categoryId;
    return this;
  }

  
  @Schema(example = "509", description = "Category ID")
  @JsonProperty("category_id")
  public String getCategoryId() {
    return categoryId;
  }
  public void setCategoryId(String categoryId) {
    this.categoryId = categoryId;
  }

  /**
   * Category Name
   **/
  public LicensesOrderServiceCategories509 categoryName(String categoryName) {
    this.categoryName = categoryName;
    return this;
  }

  
  @Schema(example = "Webuzo", description = "Category Name")
  @JsonProperty("category_name")
  public String getCategoryName() {
    return categoryName;
  }
  public void setCategoryName(String categoryName) {
    this.categoryName = categoryName;
  }

  /**
   * Category Tag
   **/
  public LicensesOrderServiceCategories509 categoryTag(String categoryTag) {
    this.categoryTag = categoryTag;
    return this;
  }

  
  @Schema(example = "webuzo", description = "Category Tag")
  @JsonProperty("category_tag")
  public String getCategoryTag() {
    return categoryTag;
  }
  public void setCategoryTag(String categoryTag) {
    this.categoryTag = categoryTag;
  }

  /**
   * Category Module
   **/
  public LicensesOrderServiceCategories509 categoryModule(String categoryModule) {
    this.categoryModule = categoryModule;
    return this;
  }

  
  @Schema(example = "licenses", description = "Category Module")
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
    LicensesOrderServiceCategories509 licensesOrderServiceCategories509 = (LicensesOrderServiceCategories509) o;
    return Objects.equals(categoryId, licensesOrderServiceCategories509.categoryId) &&
        Objects.equals(categoryName, licensesOrderServiceCategories509.categoryName) &&
        Objects.equals(categoryTag, licensesOrderServiceCategories509.categoryTag) &&
        Objects.equals(categoryModule, licensesOrderServiceCategories509.categoryModule);
  }

  @Override
  public int hashCode() {
    return Objects.hash(categoryId, categoryName, categoryTag, categoryModule);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class LicensesOrderServiceCategories509 {\n");
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
