package org.openapitools.model;

import org.openapitools.model.QuickserverOrderDistroSelUbuntu;

import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * Distribution selection.
 */
@ApiModel(description="Distribution selection.")

public class QuickserverOrderDistroSel  {
  
  @ApiModelProperty(value = "")

  private QuickserverOrderDistroSelUbuntu ubuntu;
 /**
   * Get ubuntu
   * @return ubuntu
  **/
  @JsonProperty("Ubuntu")
  public QuickserverOrderDistroSelUbuntu getUbuntu() {
    return ubuntu;
  }

  public void setUbuntu(QuickserverOrderDistroSelUbuntu ubuntu) {
    this.ubuntu = ubuntu;
  }

  public QuickserverOrderDistroSel ubuntu(QuickserverOrderDistroSelUbuntu ubuntu) {
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
    QuickserverOrderDistroSel quickserverOrderDistroSel = (QuickserverOrderDistroSel) o;
    return Objects.equals(this.ubuntu, quickserverOrderDistroSel.ubuntu);
  }

  @Override
  public int hashCode() {
    return Objects.hash(ubuntu);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class QuickserverOrderDistroSel {\n");
    
    sb.append("    ubuntu: ").append(toIndentedString(ubuntu)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private static String toIndentedString(Object o) {
    return o == null ? "null" : o.toString().replace("\n", "\n    ");
  }
}

