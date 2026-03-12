package io.swagger.model;

import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import javax.validation.constraints.*;

import io.swagger.v3.oas.annotations.media.Schema;
import java.util.Objects;

import javax.xml.bind.annotation.*;



public class WebsiteBackupsInner   {
  private String name = null;
  private Integer size = null;

  /**
   **/
  public WebsiteBackupsInner name(String name) {
    this.name = name;
    return this;
  }

  
  
  @Schema(required = true, description = "")
  @JsonProperty("name")
  @NotNull
  public String getName() {
    return name;
  }
  public void setName(String name) {
    this.name = name;
  }

  /**
   **/
  public WebsiteBackupsInner size(Integer size) {
    this.size = size;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("size")
  @NotNull
  public Integer getSize() {
    return size;
  }
  public void setSize(Integer size) {
    this.size = size;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    WebsiteBackupsInner websiteBackupsInner = (WebsiteBackupsInner) o;
    return Objects.equals(name, websiteBackupsInner.name) &&
        Objects.equals(size, websiteBackupsInner.size);
  }

  @Override
  public int hashCode() {
    return Objects.hash(name, size);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class WebsiteBackupsInner {\n");
    
    sb.append("    name: ").append(toIndentedString(name)).append("\n");
    sb.append("    size: ").append(toIndentedString(size)).append("\n");
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
