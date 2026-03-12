package org.openapitools.model;


import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class QuickserverOrderDistroSelUbuntu  {
  
 /**
  * Selected distribution for Ubuntu.
  */
  @ApiModelProperty(example = "Ubuntu", value = "Selected distribution for Ubuntu.")

  private String ubuntu;
 /**
   * Selected distribution for Ubuntu.
   * @return ubuntu
  **/
  @JsonProperty("Ubuntu")
  public String getUbuntu() {
    return ubuntu;
  }

  public void setUbuntu(String ubuntu) {
    this.ubuntu = ubuntu;
  }

  public QuickserverOrderDistroSelUbuntu ubuntu(String ubuntu) {
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
    QuickserverOrderDistroSelUbuntu quickserverOrderDistroSelUbuntu = (QuickserverOrderDistroSelUbuntu) o;
    return Objects.equals(this.ubuntu, quickserverOrderDistroSelUbuntu.ubuntu);
  }

  @Override
  public int hashCode() {
    return Objects.hash(ubuntu);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class QuickserverOrderDistroSelUbuntu {\n");
    
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

