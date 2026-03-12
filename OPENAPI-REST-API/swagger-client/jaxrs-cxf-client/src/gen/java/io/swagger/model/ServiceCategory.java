package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;

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
  * A Category of Services.  This is the broadest grouping within a module.
 **/
@Schema(description="A Category of Services.  This is the broadest grouping within a module.")
public class ServiceCategory   {
  
  @Schema(example = "1", required = true, description = "")
  private Integer categoryId = null;
  
  @Schema(example = "OpenVZ Virtual Servers", required = true, description = "")
  private String categoryName = null;
  
  @Schema(example = "openvz", required = true, description = "")
  private String categoryTag = null;
  
  @Schema(example = "vps", required = true, description = "")
  private String categoryModule = null;
 /**
   * Get categoryId
   * @return categoryId
  **/
  @JsonProperty("category_id")
  public Integer getCategoryId() {
    return categoryId;
  }

  public void setCategoryId(Integer categoryId) {
    this.categoryId = categoryId;
  }

  public ServiceCategory categoryId(Integer categoryId) {
    this.categoryId = categoryId;
    return this;
  }

 /**
   * Get categoryName
   * @return categoryName
  **/
  @JsonProperty("category_name")
  public String getCategoryName() {
    return categoryName;
  }

  public void setCategoryName(String categoryName) {
    this.categoryName = categoryName;
  }

  public ServiceCategory categoryName(String categoryName) {
    this.categoryName = categoryName;
    return this;
  }

 /**
   * Get categoryTag
   * @return categoryTag
  **/
  @JsonProperty("category_tag")
  public String getCategoryTag() {
    return categoryTag;
  }

  public void setCategoryTag(String categoryTag) {
    this.categoryTag = categoryTag;
  }

  public ServiceCategory categoryTag(String categoryTag) {
    this.categoryTag = categoryTag;
    return this;
  }

 /**
   * Get categoryModule
   * @return categoryModule
  **/
  @JsonProperty("category_module")
  public String getCategoryModule() {
    return categoryModule;
  }

  public void setCategoryModule(String categoryModule) {
    this.categoryModule = categoryModule;
  }

  public ServiceCategory categoryModule(String categoryModule) {
    this.categoryModule = categoryModule;
    return this;
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
