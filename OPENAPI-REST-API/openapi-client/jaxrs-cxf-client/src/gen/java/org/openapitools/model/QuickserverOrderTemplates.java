package org.openapitools.model;

import org.openapitools.model.QuickserverOrderTemplatesUbuntu64;

import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * Templates details.
 */
@ApiModel(description="Templates details.")

public class QuickserverOrderTemplates  {
  
  @ApiModelProperty(value = "")

  private QuickserverOrderTemplatesUbuntu64 ubuntu = new ArrayList<>();
 /**
   * Get ubuntu
   * @return ubuntu
  **/
  @JsonProperty("Ubuntu")
  public QuickserverOrderTemplatesUbuntu64 getUbuntu() {
    return ubuntu;
  }

  public void setUbuntu(QuickserverOrderTemplatesUbuntu64 ubuntu) {
    this.ubuntu = ubuntu;
  }

  public QuickserverOrderTemplates ubuntu(QuickserverOrderTemplatesUbuntu64 ubuntu) {
    this.ubuntu = ubuntu;
    return this;
  }

  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    QuickserverOrderTemplates quickserverOrderTemplates = (QuickserverOrderTemplates) o;
    return Objects.equals(this.ubuntu, quickserverOrderTemplates.ubuntu);
  }

  @Override
  public int hashCode() {
    return Objects.hash(ubuntu);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class QuickserverOrderTemplates {\n");
    
    sb.append("    ubuntu: ").append(toIndentedString(ubuntu)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private static String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

