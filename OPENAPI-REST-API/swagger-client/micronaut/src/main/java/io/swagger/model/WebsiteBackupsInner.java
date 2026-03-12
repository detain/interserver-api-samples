package io.swagger.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import io.micronaut.core.annotation.Introspected;
import io.micronaut.validation.Validated;
import javax.validation.Valid;
import javax.validation.constraints.*;

/**
 * WebsiteBackupsInner
 */
@Validated
@Introspected

public class WebsiteBackupsInner   {
  @JsonProperty("name")
  private String name = null;

  @JsonProperty("size")
  private Integer size = null;

  public WebsiteBackupsInner name(String name) {
    this.name = name;
    return this;
  }

  /**
   * Get name
   * @return name
  **/
  @Schema(required = true, description = "")
  @NotNull

  public String getName() {
    return name;
  }

  public void setName(String name) {
    this.name = name;
  }

  public WebsiteBackupsInner size(Integer size) {
    this.size = size;
    return this;
  }

  /**
   * Get size
   * @return size
  **/
  @Schema(description = "")
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
    return Objects.equals(this.name, websiteBackupsInner.name) &&
        Objects.equals(this.size, websiteBackupsInner.size);
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
